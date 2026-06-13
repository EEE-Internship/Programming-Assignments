#include <stdio.h>

int main()
 {
    int n, i, j, k;
    float a[10][20], ratio;

    printf("Enter order of matrix: ");
    scanf("%d", &n);

    printf("Enter matrix elements:\n");
    for(i = 0; i < n; i++) 
    {
        for(j = 0; j < n; j++) 
        {
            scanf("%f", &a[i][j]);
        }
    }
    for(i = 0; i < n; i++) 
    {
        for(j = n; j < 2 * n; j++) 
        {
            a[i][j] = (i == (j - n)) ? 1 : 0;
        }
    }
    for(i = 0; i < n; i++) 
    {
        float pivot = a[i][i];

        for(j = 0; j < 2 * n; j++)
            a[i][j] /= pivot;

        for(k = 0; k < n; k++)
         {
            if(k != i)
             {
                ratio = a[k][i];

                for(j = 0; j < 2 * n; j++)
                 {
                    a[k][j] -= ratio * a[i][j];
                }
            }
        }
    }

    printf("\nInverse Matrix:\n");
    for(i = 0; i < n; i++)
     {
        for(j = n; j < 2 * n; j++)
         {
            printf("%.2f ", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}