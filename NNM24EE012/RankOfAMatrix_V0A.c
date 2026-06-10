/*
Name: Amal Najeeb
USN: NNM24EE012
10th june 2026
Dept of Electrical and Electronics Engineering
NMAM Institute of Technology

About: The following code find the rank of a 2x2 matrix
*/

#include <stdio.h>

int determinant(int i, int j, int rows, int cols, int A[rows][cols]){
    return A[i][i] * A[j][j] - A[i][j] * A[j][i];
}

int main(){
    //declaring variables
    int N = 2,M = 2;                      //size of matrix
    int i,j,k;                      //loop variables
    int A[N][M], order;   //array of size Nx2N to make augmented matrix

    //creating input matrix
    printf("Enter value for %dx%d matrix: ", N, M);
    for(i=0; i<N; i++){
        for(j=0; j<M; j++){
            scanf("%d", &A[i][j]);
        }
    }

    //displaying input matrix
    printf("\nInput Matrix:\n");
    for(i=0; i<N; i++) {
        for(j=0; j<M; j++) {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }

    if(M < N){             
        order = N;
    } else {
        order = M;
    }

    int det = determinant(0, 1, N, M, A);
    
    printf("determinant = %d\n", det);

    if(det != 0){
        printf("rank = 2");
    } else if (A[0][0] == 0 && A[1][0] == 0 && A[0][1] ==0 && A[1][1] == 0) {
        printf("rank = 0");
    } else {
        printf("rank = 1");
    }
}

/*
Output
------

1)
Enter value for 2x2 matrix: 0
0
0
0

Input Matrix:
0 0 
0 0 
determinant = 0
rank = 0

2)
Enter value for 2x2 matrix: 1
2
3
6

Input Matrix:
1 2 
3 6 
determinant = 0
rank = 1

3)
Enter value for 2x2 matrix: 1
2
3
4

Input Matrix:
1 2 
3 4 
determinant = -2
rank = 2
*/