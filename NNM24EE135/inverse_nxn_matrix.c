/*Author: Vrushabh P Ram
  USN: NNM24EE135
  Date: 09-June-2026
  Department: Electrical and Electronics Engineering 
  College: NMAM Instutute of Technology
  About the program: This program gives the inverse of nxn matrix using Gauss Elimination method.*/              
  #include <stdio.h>
  #include <stdlib.h>
int main()
    {
        int n, i, j, k;
        printf("Enter the order of the matrix: \n"); // input for the order of the matrix
        scanf("%d", &n);
        float a[n][2*n];
        float ratio;
        printf("Enter the elements of the matrix:\n"); // input for the elements of the matrix
        for(i=0; i<n; i++)
        {
            for(j=0; j<n; j++)
            {
               scanf("%f", &a[i][j]);
            }
        }
        for(i=0; i<n; i++)
        {
            for(j=0; j<n; j++)
            {
                if(i==j)
                {
                    a[i][j+n] = 1;// diagonal elements of the identity matrix is one
                }
                else
                {
                    a[i][j+n] = 0;// non-diagonal elements of the identity matrix is zero
                }
            }
        }
        for(i=0;i<n;i++)
        {
            if(a[i][i]!=1)//making the diagonal elements of the input matrix = 1
            {
                ratio=a[i][i];
                for(j=0;j<2*n;j++)
                {
                    a[i][j]=a[i][j]/ratio;//dividing the whole row by diagonal element
                }
            }
        }
        k=0;
        if(k!=i)
        {
            ratio=a[k][i]; //making the elements below the diagonal elements of the input matrix = 0
            for(j=0;j<2*n;j++)
            {
                a[k][j]=a[k][j]-ratio*a[i][j]; //elementary row operation
            }
        }
        printf("\ninverse of the matrix is:\n");
for(i=0;i<n;i++)
        {
            for(j=n;j<2*n;j++)
            {
                
                printf("%0.3f ", a[i][j]); // printing the elements of the inverse matrix with 3 decimal places
            }
            printf("\n");
      
         }
        return 0;
    }


 