#include<iostream>
#include<string>


class Student{
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

    void setName(std::string name){this->name = name;}
    void setAge(int age){this->age = age;}
    void setGpa(double gpa){this->gpa = gpa;}
    
    std::string getName(){return this->name;}
    int getAge(){return this->age;}    
    double getGpa(){return this->gpa;}    

    // 1. Implement a member function void study() in the Student class that prints 
    //    a message indicating that the student is studying.
    void study(){std::cout<<"Student is studying.";}

    // 2. Implement a member function void displayInfo() in the Student class that
    //    displays the student’s name, age, and GPA.
    void displayInfo(){
        std::cout<<"Display studnet info ..."<< std::endl;
        std::cout<<"Name: " << getName() << std::endl;
        std::cout<<"Age: " << getAge() << std::endl;
        std::cout<<"GPA: " << getGpa() << std::endl;
    }
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