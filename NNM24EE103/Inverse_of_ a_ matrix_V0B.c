/* Author:Shivali
   USN:NNM24EE103
   Date:10.6.26
   Department: Electrical and Electronics Engineering
   College:Nmam Institute of Technology
  This program finds and displays the inverse of an N×N matrix */
#include<stdio.h>

int main()
{
    int n,m,i,j,k;
    float a[10][20],x;

    printf("Enter rows and columns: ");
    scanf("%d%d",&n,&m);

    if(n!=m)
    {
        printf("Inverse does not exist");
        return 0;
    }

    printf("Enter matrix elements:\n");

    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            scanf("%f",&a[i][j]);

    for(i=0;i<n;i++)
        for(j=n;j<2*n;j++)
        {
            if(i==j-n)
                a[i][j]=1;
            else
                a[i][j]=0;
        }

    for(i=0;i<n;i++)
    {
        x=a[i][i];

        for(j=0;j<2*n;j++)
            a[i][j]=a[i][j]/x;

        for(k=0;k<n;k++)
        {
            if(k!=i)
            {
                x=a[k][i];

                for(j=0;j<2*n;j++)
                    a[k][j]=a[k][j]-x*a[i][j];
            }
        }
    }

    printf("\nInverse Matrix:\n");

    for(i=0;i<n;i++)
    {
        for(j=n;j<2*n;j++)
            printf("%.2f ",a[i][j]);

        printf("\n");
    }

    return 0;
}
/*output:
Enter rows and columns: 3 3
Enter matrix elements:
2 1 1 
3 2 1
0 0 1

Inverse Matrix:
2.00 -1.00 -1.00 
-3.00 2.00 1.00 
0.00 0.00 1.00 
*/