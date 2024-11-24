#include<iostream>
#include<string>


class Student{
    std::string name;
    int age;
    double gpa;
public:
    Student():name(""),age(0),gpa(0)
    {}
    
    Student(std::string name, int age, double gpa):name(name),age(age),gpa(gpa)
    {}
    
    ~Student(){std::cout<<"Object is destroyed.\n";}



    void setName(std::string name){this->name = name;}
    void setAge(int age){this->age = age;}
    void setGpa(double gpa){this->gpa = gpa;}
    
    std::string getName(){return this->name;}
    int getAge(){return this->age;}    
    double getGpa(){return this->gpa;}    
};


int main(){
    // 1. Create two Student objects: one using the default constructor 
    //    and another using the parameterized constructor.
    Student std1; 
    Student std2("Adam", 25, 4.0);

    // 2. Set and display values for the data members of these objects using member functions.
    std1.setName("Eman");
    std1.setAge(25);
    std1.setGpa(4.5);

    std2.getName();
    std2.getAge();
    std2.getGpa();
    
    return 0;
}