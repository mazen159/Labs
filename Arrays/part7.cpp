#include<iostream>

int main(){
    const int size = 5;
    int numbers[size] = {1, 2, 3, 4, 5};
    // int n = sizeof(numbers) / sizeof(numbers[0]);
    int k = 1;
    // if rotation > size of numbers array
    k = k % size;
    for (int i = 0; i < size; i++){
        if (i < k )
        {
            // print rightmost kth element
            std::cout << numbers[size + i - k] << " ";
        } else {
            // print array after kth element
            std::cout<< numbers[i - k] << " ";
        }
    }
    return 0;
}