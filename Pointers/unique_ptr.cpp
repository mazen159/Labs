#include<iostream>
#include<memory>

using namespace std;

class myClass{
public:
    myClass(){cout<<"Constructor invoked" << endl;}
    ~myClass(){cout<<"Destructor invoked" << endl;}
};

int main(){
    /* 
    Smart pointers deallocate memory automatically, 
    means that you don't have to worry about potential 
    memory leaks in your program

    Unique pointers can't be shared
    
    */
   
    unique_ptr<int>uniPtr1 = make_unique<int>(25);
    // prints memory address
    cout<<uniPtr1<<endl;    
    // prints the value pointed to by unique ptr  
    cout<<*uniPtr1<<endl;   

    // Ownership can't be shared
    unique_ptr<int>uniPtr2 = uniPtr1;
    unique_ptr<int>uniPtr2 = move(uniPtr1);
    cout<<*uniPtr2<<endl;
    // null pointer exception error
    cout<<*uniPtr1<<endl;



    system("pause>nul");
    return 0;
}