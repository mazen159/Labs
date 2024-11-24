#include<iostream>

int main(){
    const int size = 6;
    int temp;
    int numbers[size] = {1, 2, 3, 4, 5, 6};
    for (int i = 0; i < size / 2 ; i++)
    {
        temp = numbers[i];
        numbers[i] = numbers[size - i - 1];
        numbers[size - i - 1] = temp;
    }
    for (int i = 0; i < size; i++)
        std::cout << numbers[i] << " ";      
    return 0;
}