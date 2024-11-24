#include<iostream>

int main(){
    
    // Declare an integer variable x and initialize it with a value
    int x = 13;

    // Declare a pointer to an integer and assign the address of x to it
    int* intPtr = &x;
    
    // Print the value of x and the value pointed to by the pointer 
    std::cout << "Value of x = " << x << std::endl
              << "Value Pointed to by the pointer = " << *intPtr << std::endl;
    
    // Modify the value pointed to by the pointer and print the updated value
    *intPtr = 14;
    
    std::cout << "Updated value = " << *intPtr << std::endl;

    system("pause>nul");
    return 0;
}