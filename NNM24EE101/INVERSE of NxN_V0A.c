/*sharvari somayaji k
USN:NNM24EE101
DATE:6/07/26
DEPT:EEE
COLLAGE:NMAMIT NITTE*/
#include <stdio.h>

#define N 10

void getCofactor(float A[N][N], float temp[N][N], int p, int q, int n)
{
    int i = 0, j = 0;

    for (int row = 0; row < n; row++) {
        for (int col = 0; col < n; col++) {

            if (row != p && col != q) {
                temp[i][j++] = A[row][col];

                if (j == n - 1) {
                    j = 0;
                    i++;
                }
            }
        }
    }
}

float determinant(float A[N][N], int n)
{
    float D = 0;

    if (n == 1)
        return A[0][0];

    float temp[N][N];
    int sign = 1;

    for (int f = 0; f < n; f++) {
        getCofactor(A, temp, 0, f, n);
        D += sign * A[0][f] * determinant(temp, n - 1);
        sign = -sign;
    }

    return D;
}

void adjoint(float A[N][N], float adj[N][N], int n)
{
    if (n == 1) {
        adj[0][0] = 1;
        return;
    }

    int sign;
    float temp[N][N];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {

            getCofactor(A, temp, i, j, n);

            sign = ((i + j) % 2 == 0) ? 1 : -1;

            adj[j][i] = sign * determinant(temp, n - 1);
        }
    }
}

int inverse(float A[N][N], float inverse[N][N], int n)
{
    float det = determinant(A, n);

    if (det == 0) {
        printf("Singular matrix, inverse does not exist.\n");
        return 0;
    }

    float adj[N][N];
    adjoint(A, adj, n);

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            inverse[i][j] = adj[i][j] / det;

    return 1;
}

int main()
{
    int n;
    float A[N][N], inv[N][N];

    printf("Enter order of matrix: ");
    scanf("%d", &n);

    printf("Enter matrix elements:\n");
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%f", &A[i][j]);

    if (inverse(A, inv, n)) {
        printf("\nInverse Matrix:\n");

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++)
                printf("%.3f\t", inv[i][j]);
            printf("\n");
        }
    }

    return 0;
}