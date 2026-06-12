/* *************************************************************************
   * Author- DAKSHESH KUMAR                                                                                  
   * USN- NNM24EE033                                                                                         
   * Date- 10 June 2026                                                                                      
   * Dept- Electrical and Electronics Engineering Department                                                 
   * College- NMAM Institute of Technology, Nitte                                                            
   * Purpose- To find INVERSE OF NXN MATRIX
   ***************************************************************************/
#include<stdio.h>

int main(void)
{
    int N, row, column;
    double temp1, temp2, temp3, temp4;
   
    printf("Enter the order of Matrix: "); //enter the order of matrix
    scanf("%d", &N);

    double a[N][N];     //declare the a matrix
    double I[N][N];     //declare the identity matrix

    printf("Enter th elements of the Matrix:\n "); //enter the elemnts of the matrix
    
    for(row = 0; row < N; row++)
    {
        for(column = 0; column < N; column++)
        {
            scanf("%lf", &a[row][column]);
        }
    }

    for(row = 0; row < N; row++)       //to creat a identity matrix of same order as of above matrix
    {
      for(column = 0; column < N; column++)
      {
        if(row == column)
        {
          I[row][column] = 1;   //1 for the diagonals
        }
        else
        {
            I[row][column] = 0;   //0 else where
        }
      }
    }

    for(row = 0; row < N; row++)
    {
        for(column = 0; column < N; column++)         //print matrix a
        {
            printf("%lf  ", a[row][column]);
        }
        printf("\n");
    }

    printf("\n\n");

    for(row = 0; row < N; row++)
    {
        for(column = 0; column < N; column++)
        {
            printf("%lf  ", I[row][column]);        //print identity matrix
        }
        printf("\n");
    }
    
    printf("\n\n");
    
    temp1 = a[0][0];

    for(row = 0; row < 1; row++)
    {
        for(column = 0; column < N; column++)       //making first row first column element as 1
        {
            a[row][column] = a[row][column] / temp1;
            I[row][column] = I[row][column] / temp1;
        }
    }

    for(row = 0; row < N; row++)
    {
        for(column = 0; column < N; column++)
        {
            printf("%lf  ", a[row][column]);
        }
        printf("\n");
    }
    
    printf("\n\n");

    for(row = 0; row < N; row++)
    {
        for(column = 0; column < N; column++)
        {
            printf("%lf  ", I[row][column]);
        }
        printf("\n");
    }
    
    printf("\n\n");

    
    for(row = 1; row < N; row++)
    {                                  //making the coulmn bellow the first element to be 0
        temp2 = a[row][0];
        for(column = 0; column < N; column++)
        {
           a[row][column] = a[row][column] - temp2 * a[0][column];
           I[row][column] = I[row][column] - temp2 * I[0][column];
        }
    
    }

    for(row = 0; row < N; row++)
    {
        for(column = 0; column < N; column++)
        {
            printf("%lf  ", a[row][column]);
        }
        printf("\n");
    }
    
    printf("\n\n");

    for(row = 0; row < N; row++)
    {
        for(column = 0; column < N; column++)
        {
            printf("%lf  ", I[row][column]);
        }
        printf("\n");
    }
    
    printf("\n\n");

    for(row = 1; row < N; row++)           // dividing by diagonal element to make diagonal elements as 1
    {
      temp3 = a[row][row];
      for(column = 0; column < N; column++)
       {
        a[row][column] = a[row][column] / temp3;
        I[row][column] = I[row][column] / temp3;
       }    
       for (int temp4 = 0; temp4 < N; temp4++)
        {
          if (temp4 != row) 
           {
            double temp2 = a[temp4][row];                    //to make rest all elements in matrix a as 0 
            for (column = 0; column < N; column++)                      //doing till matrix a becomes identity matrix, at that time the identity matrix becomes inverse of matrix a
            {
               a[temp4][column] = a[temp4][column] - temp2 * a[row][column];
               I[temp4][column] = I[temp4][column] - temp2 * I[row][column];
            }
           }
        }
    }

   for(row = 0; row < N; row++)
    {
        for(column = 0; column < N; column++)
        {
            printf("%lf  ", a[row][column]);
        }
        printf("\n");
    }
    
    printf("\n\n");

    for(row = 0; row < N; row++)
    {
        for(column = 0; column < N; column++)
        {
            printf("%lf  ", I[row][column]);
        }
        printf("\n");
    }
    
    printf("\n\n");

    printf("The inverse of %dx%d matrix is:\n", N, N);

    for(row = 0; row < N; row++)
    {
        for(column = 0; column < N; column++)
        {
            printf("%lf  ", I[row][column]);              //print the inverse of matrix
        }
        printf("\n");
    }
    

   return 0;
}