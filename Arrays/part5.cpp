#include<iostream>
#include<utility>
int main(){
    const int size = 5;
    int numbers[size] = {100, 20, 13, 4, -5};
    int min;
    for (int i = 0; i < size - 1; i++){
        min = i;   
        for (int j = i + 1; j < size; j++){
            if (numbers[j] < numbers[min]){
                min = j;
            }
        }
        if(min != i);
            std::swap(numbers[min], numbers[i]);
    }    
    for (int i = 0; i < size; i++)
        std::cout<< numbers[i] << " ";
    
    return 0;
}