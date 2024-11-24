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
    Shared pointer can be shared between multiple owners, that means you can assign one raw pointer to multiple owners

    Memory allocation will be automatically deleted when there are no more pointers pointing to that memory location. Since, that memory location has multiple owners, every single owner will be destroyed at the end of its scope, and when there are no more owners the memory location itself will be deallocated which means that memory location will be free.
    */
    
    {
        shared_ptr<myClass>sharedPtr1 = make_shared<myClass>();
        // use_count has the count of all owners
        cout<<"Shared count: " << sharedPtr1.use_count()<<endl;
        {
            shared_ptr<myClass>sharedPtr2 = sharedPtr1;
            cout<<"Shared count: " << sharedPtr1.use_count()<<endl;
            cout<<"Shared count: " << sharedPtr2.use_count()<<endl;
        }
        cout<<"Shared count: " << sharedPtr1.use_count()<<endl;
    }
        
    system("pause>nul");
    return 0;
}