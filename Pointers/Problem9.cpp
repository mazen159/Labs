#include<iostream>

int main(){
    // Declares an array of ﬁve character pointers
    char** names_of_cities = new char*[5];

    // Initializes each pointer with a string (e.g.,namesofcities)
    for (int i = 0; i < 5; i++){
        names_of_cities[i] = new char;
        std::cout<<"Enter name of city: ";
        std::cin>> names_of_cities[i];
    }

    // Prints the strings using pointer notation
    for (int i = 0; i < 5; i++){
        for (int j = 0; j < sizeof(names_of_cities[i]); j++){
            std::cout<<names_of_cities[i][j];
        }    
        std::cout<< std::endl;
    }

    system("pause>nul");
    return 0;
}