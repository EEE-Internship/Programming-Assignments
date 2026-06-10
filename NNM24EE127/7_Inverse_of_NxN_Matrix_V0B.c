/* **********************************************************************************************************
   * Author- Tilak Poojary                                                                                  *
   * USN- NNM24EE127                                                                                        *
   * Date- 10 June 2026                                                                                     *
   * Dept- Electrical and Electronics Engineering Department                                                *
   * College- NMAM Institute of Technology, Nitte                                                           *
   * Purpose- To find the inverse of a NxN matrix, usimg LU decomposition method                            *
   ********************************************************************************************************** */
   

#include<stdio.h>

int main(void)
{
    int N,i,j;
    double b,m,p,k;
   
    printf("Enter the order of Matrix: "); //enter the order of matrix
    scanf("%d",&N);

    double a[N][N];     //declare the a matrix
    double I[N][N];     //declare the identity matrix

    printf("Enter th elements of the Matrix:\n "); //enter the elemnts of the matrix
    
    for(i=0;i<N;i++)
    {
        for(j=0;j<N;j++)
        {
            scanf("%lf",&a[i][j]);
        }
    }

    for(i=0;i<N;i++)       //creating an identity matrix of same order as of above matrix
    {
      for(j=0;j<N;j++)
      {
        if(i==j)
        {
          I[i][j]=1;   //1 for diagonals
        }
        else
        {
            I[i][j]=0;   //0 rest else
        }
      }
    }

    for(i=0;i<N;i++)
    {
        for(j=0;j<N;j++)         //print matrix a
        {
            printf("%lf  ",a[i][j]);
        }
        printf("\n");
    }

    printf("\n\n");

    for(i=0;i<N;i++)
    {
        for(j=0;j<N;j++)
        {
            printf("%lf  ",I[i][j]);        //print identity matrix
        }
        printf("\n");
    }
    
    printf("\n\n");
    
    b=a[0][0];

    for(i=0;i<1;i++)
    {
        for(j=0;j<N;j++)       //making first row first column element as 1
        {
            a[i][j]=a[i][j]/b;
            I[i][j]=I[i][j]/b;
        }
    }

    for(i=0;i<N;i++)
    {
        for(j=0;j<N;j++)
        {
            printf("%lf  ",a[i][j]);
        }
        printf("\n");
    }
    
    printf("\n\n");

    for(i=0;i<N;i++)
    {
        for(j=0;j<N;j++)
        {
            printf("%lf  ",I[i][j]);
        }
        printf("\n");
    }
    
    printf("\n\n");

    
    for(i=1;i<N;i++)
    {                                 //making the coulmn bellow the first element to be 0
        m=a[i][0];
        for(j=0;j<N;j++)
        {
           a[i][j]=a[i][j]-m*a[0][j];
           I[i][j]=I[i][j]-m*I[0][j];

        }
    
    }

    for(i=0;i<N;i++)
    {
        for(j=0;j<N;j++)
        {
            printf("%lf  ",a[i][j]);
        }
        printf("\n");
    }
    
    printf("\n\n");

    for(i=0;i<N;i++)
    {
        for(j=0;j<N;j++)
        {
            printf("%lf  ",I[i][j]);
        }
        printf("\n");
    }
    
    printf("\n\n");

    for(i=1;i<N;i++)           // dividing by diagonal element to make diagonal elements as 1
    {
      p=a[i][i];
      for(j=0;j<N;j++)
       {
        a[i][j]=a[i][j]/p;
        I[i][j]=I[i][j]/p;
       }    
       for (int k=0;k<N;k++)
        {
          if (k!=i) 
           {
            double m=a[k][i];                    //to make rest all elements in matrix a as 0 
            for (j=0;j<N;j++)                      //doing till matrix a becomes identity matrix, at that time the identity matrix becomes inverse of matrix a
            {
               a[k][j]=a[k][j]-m*a[i][j];
               I[k][j]=I[k][j]-m*I[i][j];
            }
           }
        }
    }

   for(i=0;i<N;i++)
    {
        for(j=0;j<N;j++)
        {
            printf("%lf  ",a[i][j]);
        }
        printf("\n");
    }
    
    printf("\n\n");

    for(i=0;i<N;i++)
    {
        for(j=0;j<N;j++)
        {
            printf("%lf  ",I[i][j]);
        }
        printf("\n");
    }
    
    printf("\n\n");

    printf("The inverse of %dx%d matrix is:\n",N,N);

    for(i=0;i<N;i++)
    {
        for(j=0;j<N;j++)
        {
            printf("%lf  ",I[i][j]);              //printing inverse of matrix
        }
        printf("\n");
    }
    

   return 0;
}    

/*Output:

Enter the order of Matrix: 3
Enter th elements of the Matrix:
 9 4 6
1 8 2
5 3 7
9.000000  4.000000  6.000000  
1.000000  8.000000  2.000000  
5.000000  3.000000  7.000000  


1.000000  0.000000  0.000000  
0.000000  1.000000  0.000000  
0.000000  0.000000  1.000000  


1.000000  0.444444  0.666667  
1.000000  8.000000  2.000000  
5.000000  3.000000  7.000000  


0.111111  0.000000  0.000000  
0.000000  1.000000  0.000000  
0.000000  0.000000  1.000000  


1.000000  0.444444  0.666667  
0.000000  7.555556  1.333333  
0.000000  0.777778  3.666667  


0.111111  0.000000  0.000000  
-0.111111  1.000000  0.000000  
-0.555556  0.000000  1.000000  


1.000000  0.000000  0.000000  
0.000000  1.000000  0.000000  
0.000000  0.000000  1.000000  


0.208333  -0.041667  -0.166667  
0.012500  0.137500  -0.050000  
-0.154167  -0.029167  0.283333  


The inverse of 3x3 matrix is:
0.208333  -0.041667  -0.166667  
0.012500  0.137500  -0.050000  
-0.154167  -0.029167  0.283333  
*/