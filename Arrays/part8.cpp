#include<iostream>
int main(){
    const int size = 5;
    std::string names[size] = {"Mai", "Eslam", "Adam", "Mohammed", "Saleim"};
    int max_length = 0;
    int max_length_index = 0;
    for (int i = 0; i < size; i++){
       if (names[i].length() > max_length){
            max_length = names[i].length();
            max_length_index = i;
       }
    }
    std::cout<<"largest name is " << names[max_length_index] << ", with length of " << max_length << std::endl;


    return 0;
}