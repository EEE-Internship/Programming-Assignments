 /*
  
  Author: KEERTHAN S SANIL
  USN: NNM24EE056
  Date: 10/06/2026
  Dept: Electrical and Electronics Engineering
  College: NMAMIT
  Purpose: To findInverse of nxn matrix using Gauss Elimination Method
  
*/


#include <stdio.h>
void main()
{
    int row,col,i,j,diagonal;
    int mat[10][10],I[10][10];

    printf("Enter the order of matrix=\n");
    scanf("%d %d",&row,&col);

    printf("Enter the elements of matrix\n");

    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
    {
    scanf("%d",&mat[i][j]);

    }
    }
    printf("Matrix is\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
printf("%3d",mat[i][j]);

        }
    printf("\n");
 
    }
    printf("The inverse matrix is\n");

    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
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
    for(i=0;i<row;i++)
    {
for(j=0;j<col;j++)
{
 mat[i][j]=I[i][j];
}
}
for(i=0;i<row;i++)
{
diagonal=mat[i][i];
for(j=0;j<2*col;j++)
{
mat[i][j]=mat[i][j]/diagonal;
if(i!=j)
{
 mat[i][j]=mat[i][j]-(mat[i][j]*(mat[i][i]));
}
}
}
for(i=0;i<row;i++)
{
    for(j=col;j<2*col;j++)
    {
printf("%d\t",mat[i][j]);
}
printf("\n");
}}


