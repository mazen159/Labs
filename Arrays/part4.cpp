#include<iostream>

int main(){
    const int size = 5;
    int key = 0;
    int numbers[size] = {1, 2, 3, 4, 5};
    std::cout << "Enter key: ";
    std::cin >> key;
    for (int i = 0; i < size; i++){
        if (key == numbers[i]){
            std::cout<<"Found at index: " << i << std::endl;
            break;
        }   
    }    
    return 0;
}