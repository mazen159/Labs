#include<iostream>


int main(){
    const int size = 5;
    int sum = 0, avg = 0;
    int numbers[size] = {1, 2, 3, 4, 5};
    for (int i = 0; i < size ; i++)
        sum += i;
    avg = sum / size;
    std::cout<<"Sum = " << sum << ", Avg = " << avg;
    return 0;
}