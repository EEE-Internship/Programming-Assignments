/* *********************************************************************************************************
   * Author- DAKSHESH KUMAR                                                                                  
   * USN- NNM24EE033                                                                                         
   * Date- 08 June 2026                                                                                      
   * Dept- Electrical and Electronics Engineering Department                                                 
   * College- NMAM Institute of Technology, Nitte                                                            
   * Purpose- To find the transpose of a NxN matrix using LU decomposition                                                         
 ********************************************************************************************************** */                                                                                    * * Date- 08 June 2026                                                                                      * * Dept- Electrical and Electronics Engineering Department                                                 * * College- NMAM Institute of Technology, Nitte                                                            * * Purpose- To find the inverse of a NxN matrix using LU Decomposition                                    * ********************************************************************************************************** */
   
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
   int row, column, pivot_index, current_column, matrix_size;
   
   //to find the order of the square matrix.
   printf("Enter the size of the matrix (N x N): ");
   scanf("%d", &matrix_size);
   
   // Input the matrix A from the user.
   double matrix_A[matrix_size][matrix_size];
   printf("Enter the elements of the matrix:\n");
   for(row = 0; row < matrix_size; row++)
   {
      for(column = 0; column < matrix_size; column++)
      {
         scanf("%lf", &matrix_A[row][column]);
      }
   }
   
   // Display the input matrix for confirmation.
   printf("\nInput Matrix Confirmation:\n");
   for(row = 0; row < matrix_size; row++)
   {
      for(column = 0; column < matrix_size; column++)
      {
         printf("%lf ", matrix_A[row][column]);
      }
      printf("\n");
   }
   
   //Create the L and U matrices used in LU decomposition.
   double matrix_L[matrix_size][matrix_size];
   double matrix_U[matrix_size][matrix_size];

   // Initialize matrix_L with zeros before assigning diagonal and multipliers.
   for(row = 0; row < matrix_size; row++)
   {
      for(column = 0; column < matrix_size; column++)
      {
         matrix_L[row][column] = 0.0;
         matrix_U[row][column] = matrix_A[row][column]; // Copy A into U directly
      }
   }

   // Setting the diagonal of matrix_L to 1 because L is a unit lower triangular matrix.
   for(row = 0; row < matrix_size; row++)
   {
      matrix_L[row][row] = 1.0;
   }

   //Perform Gaussian elimination to factor A into L and U.
   // Loops fixed to remove duplicate 'j' loops
   for(pivot_index = 0; pivot_index < matrix_size - 1; pivot_index++)
   {
      for(row = pivot_index + 1; row < matrix_size; row++)
      { 
         // Compute the elimination multiplier for the current row relative to the pivot row
         double multiplier = matrix_U[row][pivot_index] / matrix_U[pivot_index][pivot_index];
         matrix_L[row][pivot_index] = multiplier;
         
         for(column = pivot_index; column < matrix_size; column++)
         {
            // Update matrix_U row-wise to form the upper triangular matrix.
            matrix_U[row][column] = matrix_U[row][column] - multiplier * matrix_U[pivot_index][column];
         }
      }
   }

   // Step 5: Form the identity matrix, since the inverse is found by solving A*X = I.
   double identity_matrix[matrix_size][matrix_size];
   for(row = 0; row < matrix_size; row++)
   {
      for(column = 0; column < matrix_size; column++)
      {
         if(row == column)
         {
            identity_matrix[row][column] = 1.0;
         }
         else
         {
            identity_matrix[row][column] = 0.0;
         }
      }
   }

   // Step 6: Solve L * Y = I using forward substitution.
   double matrix_Y[matrix_size][matrix_size];

   for(current_column = 0; current_column < matrix_size; current_column++)
   {
      for(row = 0; row < matrix_size; row++)
      {
         // Start with the matching identity value.
         matrix_Y[row][current_column] = identity_matrix[row][current_column];
         for(column = 0; column < row; column++)
         {
            // Subtract the contribution of previously computed terms.
            matrix_Y[row][current_column] = matrix_Y[row][current_column] - matrix_L[row][column] * matrix_Y[column][current_column];
         }
      }
   }

   // Step 7: Solve U * X = Y using back substitution.
   // The resulting matrix X is the inverse of A.
   double inverse_matrix[matrix_size][matrix_size];

   for(current_column = 0; current_column < matrix_size; current_column++)
   {
      for(row = matrix_size - 1; row >= 0; row--)
      {
         // Begin with the corresponding value from Y.
         inverse_matrix[row][current_column] = matrix_Y[row][current_column];
         for(column = row + 1; column < matrix_size; column++)
         {
            // Remove the effect of already computed values above the diagonal.
            inverse_matrix[row][current_column] = inverse_matrix[row][current_column] - matrix_U[row][column] * inverse_matrix[column][current_column];
         }
         // Divide by the diagonal pivot to finalize the solution for this row element.
         inverse_matrix[row][current_column] = inverse_matrix[row][current_column] / matrix_U[row][row];
      }
   }

   // Step 8: Print the calculated inverse matrix.
   printf("\nInverse of the matrix is:\n");
   for(row = 0; row < matrix_size; row++)
   {
      for(column = 0; column < matrix_size; column++)
      {
         printf("%lf ", inverse_matrix[row][column]);
      }
      printf("\n");
   }

   return 0;
}