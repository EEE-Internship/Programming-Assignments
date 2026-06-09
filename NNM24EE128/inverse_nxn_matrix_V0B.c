//Author- Veda Venkatesh Kamat
//USN- NNM24EE128
//Date- 08 June 2026
//Dept- Electrical and Electronics Engineering Department
//College- NMAM Institute of Technology
//Purpose- The purpose of this program is to find the inverse of 2x2 matrix

#include <stdio.h>
int main()
{ 
    int n, i, j;//variables
    float determinant;
    int matrix[10][10];// to store matrix elements
    printf("Program to find Inverse of a matrix\n");
    printf("Enter the order of the matrix: ");//prints the text
    scanf("%d", &n);//stores the value of n
    for (i=0; i<n; i++)//for matrix row-first nested loop to store the matrix
    {
        for (j=0; j<n; j++)//for column row
        {
            printf("enter matrix[%d][%d]:",i,j);//prints the text asking to enter the values for each matrix element
            scanf("%d",&matrix[i][j]);//stores the value entered above
        }
    }

            printf("the matrix is:\n");
            for(i=0;i<n;i++)//second nested loop to display the matrix
            {
                for(j=0;j<n;j++)
                {
                    printf("%d ", matrix[i][j]);//prints the matrix elements
                }
                printf("\n");// this will print the elements of same row in one line
            }
            determinant=((matrix[0][0]*matrix[1][1])-(matrix[0][1]*matrix[1][0]));//determinant formula for a 2x2 matrix
            printf("Determinant= %.2f\n",determinant);//prints the determinant value
            if(determinant==0)//if det=0, inverse doesnt exist
            {
                printf("inverse does not exist\n");
            }
            else
            {
                printf("inverse of the matrix is:\n");
                printf ("%.2f %.2f\n", matrix[1][1]/determinant, -matrix[0][1]/determinant);// prints the inverse of the matrix 
                printf ("%.2f %.2f\n", -matrix[1][0]/determinant, matrix[0][0]/determinant);//prints the inverse of the matrix
            }
    return 0;
}