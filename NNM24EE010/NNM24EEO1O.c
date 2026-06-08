#include <stdio.h>
/*
Akshay g rao
NNM24EE010
08-June-2026
Department of Electrical and Electronics
NMAM Institute of Technology Nitte
Program to find Inverse of any n*n matrix using Gauss Method */
int main() {
    int n, i, j, k; //Declaring
    float a[10][20], f;

    printf("Enter order of matrix: ");// to enter the order
    scanf("%d", &n);

    printf("Enter matrix elements:\n");
    for(i = 0; i < n; i++) //incrementing i
        for(j = 0; j < n; j++)//incrementing j
            scanf("%f", &a[i][j]);//storing the data in matrix

    // Addition of an identity matrix
    for(i = 0; i < n; i++)
        for(j = n; j < 2*n; j++)//j starts from n then increments
            a[i][j] = (i == j - n) ? 1 : 0;//conditional operation when i is equal to j-n value result 1 else 0

    // Gauss
    for(i = 0; i < n; i++) { //moves row by row

        f = a[i][i];//stores the diagonal element

        for(j = 0; j < 2*n; j++)
            a[i][j] /= f;//This divides the entire row by f to make diagonal element 1

        for(k = 0; k < n; k++) {//Loop visits every row
            if(k != i) {//skips current row
                f = a[k][i];//stores the element

                for(j = 0; j < 2*n; j++)
                    a[k][j] -= f * a[i][j];
            }
        }
    }

    printf("\nInverse Matrix:\n");

    for(i = 0; i < n; i++) {
        for(j = n; j < 2*n; j++)
            printf("%.2f ", a[i][j]);
        printf("\n");
    }

    return 0;
}
