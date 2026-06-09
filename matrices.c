/*Author:GHANASHRI M
USN:NNM24EE042
Date:8th June 2026
Dept:Electrical & Electronics Engineering
College:NMAM Institute of Technology
About the program: To find inverse of a nxn matrix*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 100

// Function to swap two rows
void swap_rows(double **matrix, int row1, int row2, int n) {
    for (int i = 0; i < n; i++) {
        double temp = matrix[row1][i];
        matrix[row1][i] = matrix[row2][i];
        matrix[row2][i] = temp;
    }
}

// Function to find inverse using Gauss-Jordan elimination
int inverse_matrix(double **A, double **I, int n) {
    for (int i = 0; i < n; i++) {
        if (A[i][i] == 0) {
            int swap_row = i + 1;
            while (swap_row < n && A[swap_row][i] == 0) swap_row++;
            if (swap_row == n) return 0; // Singular matrix
            swap_rows(A, i, swap_row, n);
            swap_rows(I, i, swap_row, n);
        }

        double pivot = A[i][i];
        for (int j = 0; j < n; j++) {
            A[i][j] /= pivot;
            I[i][j] /= pivot;
        }

        for (int k = 0; k < n; k++) {
            if (k != i) {
                double factor = A[k][i];
                for (int j = 0; j < n; j++) {
                    A[k][j] -= factor * A[i][j];
                    I[k][j] -= factor * I[i][j];
                }
            }
        }
    }
    return 1;
}

int main() {
    int n = SIZE;
    srand(time(NULL));

    // Allocate memory
    double **A = (double **)malloc(n * sizeof(double *));
    double **I = (double **)malloc(n * sizeof(double *));
    for (int i = 0; i < n; i++) {
        A[i] = (double *)malloc(n * sizeof(double));
        I[i] = (double *)malloc(n * sizeof(double));
    }

    // Fill matrix with random values
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            A[i][j] = (rand() % 10) + 1; // values between 1 and 10
            I[i][j] = (i == j) ? 1.0 : 0.0;
        }
    }

    // Compute inverse
    if (inverse_matrix(A, I, n)) {
        printf("Inverse matrix:\n");
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                printf("%lf ", I[i][j]);
            }
            printf("\n");
        }
    } else {
        printf("Matrix is singular and cannot be inverted.\n");
    }

    // Free memory
    for (int i = 0; i < n; i++) {
        free(A[i]);
        free(I[i]);
    }
    free(A);
    free(I);

    return 0;
}

