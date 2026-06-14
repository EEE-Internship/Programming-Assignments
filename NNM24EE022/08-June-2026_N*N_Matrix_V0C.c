#include <stdio.h>

/*
Anwitha Bhat
NNM24EE022
08-June-2026
Department of Electrical and Electronics
NMAM Institute of Technology, Nitte

Program to find the inverse of an n x n matrix using
the Gauss-Jordan Method
*/

int main()
{
    int n, m, i, j, k;
    float a[20][40], f;

    // Input dimensions
    printf("Enter number of rows and columns: ");
    scanf("%d%d", &n, &m);

    // Check if matrix is square
    if (n != m)
    {
        printf("Inverse does not exist (Matrix is not square)\n");
        return 0;
    }

    // Input matrix elements
    printf("Enter matrix elements:\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%f", &a[i][j]);
        }
    }

    // Form augmented matrix [A | I]
    for (i = 0; i < n; i++)
    {
        for (j = n; j < 2 * n; j++)
        {
            if (j == i + n)
                a[i][j] = 1;
            else
                a[i][j] = 0;
        }
    }

    // Gauss-Jordan Elimination
    for (i = 0; i < n; i++)
    {
        // Check for singular matrix
        if (a[i][i] == 0)
        {
            printf("Inverse does not exist (Singular Matrix)\n");
            return 0;
        }

        // Make pivot element equal to 1
        f = a[i][i];

        for (j = 0; j < 2 * n; j++)
        {
            a[i][j] = a[i][j] / f;
        }

        // Make all other elements in the pivot column zero
        for (k = 0; k < n; k++)
        {
            if (k != i)
            {
                f = a[k][i];

                for (j = 0; j < 2 * n; j++)
                {
                    a[k][j] = a[k][j] - f * a[i][j];
                }
            }
        }
    }

    // Display inverse matrix
    printf("\nInverse Matrix:\n");

    for (i = 0; i < n; i++)
    {
        for (j = n; j < 2 * n; j++)
        {
            printf("%.3f\t", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}
