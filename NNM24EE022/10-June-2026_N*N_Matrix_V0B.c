#include <stdio.h>
/*
Anwitha Bhat
NNM24EE022
08-June-2026
Department of Electrical and Electronics
NMAM Institute of Technology Nitte
Program which gives Inverse of any n*n matrix using Gauss Jordan Method */
int main()
{
    int n, m, i, j, k;
    float a[20][40], f;

    //input from user
    printf("Enter number of rows and columns: ");
    scanf("%d%d", &n, &m);

    //invalid condittion
    if(n != m)
    {
        printf("Inverse does not exist (Matrix is not square)");
        return 0;
    }

    // Input matrix
    printf("Enter matrix elements:\n");
    for(i = 0; i < n; i++)
    {
    for(j = 0; j < n; j++)
     {
     scanf("%f", &a[i][j]);
      }
    }

    // Form augmented matrix [A|I]
    for(i = 0; i < n; i++)
    {for(j = n; j < 2*n; j++)
        {if(j == i + n)
       a[i][j] = 1;
            else
     a[i][j] = 0;
     }
    }
}




output
Enter number of rows and columns: 2 2
Enter matrix elements:
1 2
1 2

  Enter number of rows and columns: 2 3
Inverse does not exist (Matrix is not square)
