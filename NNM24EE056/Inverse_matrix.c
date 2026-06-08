/*
Author:Keerthan
USN:NNM24EE056
Date:06.06.2026
Department:Electrical and Electronics Engineering
College:NMAMIT
About that purpose:To Find the Inverse Matrix
*/

#include <stdio.h>
#include <math.h>
int main() 
{
    int n, i, j, k;
    float mat[10][20]; // Augmented matrix width is 2 * n (max size 10x20)

    
    printf(" Enter the order of the matrix (n): ");
    scanf("%d", &n);

    
    printf(" Enter the elements of the matrix\n");
    for(i = 0; i < n; i++) 
    {
        for(j = 0; j < n; j++) 
        {
            scanf("%f", &mat[i][j]);
        }
    }

    
    for(i = 0; i < n; i++) 
    {
        for(j = 0; j < n; j++) 
        {
            if(i == j)
                mat[i][j + n] = 1.0;
            else
                mat[i][j + n] = 0.0;
        }
    }

    for(i = 0; i < n; i++) 
    {
        // Pivot selection and validation checking
        if(mat[i][i] == 0.0) 
        {
            printf(" Mathematical Error: The matrix is singular and cannot be inverted.\n");
            return 0;
        }

        // Reduce the diagonal element to 1 by dividing the entire row
        float pivot = mat[i][i];
        for(j = 0; j < 2 * n; j++) 
        {
            mat[i][j] /= pivot;
        }

        
        for(k = 0; k < n; k++) 
        {
            if(k != i) 
            {
                float factor = mat[k][i];
                for(j = 0; j < 2 * n; j++) 
                {
                    mat[k][j] -= factor * mat[i][j];
                }
            }
        }
    }


    printf("\n Inverse Matrix is:\n");
    for(i = 0; i < n; i++) 
    {
        for(j = n; j < 2 * n; j++) 
        {
            printf("%8.3f", mat[i][j]);
        }
        printf("\n");
    }

    return 0;
}