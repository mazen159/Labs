#include<iostream>

int main(){
    const int size = 5;
    int numbers[size] = {1, 2, 3, 4 ,5};
    int max = numbers[0];
    int min = numbers[0];
    for (int i = 0; i < size; i++){
        if (numbers[i] < min)
            min = numbers[i];
            
        if (numbers[i] > max)
            max = numbers[i];
    }
    std::cout<<"Max = " << max << ", Min = " << min;
    return 0;
}