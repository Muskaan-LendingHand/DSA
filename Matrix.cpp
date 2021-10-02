#include <iostream>
using namespace std;
  
#define MAX 100
  
// function of diagonal square
void diagonalsquare(int mat[][MAX], int row,
                                 int column)
{
    // This loop is for finding of square of 
    // the first side of diagonal elements
    cout << " \nDiagonal one : ";
    for (int i = 0; i < row; i++)
    {
  
        // printing direct square of diagonal 
        // element there is no need to check 
        // condition
        cout << mat[i][i] * mat[i][i] << " ";
    }
  
    // This loop is for finding square of the 
    // second side of diagonal elements
    cout << " \n\nDiagonal two : ";
    for (int i = 0; i < row; i++)
    {
        // printing direct square of diagonal 
        // element in the second side
        cout << mat[i][row - i - 1] * mat[i][row - i - 1] 
            << " ";
    }
}
  
// Driver code
int main()
{
    int mat[][MAX] = { { 2, 5, 7 },
                    { 3, 7, 2 }, 
                    { 5, 6, 9 } };
    diagonalsquare(mat, 3, 3);
    return 0;
}
