#include <stdio.h>
/*
Author: Akshay G Rao
USN: NNM24EE010
ELECTICAL AND ELECTRONICS DEPARTMENT
Purpose: to find the innverse
*/



int main() {
    int r, c, i, j, k;
    float a[10][20], f;

    printf("Enter number of rows: ");
    scanf("%d", &r);

    printf("Enter number of columns: ");
    scanf("%d", &c);

    if(r != c) {
        printf("Inverse does not exist for a non-square matrix.\n");
        return 0;
    }

    int n = r;

    printf("Enter matrix elements:\n");
    for(i = 0; i < n; i++)
        for(j = 0; j < n; j++)
            scanf("%f", &a[i][j]);

    // Adding identity matrix
    for(i = 0; i < n; i++)
    for(j = n; j < 2 * n; j++)
      a[i][j] = (i == j - n) ? 1 : 0;
// Gauss-Jordan Method
  for(i = 0; i < n; i++) {
if(a[i][i] == 0) {
  printf("Inverse does not exist (singular matrix).\n");
      return 0;
        }
 f = a[i][i];
 for(j = 0; j < 2 * n; j++)
            a[i][j] /= f;

          for(k = 0; k < n; k++) {
            if(k != i) {
                f = a[k][i];

     for(j = 0; j < 2 * n; j++)
                    a[k][j] -= f * a[i][j];
            }
        }
    }

    printf("\nInverse Matrix:\n");

    for(i = 0; i < n; i++) {
        for(j = n; j < 2 * n; j++)
            printf("%.2f\t", a[i][j]);
        printf("\n");
    }

    return 0;
}
