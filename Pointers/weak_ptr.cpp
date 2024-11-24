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
        Weak pointer will not increase the number of its owners,
        we use them to observe objects in memory but won't keep
        that object alive. aka locate a specific object in memory
        without keeping it alive if nothing else needs it wherase
        shared ptr will keep that object alive 

        A shared_ptr can share ownership of the object with
        other shared_ptrs and uses reference counting to keep
        track of how many pointers are pointing to the same
        object. A weak_ptr does not own the object, but can
        observe it through a shared_ptr.

    */
   
    {
        weak_ptr<int>weakPtr;
        {
            shared_ptr<int>sharedPtr = make_shared<int>(25);
            weakPtr = sharedPtr;
        }
    }
        
    system("pause>nul");
    return 0;
}