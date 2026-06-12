#include <stdio.h>

int main()
{
    int a[10][10], m, n, i, j;
    int rank;

    printf("Enter rows and columns: ");
    scanf("%d%d", &m, &n);

    printf("Enter matrix elements:\n");
    for(i = 0; i < m; i++)
    {
    for(j = 0; j < n; j++)
    {
        scanf("%d", &a[i][j]);
    }
    }

    rank = n;
    }

 
