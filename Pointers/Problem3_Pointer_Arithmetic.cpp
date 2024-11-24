#include<iostream>

int main(){
    // Declares an integer array of 10 elements and initializes it with values
    const int size = 10;
    int* numbers = new int[size];

    for (int i = 0; i < size; i++){
       
        std::cout<< "Enter number: ";
        std::cin>> numbers[i];
    }
    
    // Uses a pointer to iterate through the array and print the elements in reverse order(starting from the last element)
    for (int i = size - 1; i >= 0; i--) {
        std::cout<< *( numbers + i ) << "\t";
    }
    std::cout << std::endl;
    delete[] numbers;
    numbers = NULL;

    system("pause>nul");
    return 0;
}