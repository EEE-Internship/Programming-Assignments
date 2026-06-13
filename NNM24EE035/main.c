#include <stdio.h>

int main()
 {
    int n, i, j, k;
    float a[20][40], temp;

    printf("Enter the order of the matrix: ");
    scanf("%d", &n);

    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < n; i++) 
    {
        for (j = 0; j < n; j++)
         {
            scanf("%f", &a[i][j]);
        }
    }
    for (i = 0; i < n; i++)
     {
        for (j = n; j < 2 * n; j++)
         {
            if (j == (i + n))
                a[i][j] = 1;
            else
                a[i][j] = 0;
        }
    }
    for (i = 0; i < n; i++) 
    {

        if (a[i][i] == 0)
         {
            printf("Inverse does not exist (Singular Matrix).\n");
            return 0;
        }

        temp = a[i][i];
        for (j = 0; j < 2 * n; j++)
         {
            a[i][j] = a[i][j] / temp;
        }
        for (k = 0; k < n; k++) 
        {
            if (k != i) {
                temp = a[k][i];

                for (j = 0; j < 2 * n; j++)
                 {
                    a[k][j] = a[k][j] - temp * a[i][j];
                }
            }
        }
    }

    printf("\nInverse Matrix:\n");
    for (i = 0; i < n; i++)
     {
        for (j = n; j < 2 * n; j++)
         {
            printf("%.3f\t", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}
/*Enter the order of the matrix: 2
Enter the elements of the matrix:
1 2     
3 5

Inverse Matrix:
-5.000  2.000
3.000   -1.00*/