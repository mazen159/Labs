#include<iostream>
#include<string>
using namespace std;

int main(){

    int rows = 3;
    int cols = 2;
    int intArray[rows][cols] = {{1, 2},
                                {3, 4},
                                {5, 6}};

      for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout<<"[ " << i << " , " << j << " ] = " ; 
            cin>> intArray[i][j];
        }
        cout<<endl;
    }

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout<< intArray[i][j] << " ";
        }
        cout<<endl;
    }


    
    
    
    
    return 0;
}