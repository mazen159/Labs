#include<iostream>
int calc_sum(int* arr, int size){
    int sum = 0;
    for (int i = 0; i < 5; i++)
    {
        sum += arr[i]; 
    }
    return sum;
}

void processData(int* intArray , int size, int* sum, int* avg, int* max, int* min){
    int s = 0;
    for (int i = 0; i < 5; i++)
    {
        if(intArray[i] > *max){
            *max = intArray[i];
        }
        if(intArray[i] < *min){
            *min = intArray[i];
        }
        s += intArray[i]; 
    }
    *sum = s;
    *avg = *sum / size;
}

int main(){
    // Dynamically allocates memory for an array of 5 integers 
    const int size = 5;

    int* numbers = new int[size];
   
    // Initializes each element of the array with user input
    for (int i = 0; i < size; i++){
        std::cout<< "Enter number: ";
        std::cin>> numbers[i];
        std::cin>> *(numbers + i);
    }

    // print the array using pointer notation
    for (int i = 0; i < size; i++)
        std::cout<< *(numbers + i) << " , ";    
    std::cout << std::endl;
    
    // Calculates the sum, average, and maximum of the elements and prints the results
    int sum = 0, avg = 0;
    int min = *numbers, max = numbers[0];
    
    processData(numbers, size, &sum, &avg, &max, &min);
    
    std::cout<< "sum = " << sum << std::endl;
    std::cout<< "average = " << avg << std::endl;
    std::cout<< "max = " << max << std::endl;
    std::cout<< "min = " << min << std::endl;

    // Deallocates the dynamically allocated memory. 
    delete [] numbers;
    numbers = NULL; 

    system("pause>nul");
    return 0;
}