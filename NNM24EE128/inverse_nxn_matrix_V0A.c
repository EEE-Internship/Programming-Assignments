//Author- Veda Venkatesh Kamat                                                                          
//USN- NNM24EE128                                                                                        
//Date- 08 June 2026                                                                                     
//Dept- Electrical and Electronics Engineering Department                                                
//College- NMAM Institute of Technology                                                          
//Purpose- The purpose of this program is to find the inverse of nxn matrix
//Reference- Rafael Rossales and Stack Overflow Community, "Matrix Inverse in C using Determinant, Cofactor and Transpose Method," Stack Overflowdir


#include <stdio.h>
#include <math.h>

// Function prototypes
float determinant(int n, float matrix[][n]);
void cofactor(int n, float matrix[][n]);
void transpose(int n, float matrix[][n], float cof[][n]);

// Function to calculate determinant
float determinant(int n, float matrix[][n])
{
    float det = 0;
    float submatrix[n][n];

    // Base case: 1x1 matrix
    if (n == 1)
    {
        return matrix[0][0];
    }

    int sign = 1;

    // Expand along first row
    for (int col = 0; col < n; col++)
    {
        int subi = 0;

        // Create submatrix
        for (int i = 1; i < n; i++)
        {
            int subj = 0;

            for (int j = 0; j < n; j++)
            {
                if (j == col)
                    continue;

                submatrix[subi][subj] = matrix[i][j];
                subj++;
            }
            subi++;
        }

        det += sign * matrix[0][col] * determinant(n - 1, submatrix);
        sign = -sign;
    }

    return det;
}

// Function to find cofactor matrix
void cofactor(int n, float matrix[][n])
{
    float cof[n][n];
    float submatrix[n][n];

    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < n; col++)
        {
            int subi = 0;

            for (int i = 0; i < n; i++)
            {
                if (i == row)
                    continue;

                int subj = 0;

                for (int j = 0; j < n; j++)
                {
                    if (j == col)
                        continue;

                    submatrix[subi][subj] = matrix[i][j];
                    subj++;
                }

                subi++;
            }

            cof[row][col] =
                pow(-1, row + col) *
                determinant(n - 1, submatrix);
        }
    }

    transpose(n, matrix, cof);
}

// Function to find transpose and inverse
void transpose(int n, float matrix[][n], float cof[][n])
{
    float adj[n][n];
    float inverse[n][n];

    // Transpose cofactor matrix to get adjoint
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            adj[i][j] = cof[j][i];
        }
    }

    float det = determinant(n, matrix);

    // Calculate inverse
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            inverse[i][j] = adj[i][j] / det;
        }
    }

    printf("\nInverse Matrix:\n\n");

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%8.3f ", inverse[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int n;

    printf("Enter order of matrix (n): ");
    scanf("%d", &n);

    float matrix[n][n];

    printf("\nEnter matrix elements:\n");

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("Element [%d][%d] = ", i, j);
            scanf("%f", &matrix[i][j]);
        }
    }

    printf("\nEntered Matrix:\n\n");

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%8.2f ", matrix[i][j]);
        }
        printf("\n");
    }

    float det = determinant(n, matrix);

    printf("\nDeterminant = %.3f\n", det);

    if (fabs(det) < 0.0001)
    {
        printf("\nInverse does not exist (determinant = 0).\n");
    }
    else
    {
        cofactor(n, matrix);
    }

    return 0;
}