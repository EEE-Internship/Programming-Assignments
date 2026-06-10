/*******************************
 * Author: Gagan Shetty
 * Usn : NNM24EE038
 * Dept: Electrical and Electronics Engineering
 * College: NMAMIT
 * Date: 10/06/2026
 * Purpose : To understand rank of the matrix
*/

#include <stdio.h>

void main() {
    // Declaring variables
    float A[10][10];
    int rows, columns, isZeroRow = 1, rank = 0;

    // Asking for order
    printf("Enter the order of matrix A: ");
    scanf("%d %d", &rows, &columns);

    // Asking for vectors
    printf("Enter vector A: ");

    for (int row = 0; row < rows; row++)
    {
        for (int column = 0; column < columns; column++)
        {
            scanf("%f", &A[row][column]);
            
        }
    }

    for (int row = 0; row < rows; row++)
    {
        for (int column = 0; column < columns; column++)
        {
            if (A[row][column] != 0)
            {
                isZeroRow = 0;
                break;
            }
            
        }
        if(!isZeroRow) {
            rank++;
        }

        isZeroRow = 0;
    }
    

    
    printf("Rank of the Matrix A is %d", rank);
}

/*****************************************************
 * Output:
 * Enter vector A: 1 0 0
 * Enter vector B: 0 1 0
 * Vector C is perpendicular to both Vector A and Vector B.
 * 
 *****************************************************/