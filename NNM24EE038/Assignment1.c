/*******************************
 * Author: Gagan Shetty 
 * USN: NNM24EE038 
 * Dept: Electrical and Electronics Engineering 
 * Date: 07/06/2026
 * Purpose: To understand and Calculate inverse of matrix A for given order nxn
 * 
 ****************************/


#include <stdio.h>

// Function to extract a submatrix (cofactor matrix) by excluding a specific row and column
void getCofactor(int matrixSize, float A[matrixSize][matrixSize], float temporary[matrixSize-1][matrixSize-1], int excludeRow, int excludeCol) {
    int temporaryRow = 0, temporaryCol = 0;

    // Loop through every element of the matrix
    for (int rowIdx = 0; rowIdx < matrixSize; rowIdx++) {
        for (int colIdx = 0; colIdx < matrixSize; colIdx++) {
            // Copy into temporary matrix only if it's not in the excluded row and column
            if (rowIdx != excludeRow && colIdx != excludeCol) {
                temporary[temporaryRow][temporaryCol++] = A[rowIdx][colIdx];

                // If the temporary column is filled, reset column index and increment row index
                if (temporaryCol == matrixSize - 1) {
                    temporaryCol = 0;
                    temporaryRow++;
                }
            }
        }
    }
}

// Recursive function to calculate the determinant of a matrix
float determinant(int matrixSize, float A[matrixSize][matrixSize]) {
    // Base case: if matrix contains a single element
    if (matrixSize == 1) {
        return A[0][0];
    }

    float det = 0;
    int sign = 1; // Used to alternate the sign (+, -, +, -) for cofactor expansion

    // Variable-Length Array (VLA) to store the submatrix
    float temporary[matrixSize-1][matrixSize-1];

    // Iterate across the first row to calculate the determinant
    for (int colIdx = 0; colIdx < matrixSize; colIdx++) {
        // Get the submatrix excluding row 0 and current column
        getCofactor(matrixSize, A, temporary, 0, colIdx);

        // Add the current term to the determinant
        det += sign * A[0][colIdx] * determinant(matrixSize - 1, temporary);

        // Alternate the sign for the next term
        sign = -sign;
    }

    return det;
}

// Function to calculate the Adjoint of the matrix
void adjoint(int matrixSize, float A[matrixSize][matrixSize], float adj[matrixSize][matrixSize]) {
    // Edge case for 1x1 matrix
    if (matrixSize == 1) {
        adj[0][0] = 1;
        return;
    }

    int sign = 1;
    
    // Variable-Length Array (VLA) to store cofactors
    float temporary[matrixSize-1][matrixSize-1];

    for (int rowIdx = 0; rowIdx < matrixSize; rowIdx++) {
        for (int colIdx = 0; colIdx < matrixSize; colIdx++) {
            // Get the cofactor of A[rowIdx][colIdx]
            getCofactor(matrixSize, A, temporary, rowIdx, colIdx);

            // Determine if the sign is positive or negative
            // Positive if the sum of row and column indices is even, negative if odd
            sign = ((rowIdx + colIdx) % 2 == 0) ? 1 : -1;

            // Note: We assign to adj[colIdx][rowIdx] instead of adj[rowIdx][colIdx].
            // This inherently transposes the cofactor matrix, giving us the Adjoint.
            adj[colIdx][rowIdx] = sign * determinant(matrixSize - 1, temporary);
        }
    }
}

void main() {
    int matrixSize;

    printf("Enter matrix size (e.g. 3 for a 3x3 matrix): ");
    scanf("%d", &matrixSize);

    if (matrixSize <= 0) {
        printf("Invalid matrix size.\n");
        return; // Exits the void main function
    }

    // Declare Variable-Length Arrays (VLAs) directly on the stack
    float A[matrixSize][matrixSize];
    float adj[matrixSize][matrixSize];
    float inverse[matrixSize][matrixSize];

    // Take user input for the matrix elements
    printf("Enter matrix elements:\n");
    for (int rowIdx = 0; rowIdx < matrixSize; rowIdx++) {
        for (int colIdx = 0; colIdx < matrixSize; colIdx++) {
            printf("A[%d][%d] = ", rowIdx, colIdx);
            scanf("%f", &A[rowIdx][colIdx]);
        }
    }

    // Calculate the determinant
    float det = determinant(matrixSize, A);
    printf("\nDeterminant = %.2f\n", det);

    // If the determinant is 0, the matrix is singular and has no inverse
    if (det == 0) {
        printf("Inverse does not exist (Determinant is 0).\n");
        return; 
    }

    // Calculate the Adjoint matrix
    adjoint(matrixSize, A, adj);

    // Print the Adjoint matrix
    printf("\nAdjoint Matrix:\n");
    for (int rowIdx = 0; rowIdx < matrixSize; rowIdx++) {
        for (int colIdx = 0; colIdx < matrixSize; colIdx++) {
            printf("%8.2f ", adj[rowIdx][colIdx]);
        }
        printf("\n");
    }

    // Calculate and print the Inverse matrix
    printf("\nInverse Matrix:\n");
    for (int rowIdx = 0; rowIdx < matrixSize; rowIdx++) {
        for (int colIdx = 0; colIdx < matrixSize; colIdx++) {
            // The formula for the inverse is: (1 / Determinant) * Adjoint
            inverse[rowIdx][colIdx] = adj[rowIdx][colIdx] / det;
            printf("%8.4f ", inverse[rowIdx][colIdx]);
        }
        printf("\n");
    }
}

/******************************************
 * Output:-
 * 
 * Enter matrix size (e.g. 3 for a 3x3 matrix): 2
 * Enter matrix elements:
 * A[0][0] = 1
 * A[0][1] = 2
 * A[1][0] = 3
 * A[1][1] = 1
 * 
 * Determinant = -5.00
 * 
 * Adjoint Matrix:
 *   1.00    -2.00 
 *   -3.00     1.00
 * 
 * Inverse Matrix:
 *   -0.2000   0.4000 
 *   0.6000  -0.2000 
 * 
 **************************************************/
