//Author- Veda Venkatesh Kamat
//USN- NNM24EE128
//Date- 08 June 2026
//Dept- Electrical and Electronics Engineering Department
//College- NMAM Institute of Technology
//Purpose- The purpose of this program is to find the inverse of nxn matrix
//Reference- Rafael Rossales and Stack Overflow Community, "Matrix Inverse in C using Determinant, Cofactor and Transpose Method," Stack Overflow

#include <stdio.h>   // for printf and scanf
#include <math.h>    // for pow() and fabs()

// telling compiler these functions exist before use
float determinant(int n, float matrix[][n]);
void cofactor(int n, float matrix[][n]);
void transpose(int n, float matrix[][n], float cof[][n]);

// this function find the det value of matrix
float determinant(int n, float matrix[][n])
{
    float det = 0;              // det start with 0
    float submatrix[n][n];      // small matrix for calculation

    // if only 1 element, just return it
    if (n == 1)
    {
        return matrix[0][0];
    }

    int sign = 1;   // sign alternate between +1 and -1

    // go through each column in first row
    for (int col = 0; col < n; col++)
    {
        int subi = 0;   // row index for submatrix

        // make small matrix by removing row 0 and current col
        for (int i = 1; i < n; i++)
        {
            int subj = 0;   // col index for submatrix

            for (int j = 0; j < n; j++)
            {
                if (j == col)
                    continue;   // skip the current column

                submatrix[subi][subj] = matrix[i][j];  // copy element
                subj++;
            }
            subi++;
        }

        // add this term to det, call itself for smaller matrix
        det += sign * matrix[0][col] * determinant(n - 1, submatrix);
        sign = -sign;   // flip the sign
    }

    return det;   // send back final det value
}

// this function make cofactor matrix of given matrix
void cofactor(int n, float matrix[][n])
{
    float cof[n][n];        // store cofactor values here
    float submatrix[n][n];  // temp small matrix

    // go through every element
    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < n; col++)
        {
            int subi = 0;

            // remove current row and col to make submatrix
            for (int i = 0; i < n; i++)
            {
                if (i == row)
                    continue;   // skip current row

                int subj = 0;

                for (int j = 0; j < n; j++)
                {
                    if (j == col)
                        continue;   // skip current col

                    submatrix[subi][subj] = matrix[i][j];  // copy element
                    subj++;
                }

                subi++;
            }

            // cofactor = (-1)^(row+col) * det of submatrix
            cof[row][col] =
                pow(-1, row + col) *
                determinant(n - 1, submatrix);
        }
    }

    // now go find transpose and inverse
    transpose(n, matrix, cof);
}

// this function find adjoint, then divide by det to get inverse
void transpose(int n, float matrix[][n], float cof[][n])
{
    float adj[n][n];        // adjoint matrix
    float inverse[n][n];    // final inverse matrix

    // adjoint = transpose of cofactor matrix
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            adj[i][j] = cof[j][i];   // flip row and col
        }
    }

    float det = determinant(n, matrix);   // need det for dividing

    // each element divide by det
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            inverse[i][j] = adj[i][j] / det;   // adj/det = inverse
        }
    }

    printf("\nInverse Matrix:\n\n");

    // print the inverse matrix
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
    scanf("%d", &n);   // take size of matrix

    float matrix[n][n];   // make nxn matrix

    printf("\nEnter matrix elements:\n");

    // take all elements from user
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("Element [%d][%d] = ", i, j);
            scanf("%f", &matrix[i][j]);   // store element
        }
    }

    printf("\nEntered Matrix:\n\n");

    // show the matrix user entered
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%8.2f ", matrix[i][j]);
        }
        printf("\n");
    }

    float det = determinant(n, matrix);   // find det of matrix

    printf("\nDeterminant = %.3f\n", det);

    // if det is zero, inverse not possible
    if (fabs(det) < 0.0001)
    {
        printf("\nInverse does not exist (determinant = 0).\n");
    }
    else
    {
        cofactor(n, matrix);   // det not zero so find inverse
    }

    return 0;   // program done
}