#include <stdio.h>

int main()
{
    int n, i, j, k;
    double a[10][20], factor;

    printf("Enter the order of the matrix: ");
    scanf("%d", &n);

    printf("Enter the elements of the matrix:\n");
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            scanf("%lf", &a[i][j]);
        }
    }

    /* Augment with Identity Matrix */
    for(i = 0; i < n; i++)
    {
        for(j = n; j < 2 * n; j++)
        {
            if(j - n == i)
                a[i][j] = 1;
            else
                a[i][j] = 0;
        }
    }

    /* Gauss-Jordan Elimination */
    for(i = 0; i < n; i++)
    {
        if(a[i][i] == 0)
        {
            printf("Inverse does not exist.\n");
            return 0;
        }

        /* Make pivot 1 */
        factor = a[i][i];
        for(j = 0; j < 2 * n; j++)
        {
            a[i][j] /= factor;
        }

        /* Make other elements in pivot column 0 */
        for(k = 0; k < n; k++)
        {
            if(k != i)
            {
                factor = a[k][i];

                for(j = 0; j < 2 * n; j++)
                {
                    a[k][j] -= factor * a[i][j];
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
