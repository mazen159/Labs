#include<iostream>
#include<string>
#include<list>
class Student{
private:
    std::string name;
    int age;
    double gpa;

public:
    //default constructor
    Student()
    :name(""), age(0), gpa(0.0)
    {std::cout<<"default constructor\n";}

    // parameterized constructor
    Student(std::string name, int age, double gpa)
    {
        this->name = name;
        this->age = age;
        this->gpa = gpa;
        std::cout<<"parameterized constructor\n";
    }

    // destructor
    ~Student(){std::cout<<"object is destroyed\n";}

    //setters
    void setName(std::string name){this->name = name;}
    void setAge(int age){this->age = age;}
    void setGpa(double gpa){this->gpa = gpa;}

    //getters
    std::string getName(){return this->name;}
    int getAge(){return this->age;}
    double getGpa(){return this->gpa;}

    void study(){std::cout<<"is studying.\n";}
    void displayInfo(){
        std::cout<<"Name: " << name <<std::endl;
        std::cout<<"Age: " << age<<std::endl;
        std::cout<<"GPA: " << gpa<<std::endl;
    }
};

Student searchStudent(std::list<Student> _list , int id){
    std::list<Student>::iterator stdPtr =  _list.begin();
    for (int i = 0; i < id; i++)
    {
        stdPtr++;
    }
    return *stdPtr;   
}



int main(){
    Student std1;
    Student std2("Adam", 25, 5);
    Student std3("Eman", 30, 4.5);

    std1.setName("Eslam");
    std1.setAge(35);
    std1.setGpa(3.5);
    
    std::cout<< std2.getName() <<std::endl;
    std::cout<< std2.getAge() <<std::endl;
    std::cout<< std2.getGpa() <<std::endl;


    std::list<Student> studentsList;
    studentsList.push_back(std1);
    studentsList.push_back(std2);
    studentsList.push_back(std3);

    std::string name = "";
    int age = 0;
    double gpa = 0.0;

    int response = 0;
    int id = 0;

    do{
        std::cout<<"\nPlease, choose action from the following menu to be performed!\n"
                 <<"1 - Create a new Student object using the parameterized constructor and set its values.\n" 
                 <<"2 - Display the information of a student using the displayInfo() function. \n"
                 <<"3 - Make a student study using the study() function. \n"
                 <<"  - Type in ( -1 ) to quit\n\n";
        std::cout<<"Enter response: ";
        std::cin>>response;
        switch(response){
            case 1:
            {
                std::cout<<"Enter name: ";
                std::cin>>name;
                std::cout<<"Enter age: ";
                std::cin>>age;
                std::cout<<"Enter gpa: ";
                std::cin>>gpa;
                studentsList.push_back(Student(name, age , gpa));
                break;
            }
            case 2:
            {
                std::cout<<"Enter ID: ";
                std::cin>>id;
                searchStudent(studentsList , id).displayInfo();
                break;
            }
            case 3:
            {
                std::cout<<"Enter ID: ";
                std::cin>>id;
                Student temp = searchStudent(studentsList , id);
                std::cout<<temp.getName() <<" ";
                temp.study();
                break;
            }
            case -1:
            {
                std::cout<<"Program quit...\n";
                break;
            }

            default:
            { 
                std::cout<<"Invalid input ...\n"
                         <<"Please, choose action from the following menu to be performed!\n"
                         <<"1 - Create a new Student object using the parameterized constructor and set its values." 
                         <<"2 - Display the information of a student using the displayInfo() function. \n"
                         <<"3 - Make a student study using the study() function. \n"
                         <<"  - Type in ( -1 ) to quit\n\n";
                std::cout<<"Enter response: ";
                std::cin>>response;
                break;
            }
        }
    
    }while(response != -1);

    return 0;
}