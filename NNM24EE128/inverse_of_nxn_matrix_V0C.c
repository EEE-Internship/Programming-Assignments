//Author:Veda Venkatesh Kamat
//USN: NNM24EE128
//Date: 11 June 2026
//Department: Electrical and elctronics
//College: NMAM Institute of Technology
//About the program: this program is used to find the inverse of a matrix using gauss elimination method
#include <stdio.h>
int main()
{ 
    int n,i,j,k;//variables i=rows,j=columns, n=order of the matrix
    float diagonal;//stores the diagonal elements used for row reduction
    float factor;//stores the element to be eliminated during row reduction step
//to store and print the value of order of the matrix(input matrix)
printf("enter the order of the matrix: ");//prints the text
scanf("%d",&n);//stores the value of n
printf("n = %d\n", n);
float matrix[n][2*n];//to store the original [matrix][identity matrix]
//input of the original matrix
for(i=0;i<n;i++)//outer loop
{
    for(j=0;j<n;j++)//inner loop 
    {
        printf("enter the matrix[%d][%d]  ",i,j);//prints the matrix[i][j]
        scanf("%f", &matrix[i][j]);//stores the value of matrix elements
    }
}
//writes the identity matrix and is stored besides the original matrix
for(i=0;i<n;i++)
{
    for(j=0;j<n;j++)
    {
        if(i==j)//if row number=column  number
        {
            matrix[i][j+n]=1;//value 1 is assigned to the diagonal elements
        }
        else
        {
            matrix[i][j+n]=0;//0 is assigned to non diagonal elements
        }
    }
}
//printing of [original matrix][identity matrix]
printf("[original matrix][identity matrix:]\n"); 
for(i=0;i<n;i++)
{
    printf("[");
    for(j=0;j<n;j++)
    {
        printf("%.1f ", matrix[i][j]);//prints the original matrix
    }
    printf("] [");
    for(j=n;j<2*n;j++)
    {
        printf("%.1f ",matrix[i][j]);//prints the identity matrix
    }
    printf("]\n");
}
//pivot selection
for(i=0;i<n;i++)
{
    diagonal=matrix[i][i];
    for(j=0;j<2*n;j++)
    {
        matrix[i][j]=matrix[i][j]/diagonal;//division to obtain 1 in the diagonal element
    }
    //elimination 
    for(k=0;k<n;k++)//k is the row that is being checked
    {
        if(k!=i)
        {
            factor=matrix[k][i];
            for(j=0;j<2*n;j++)
            {
                matrix[k][j]=matrix[k][j]-factor*matrix[i][j];
            }
        }
    }
}
//displays the matrix after elimination
printf("\nafter elimination");
printf("\n");
for(i=0;i<n;i++)
{
    printf("[");
    for(j=0;j<n;j++)
    {
        printf("%.1f ", matrix[i][j]);
    }
    printf("] [");
    for(j=n;j<2*n;j++)
    {
        printf("%.1f ",matrix[i][j]);
    }
    printf("]\n");
}
//displays the inverse matrix
printf("\nInverse Matrix:\n");

for(i=0;i<n;i++)
{
    for(j=n;j<2*n;j++)
    {
        printf("%.1f ", matrix[i][j]);
    }
    printf("\n");
}
return 0;
}