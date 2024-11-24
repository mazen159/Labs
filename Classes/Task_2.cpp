#include<iostream>
#include<string>


class Student{
    std::string name;
    int age;
    double gpa;
public:
    // 1. Implement a default constructor that initializes the data members 
    //    with default values (e.g., empty string, age of 0, and GPA of 0.0).
    Student()
    :name(""),age(0),gpa(0)
    {std::cout<<"Object is created\n";}
    
    // 2. Implement a parameterized constructor that accepts values for the data members
    //    and initializes them accordingly.
    Student(std::string name, int age, double gpa)
    :name(name),age(age),gpa(gpa)
    {}

    // 3. Implement a destructor that prints a message when an object is destroyed.
    ~Student(){std::cout<<"Object is destroyed.\n";}

    void setName(std::string name){this->name = name;}
    void setAge(int age){this->age = age;}
    void setGpa(double gpa){this->gpa = gpa;}
    
    std::string getName(){return this->name;}
    int getAge(){return this->age;}    
    double getGpa(){return this->gpa;}    
};


int main(){
    Student s1;
    std::cout<<"before\n";
    {
        Student s2;
        std::cout<<"inside\n";
    }
    std::cout<<"after\n";


    return 0;
}