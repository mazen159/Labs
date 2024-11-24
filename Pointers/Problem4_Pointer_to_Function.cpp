#include<iostream>

// Write a C++ program that deﬁnes a function square which takes an integer 
// as a parameter and returns the square of that integer     
int sqaure(int x){
    return x * x;
}

int main(){
    // Then, use a pointer to this function to calculate the squares of several integers 
    // and print the results
    int (*returnSqaure)(int) = sqaure;
    std::cout<<"try pointer to function " << sqaure(5) << std::endl;
    std::cout<<"try pointer to function " << returnSqaure(6) << std::endl;
    system("pause>nul");
    return 0;
}