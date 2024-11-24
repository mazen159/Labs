#include<iostream>

void printNumber( int* numberPtr){
    std::cout<< *numberPtr << std::endl;
}

void printLetter( char* letterPtr){
    std::cout<< *letterPtr << std::endl;
}

void print( void* ptr, char type){
    switch(type){
        case 'i':
            // type casting into an integer pointer
            // then access the value that is stored in it
            std::cout<< (*(int*)ptr) << std::endl;
            break;
        case 'c':
            std::cout<< (*(char*)ptr) << std::endl;
            break;
    }
}


int main(){
    int number = 5;
    char letter = 'a';
    printNumber(&number);
    printLetter(&letter);

    print(&number, 'i');
    print(&letter, 'c');

    system("pause>0");
    return 0;
}
