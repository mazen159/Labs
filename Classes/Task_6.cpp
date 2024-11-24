#include<iostream>
#include<string>
#include<list>


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

    void study(){std::cout<<"Student is studying." << std::endl;}

    void displayInfo(){
        std::cout<<"Studnet info" << std::endl;
        std::cout<<"Name: " << getName() << std::endl;
        std::cout<<"Age: " << getAge() << std::endl;
        std::cout<<"GPA: " << getGpa() << std::endl << std::endl;
    }
};


// used in menu driven program to search for a student in a list
Student searchStudent(std::list<Student> _list, int id){
    // --> An iterator acts like a pointer that indicates the items inside the list. 
    // --> Iterators are used mainly to move through the data inside a list. 
    // --> Iterators are also used to indicate the memory address of the containers.
    
    // --> This begin() function has an iterator that is returned with the value 
    // --> showing the first element.
    std::list<Student>::iterator stdPtr = _list.begin();

    for (int i = 0; i < id; i++)
    {
        stdPtr++;
    }
    return *stdPtr;

}


int main(){
    Student std1; 
    Student std2("Adam", 25, 4.0);

    std1.setName("Eman");
    std1.setAge(25);
    std1.setGpa(4.5);

    std2.getName();
    std2.getAge();
    std2.getGpa();

    // 1. In the main() function, create a menu-driven program that allows the user 
    //    to perform the following actions:
    //        – Create a new Student object using the parameterized constructor and set its values.
    //        – Display the information of a student using the displayInfo() function.
    //        – Make a student study using the study() function.

    // first we need to create a list containing some students
    // #include<list> we need to include list header file
    std::list<Student> studentsList;
    Student std3("Ahmed", 25, 3);
    studentsList.push_back(std1);
    studentsList.push_back(std2);
    studentsList.push_back(std3);

    // passed to the parametrized constructor to initialzie and create a new student
    std::string name = "";
    int age = 0;
    double gpa = 0.0;

    // to ask user if he wants to continue and perform another action or just quit
    int response = 0;

    // to search for a student with that id in a list
    int id;


    do{
        std::cout<<"Please, choose any action from the menu provided!" << std::endl
                 <<"1 - Create a new student object using the parameterized constructor and set its values." << std::endl
                 <<"2 - Display the information of a student using the displayInfo() function."  << std::endl
                 <<"3 - Make a student study using the study() function"  << std::endl
                 <<"  - Type in ( -1 ) to quit\n\n\n";

        std::cout<<"Enter response: ";
        std::cin>> response;
        
        switch(response){
            // – Create a new Student object using the parameterized constructor and set its values.
            case 1:
                std::cout<<"Create new student (in process)... " << std::endl;
                std::cout<<"Enter name: ";
                std::cin>> name;
                std::cout<<"Enter age: ";
                std::cin>> age;
                std::cout<<"Enter GPA: ";
                std::cin>> gpa;
                studentsList.push_back(Student(name, age, gpa));
                std::cout<<"Create new student (done) ... \n\n";
                break;
        
            // – Display the information of a student using the displayInfo() function.
            case 2:
                // to display student info, we need to search it in our list then display info
                // to do so we create function called searchStudent
                std::cout<<"Display student info (in process) ..." << std::endl;
                std::cout<<"Enter ID: ";
                std::cin>>id;
                searchStudent(studentsList, id).displayInfo();
                std::cout<<"Display student info (done) ... \n\n";
                break;
            
            // – Make a student study using the study() function.
            case 3:
                // to make student study, we need to search it in our list then make it study
                // to do so we create function called searchStudent
                std::cout<<"Make student study (in process)..." << std::endl;
                std::cout<<"Enter ID: ";
                std::cin>>id;
                searchStudent(studentsList, id).study();
                std::cout<<"Make student study (done) ... \n\n";
                break;   

            case -1 :
                std::cout<<"Program quit ..." << std::endl;
                break;  

            default:
                std::cout<<"Invalid input ..." << std::endl
                         <<"Please, choose any action from the menu provided!" << std::endl
                         <<"1 - Create a new student object using the parameterized constructor and set its values." << std::endl
                         <<"2 - Display the information of a student using the displayInfo() function."  << std::endl
                         <<"3 - Make a student study using the study() function"  << std::endl
                         <<"  - Type in ( -1 ) to quit\n\n\n";

                std::cout<<"Enter response: ";
                std::cin>> response;
                break;
        }
    
    } while(response != -1);
    return 0;
}