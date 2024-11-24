#include<iostream>

int main(){
    const int size = 10;
    int duplicates[size] = {10, 4, 2, 3, 4, 2, 9, 7, 1, 10};
    for (int i = 0; i < size; i++){
        for (int j = i + 1; j < size; j++){
            if (duplicates[i] == duplicates[j]){
                std::cout<< duplicates[j] << " ";
                break;
            }
        }
    }
    return 0;
}