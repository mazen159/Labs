#include<iostream>

class Student{
private:
    std::string name;
    int age;
    double gpa;
public:
    void setName(std::string n){
        name = n;
    }

    std::string getName(){
        return name;
    }
};

int main(){

    Student s1, s2;
    s1.getName();
    {
        Student s3;

    }
    


    return 0;
}