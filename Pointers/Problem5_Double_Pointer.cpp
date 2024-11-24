#include<iostream>

int main(){
    int rows = 0, cols = 0;
    // Dynamically create a 2D integer array(matrix)
    int** matrix2D = new int*[rows];
   
    // Prompt the user for the number of rows and columns
    std::cout << "Enter num of rows: ";
    std::cin >> rows;
    std::cout << "Enter num of cols: ";
    std::cin >> cols;

    // Allocate memory for the matrix
    for (int i = 0; i < rows; i++){
        matrix2D[i] = new int[cols];
        // *(matrix2D + i) = new int[cols];
    }

    // Fill the matrix with user input values
    for (int i = 0; i < rows; i++){
        for (int j = 0; j < cols; j++){
            std::cout<<"matrix2D" << "[ " << i << " , " << j << " ] " << " : ";
            std::cin >> *(*(matrix2D + i) + j);
            std::cin>> matrix2D[i][j];
            // std::cin>>*(*(matrix2D + i) + j)
        }
    }

    // Print the matrix 
    for (int i = 0; i < rows; i++){
        std::cout << "[ ";
        for (int j = 0; j < cols; j++){
            if (j < cols - 1)
                std::cout << *(*(matrix2D + i) + j) << " | ";
            else 
                std::cout << *(*(matrix2D + i) + j);
        }
        std::cout << " ]\n";
    }

    // free the allocated memory 
    for( int i = 0 ; i < rows ; i++ ) {
        delete [] matrix2D[i];
    }
    delete [] matrix2D;
    matrix2D = NULL;

    system("pause>nul");
    return 0;
}