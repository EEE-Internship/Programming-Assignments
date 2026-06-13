/*******************************
 * Author: Gagan Shetty
 * Usn : NNM24EE038
 * Dept: Electrical and Electronics Engineering
 * College: NMAMIT
 * Date: 13/06/2026
 * Purpose : To understand to create nxn matrix and learn to find its inverse
 */

#include <stdio.h>

int main()
{
    // Initialize the order variable
    int order;

    // Read matrix order
    printf("Enter the order N for the matrix: ");
    scanf("%d", &order);

    // Initialize the matrices
    double A[order][order];
    double Ainv[order][order];

    // Asking for matrix elements
    printf("Enter the matrix elements: \n");
    for (int row = 0; row < order; row++)
    {
        for (int col = 0; col < order; col++)
        {
            scanf("%lf", &A[row][col]);
        }
    }

    // Initialize A inverse as identity matrix
    for (int row = 0; row < order; row++)
    {
        for (int col = 0; col < order; col++)
        {
            if (row == col)
                Ainv[row][col] = 1.0;
            else
                Ainv[row][col] = 0.0;
        }
    }

    // Original input Matrix
    printf("Matrix A: \n");
    for (int row = 0; row < order; row++)
    {
        for (int col = 0; col < order; col++)
        {
            printf("%.2lf ", A[row][col]);
        }
        printf("\n");
    }

    // Apply Gauss elimination method
    for (int row = 0; row < order; row++)
    {
        double pivot = A[row][row];

        // Checking if current pivot element is zero
        if (pivot == 0)
        {
            printf("\nInverse does not exist.\n");
            return 0;
        }

        // making the pivot element as 1
        for (int col = 0; col < order; col++)
        {
            A[row][col] /= pivot;
            Ainv[row][col] /= pivot;
        }

        // Applying row operations to make other elements 0
        for (int other = 0; other < order; other++)
        {
            if (other != row)
            {
                double factor = A[other][row];
                for (int col = 0; col < order; col++)
                {
                    A[other][col] -= factor * A[row][col];
                    Ainv[other][col] -= factor * Ainv[row][col];
                }
            }
        }
    }
    // Output inverse matrix
    printf("\nInverse Matrix A:\n");
    for (int row = 0; row < order; row++)
    {
        for (int col = 0; col < order; col++)
        {
            printf("%.4lf ", Ainv[row][col]);
        }
        printf("\n");
    }

    return 0;
}

/*******************************
 * Enter the order N for the matrix: 2
 * Enter the matrix elements:
 * 1
 * 2
 * 5
 * 7
 *
 * Matrix A:
 * 1.00  2.00
 * 5.00  7.00
 *
 * Inverse Matrix A:
 * -2.3333  0.6667
 *  1.6667 -0.3333
 * 
 *******************************/