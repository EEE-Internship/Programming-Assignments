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
    
  for(i=0;i<rank;i++)
    {
 if(a[i][i] != 0)
{
   for(j=0;j<m;j++)
      {
      if(j != i)
       {
       factor = (float)a[j][i] / a[i][i];

         for(k=0;k<rank;k++)
         a[j][k] = a[j][k] - factor*a[i][k];
            }
            }
         }
        else
        {
         rank--;

        for(j=0;j<m;j++)
         a[j][i] = a[j][rank];

         i--;
        }
      }

    printf("Rank = %d", rank);
 return 0;
}

 
