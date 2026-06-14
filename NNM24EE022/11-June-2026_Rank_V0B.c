/*
Anwitha Bhat
NNM24EE022
10-June-2026
Department of Electrical and Electronics
NMAM Institute of Technology Nitte
Program which gives the rank of a matrix */
#include <stdio.h>

/*
Program: Find Rank of a Matrix using Gauss Elimination
Author: (Your Name)
Department: Electrical and Electronics Engineering
*/

int main()
{
    int m, n, i, j, k, rank;
    float a[10][10], factor;

    // Input number of rows and columns
    printf("Enter rows and columns: ");
    scanf("%d%d", &m, &n);

    // Input matrix elements
    printf("Enter matrix elements:\n");
    for(i = 0; i < m; i++)
    {
        for(j = 0; j < n; j++)
        {
            scanf("%f", &a[i][j]);
        }
    }

    // Initial rank is number of column
    rank = n;

    // Gauss elimination process
    for(i = 0; i < rank; i++)
    {
        // If pivot element is non-zero
        if(a[i][i] != 0)
        {
            // Make all other elements in current column zero
            for(j = 0; j < m; j++)
            {
                if(j != i)
                {
                    // get the factor for elimination
                    factor = a[j][i] / a[i][i];



                    // Row operation: Rj = Rj - factor * Ri
                    for(k = 0; k < rank; k++)

                    {
                        a[j][k] = a[j][k] - factor * a[i][k];
                    }
                }
            }
        }
        else
        {
            // If pivot is zero

            rank--;

            for(j = 0; j < m; j++)
            {
                a[j][i] = a[j][rank];
            }

            i--; // recheck current column
        }
    }

    // Output final rank
    printf("\nRank of the matrix = %d\n", rank);

    return 0;
}
