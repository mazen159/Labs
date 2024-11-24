#include<iostream>
#include<string>


class Student{
    // 1. Define a class named Student with the following private data members:
    //      – std::string name (Student’s name)
    //      – int age (Student’s age)
    //      – double gpa (Student’s GPA)
    std::string name;
    int age;
    double gpa;

    // 2. Add public member functions to set and get the values of these data members.
public:
    // setters
    void setName(std::string name){name = name;}
    void setAge(int age){this->age = age;}
    void setGpa(double gpa){this->gpa = gpa;}
    // getters
    std::string getName(){return this->name;}
    int getAge(){return this->age;}    
    double getGpa(){return this->gpa;}    
};


int main(){

    return 0;
}