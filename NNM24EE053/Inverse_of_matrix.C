#include <stdio.h>
/*Author:K Siddharth T Kamath
  USN:NNM24EE053
  Date:10th June 2026
  Dept:Electrical And Electronics Engineering
  College:NMAM Institute of Technology
  About this program:This program demosntrates the inverse of matrix using 
  Gauss Jordons elimination method.It uses row operations to achieve this  */
int main()
{
    int i,j,n,I[10][10], Diagonal_element, factor;
    float a[10][10],merge[10][20];
    printf("Enter order of matrix:");
    scanf("%d",&n);
    printf("Enter values of matrix:");
    /*input of matrix*/
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%f",&a[i][j]);
   }
    }
    /*defining identity matrix*/
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==j)
            {
                I[i][j]=1;
            }
            else
            {
                I[i][j]=0;
            }
        }
    }
    /*merging matrices*/
    for(i=0;i<n;i++)
    {
    for(j=0;j<n;j++)
    {
    merge[i][j]=a[i][j];
    }
    printf("\n");
    } 
    for(i=0;i<n;i++)
    {
        for(j=n;j<2*n;j++)
        {
            merge[i][j]=I[i][j-n];
        }
        printf("\n");
    }
    /*row operations*/
    for(i=0;i<n+1;i++)
    {
        Diagonal_element=merge[i][i];
        for(j=0;j<2*n;j++)
        {
            merge[i][j]=merge[i][j]/Diagonal_element;
         if(i!=j)
         {
            factor=merge[i][j];
            merge[i][j]=merge[i][j]-(factor*merge[i][i]);
         }
             
        }
    }
    +
   /*final inverse matrix*/
   for(i=0;i<n;i++)
   {
    for(j=n;j<2*n;j++)
    {
        printf("%.4f\t",merge[i][j]);
    }
    printf("\n");
   }
}
