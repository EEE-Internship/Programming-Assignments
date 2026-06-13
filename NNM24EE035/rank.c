#include <stdio.h>

int main()
 {
    int i, j, k, r, c, rank;
    float a[10][10];

    printf("Enter rows and columns: ");
    scanf("%d%d", &r, &c);

    printf("Enter matrix elements:\n");
    for(i = 0; i < r; i++)
        for(j = 0; j < c; j++)
            scanf("%f", &a[i][j]);

    rank = c;

    for(i = 0; i < rank; i++) 
    {
        if(a[i][i] != 0) 
        {
            for(j = 0; j < r; j++) 
            {
                if(j != i)
                 {
                    float ratio = a[j][i] / a[i][i];
                    for(k = 0; k < rank; k++)
                        a[j][k] = a[j][k] - ratio * a[i][k];
                }
            }
        }
        else {
            rank--;
            for(j = 0; j < r; j++)
                a[j][i] = a[j][rank];
            i--;
        }
    }

    printf("Rank of matrix = %d", rank);

    return 0;
}