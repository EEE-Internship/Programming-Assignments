/* Author:Shivali
   USN:NNM24EE103
   Date:8.6.26
   Department: Electrical and Electronics Engineering
   College:Nmam Institute of Technology
  This program finds and displays the inverse of an N×N matrix */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Function to allocate memory for an NxN matrix
double **allocateMatrix(int n)
{
    double **matrix = (double **)malloc(n * sizeof(double *));

    for (int i = 0; i < n; i++)
    {
        matrix[i] = (double *)malloc(n * sizeof(double));
    }

    return matrix;
}

// Function to free allocated memory
void freeMatrix(double **matrix, int n)
{
    for (int i = 0; i < n; i++)
    {
        free(matrix[i]);
    }
    free(matrix);
}

// Function to print a matrix
void printMatrix(double **matrix, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%10.4lf ", matrix[i][j]);
        }
        printf("\n");
    }
}

// Function to find the inverse of a matrix
int invertMatrix(double **a, double **inverse, int n)
{
    // Create an identity matrix
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            inverse[i][j] = (i == j) ? 1.0 : 0.0;
        }
    }

    // Perform row operations
    for (int i = 0; i < n; i++)
    {
        // Find the row with the largest pivot element
        int maxRow = i;

        for (int k = i + 1; k < n; k++)
        {
            if (fabs(a[k][i]) > fabs(a[maxRow][i]))
            {
                maxRow = k;
            }
        }

        // Check if matrix is singular
        if (fabs(a[maxRow][i]) < 1e-9)
        {
            return 0;
        }

        // Swap rows if necessary
        if (maxRow != i)
        {
            double *temp = a[i];
            a[i] = a[maxRow];
            a[maxRow] = temp;

            temp = inverse[i];
            inverse[i] = inverse[maxRow];
            inverse[maxRow] = temp;
        }

        // Make pivot element equal to 1
        double pivot = a[i][i];

        for (int j = 0; j < n; j++)
        {
            a[i][j] /= pivot;
            inverse[i][j] /= pivot;
        }

        // Make all other elements in the pivot column equal to 0
        for (int j = 0; j < n; j++)
        {
            if (j != i)
            {
                double factor = a[j][i];

                for (int k = 0; k < n; k++)
                {
                    a[j][k] -= factor * a[i][k];
                    inverse[j][k] -= factor * inverse[i][k];
                }
            }
        }
    }

    return 1;
}

int main()
{
    int n;

    // Read matrix order
    printf("Enter the order of the matrix: ");
    scanf("%d", &n);

    // Validate matrix size
    if (n <= 0)
    {
        printf("Invalid matrix size.\n");
        return 1;
    }

    // Allocate memory for matrices
    double **a = allocateMatrix(n);
    double **inverse = allocateMatrix(n);

    // Read matrix elements
    printf("Enter the elements of the matrix:\n");

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%lf", &a[i][j]);
        }
    }

    // Find and display inverse matrix
    if (invertMatrix(a, inverse, n))
    {
        printf("\nInverse Matrix:\n");
        printMatrix(inverse, n);
    }
    else
    {
        printf("\nInverse does not exist (Singular Matrix).\n");
    }

    // Free allocated memory
    freeMatrix(a, n);
    freeMatrix(inverse, n);

    return 0;
}
//ref:geeksforgeeks.org