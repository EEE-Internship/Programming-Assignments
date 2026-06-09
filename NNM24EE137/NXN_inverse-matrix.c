//Author-Yashasvi V
//USN-NNM24EE137
//Date-08 june 2026
//Department-Electrical and Electronics Engineering
//College-NMAM Institute of Technology
//Purpose-To declare integer,float,& character variables and print their values, memory size and memory address
// Reffered link- https://www.geeksforgeeks.org/dsa/adjoint-inverse-matrix/
#include<stdio.h>
#include<stdlib.h>
int main(void)
{
   int i,j,k,col,N;
   // Read the order of the square matrix.
   printf("Enter the size of the matrix (N x N): ");
   scanf("%d", &N);

   // Input the matrix A from the user.
   double A[N][N];
    printf("Enter the elements of the matrix:\n");
    for(i=0;i<N;i++)
    {
     for(j=0;j<N;j++)
     {
      scanf("%lf", &A[i][j]);
     }
    }

   // display the input matrix for confirmation.
   for(i=0;i<N;i++)
   {
      for(j=0;j<N;j++)
      {
         printf("%lf ", A[i][j]);
      }
      printf("\n");
   }

   //  Create the L and U matrices used in LU decomposition.
   double L[N][N];
   double U[N][N];

   // Initialize L with zeros before assigning diagonal and multipliers.
      for(i=0;i<N;i++){
         for(j=0;j<N;j++){
            L[i][j]=0.0;
         }
      }

   // Copy A into U; U will be transformed into an upper triangular matrix.
   for(i=0;i<N;i++)
   {
    for(j=0;j<N;j++)
    {
        U[i][j]=A[i][j];
    }
   }

   // Set the diagonal of L to 1 because L is a unit lower triangular matrix.
   for(i=0;i<N;i++)
   {
    L[i][i]=1;
   }

   //  Perform Gaussian elimination to factor A into L and U.
   // The multiplier m is stored in L, and the row operation updates U.
   for(k=0;k<N-1;k++)
   {
    for(i=k+1;i<N;i++)
    {
     // Compute the elimination multiplier for the current pivot.
     L[i][k]=U[i][k]/U[k][k];
     for(j=k+1;j<N;j++)
     {
      // Save the same multiplier and use it to eliminate the lower entry.
      double m=U[i][k]/U[k][k];
      L[i][k]=m;
      for(j=k;j<N;j++)
      {
       // Update U row-wise to form the upper triangular matrix.
       U[i][j]=U[i][j]-m*U[k][j];
      }
     }
    }
   }

   //  Form the identity matrix, since the inverse is found by solving A*X = I.
   double I[N][N];
   for(i=0;i<N;i++)
   {
    I[i][i]=1;
   }

   //  Solve L * Y = I using forward substitution.
   // Each column of Y is computed separately from the identity matrix columns.
   double Y[N][N];

   for(col=0;col<N;col++)
   {
    for(int i=0;i<N;i++)
    {
     // Start with the matching identity value.
     Y[i][col]=I[i][col];
     for(int j=0;j<i;j++)
     {
      // Subtract the contribution of previously computed terms.
      Y[i][col]=Y[i][col]-L[i][j]*Y[j][col];
     }
    }
   }

   //  Solve U * X = Y using back substitution.
   // The resulting matrix X is the inverse of A.
   double X[N][N];

    for(col=0;col<N;col++)
    {
     for(int i=N-1;i>=0;i--)
     {
      // Begin with the corresponding value from Y.
      X[i][col]=Y[i][col];
      for(int j=i+1;j<N;j++)
      {
        // Remove the effect of already computed values above the diagonal.
        X[i][col]=X[i][col]-U[i][j]*X[j][col];
      }
      // Divide by the diagonal pivot to finalize the solution.
      X[i][col]=X[i][col]/U[i][i];
     }
    }

    //  Print the inverse matrix.
    printf("Inverse of the matrix is:\n");
    for(i=0;i<N;i++)
    {
     for(j=0;j<N;j++)
     {
      printf("%lf ", X[i][j]);
     }
     printf("\n");
    }

   return 0;
}

/* OUTPUT :
Enter the size of the matrix (N x N): 4
Enter the elements of the matrix:
1 3 2 3
2 3 4 2
1 2 1 4
1 3 5 6
1.000000 3.000000 2.000000 3.000000
2.000000 3.000000 4.000000 2.000000
1.000000 2.000000 1.000000 4.000000
1.000000 3.000000 5.000000 6.000000
Inverse of the matrix is:
-0.933333 0.700000 0.900000 -0.366667
0.933333 -0.200000 -0.400000 -0.133333
-0.133333 0.100000 -0.300000 0.233333
-0.200000 -0.100000 0.300000 0.100000

Process returned 0 (0x0)   execution time : 40.311 s
Press any key to continue.

