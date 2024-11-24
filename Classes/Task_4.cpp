#include<iostream>
#include<string>


class Student{
    // 1. Change the access level of the data members to be private.
private:
    std::string name;
    int age;
    double gpa;

public:
    Student():name(""),age(0),gpa(0)
    {}
    
    Student(std::string name, int age, double gpa):name(name),age(age),gpa(gpa)
    {}
    
    ~Student(){std::cout<<"Object is destroyed.\n";}

    // 2. Modify the Student class to use public member functions to set and get the
    //    values of the data members.
    void setName(std::string name){this->name = name;}
    void setAge(int age){this->age = age;}
    void setGpa(double gpa){this->gpa = gpa;}
    
    std::string getName(){return this->name;}
    int getAge(){return this->age;}    
    double getGpa(){return this->gpa;}    
};


int main(){
    Student std1; 
    Student std2("Adam", 25, 4.0);

    std1.setName("Eman");
    std1.setAge(25);
    std1.setGpa(4.5);

    std2.getName();
    std2.getAge();
    std2.getGpa();




    return 0;
}