/*
Name: Amal Najeeb
USN: NNM24EE012
12th june 2026
Dept of Electrical and Electronics Engineering
NMAM Institute of Technology

About: The following code find the rank of a NxM matrix
*/
#include <stdio.h>

int main() {
    int N = 3, M = 3;
    int i, j, k;
    float multiplier;
    int A[N][M];

    // Input matrix
    printf("Enter value for %dx%d matrix:\n", N, M);
    for(i = 0; i < N; i++) {
        for(j = 0; j < M; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    // Display input matrix
    printf("\nInput Matrix:\n");
    for(i = 0; i < N; i++) {
        for(j = 0; j < M; j++) {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }

    //applying gaussian elimination
    for(i = 0; i < N - 1; i++) {           //pivot row
        for(k = i + 1; k < N; k++) {       //rows below pivot
            if (A[i][i] == 0)
                continue;                  //avoid division by zero
            multiplier = (float)A[k][i] / A[i][i];
            for(j = 0; j < M; j++) {
                A[k][j] = A[k][j] - multiplier * A[i][j];  //row elimination
            }
        }
    }

    // Display output matrix
    printf("\nOutput Matrix:\n");
    for(i = 0; i < N; i++) {
        for(j = 0; j < M; j++) {
            printf("%.0f ", (float)A[i][j]);
        }
        printf("\n");
    }

    // Find rank
    int rank = 0, flag;

    for(i = 0; i < N; i++) {
        flag = 0;
        for(j = 0; j < M; j++) {
            if(A[i][j] != 0) {
                flag = 1;
                break;
            }
        }
        if(flag)
            rank++;
    }

    printf("\nRank = %d\n", rank);

    return 0;
}

/*
Enter value for 3x3 matrix:
1
2
3
2
3
2
2
3
4

Input Matrix:
1 2 3 
2 3 2 
2 3 4 

Output Matrix:
1 2 3 
0 -1 -4 
0 0 2 

Rank = 3
*/