#include<iostream>

int main(){

    int x = 10;
    std::cout<< x << std::endl;
    std::cout<< &x << std::endl;

    int* intPtr = &x;

    int ar[3] = {1,2,3};
    std::cout<< ar << std::endl;
    std::cout<< &ar[0] << std::endl;

    return 0;
}