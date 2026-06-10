/* **********************************************************************************************************
   * Author- Tilak Poojary                                                                                  *
   * USN- NNM24EE127                                                                                        *
   * Date- 10 June 2026                                                                                     *
   * Dept- Electrical and Electronics Engineering Department                                                *
   * College- NMAM Institute of Technology, Nitte                                                           *
   * Purpose- To find the inverse of a MxN matrix, using gauss elimination method, of M!=N print inverse
   *          doesn't exist                                                                                 *
   ********************************************************************************************************** */
   

#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    int N,M,i,j;
    double b,m,p,k;
   
    printf("Enter the order of MxN Matrix: "); //enter the order of matrix
    scanf("%d",&M);
    scanf("%d",&N);

    if(M==N)    //inverse exist only for square matrix, so checking if order is same.
    {
        M=N;
    }
    else
    {
      printf("Inverse of this %dx%d Matrix dosen't exist",M,N);
      exit(0);
    }
    
    double a[N][N];
    double I[N][N];

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
          I[i][j]=1;  //1 for diagonals
        }
        else
        {
            I[i][j]=0;  //0 rest else
        }
      }
    }

    for(i=0;i<N;i++)                  //print matrix a
    {
        for(j=0;j<N;j++)
        {
            printf("%lf  ",a[i][j]);
        }
        printf("\n");
    }

    printf("\n\n");

    for(i=0;i<N;i++)                       //print identity matrix
    {
        for(j=0;j<N;j++)
        {
            printf("%lf  ",I[i][j]);
        }
        printf("\n");
    }
    
    printf("\n\n");
    
    b=a[0][0];

    for(i=0;i<1;i++)            //making first row first column element as 1
    {
        for(j=0;j<N;j++)
        {
            a[i][j]=a[i][j]/b;
            I[i][j]=I[i][j]/b;
        }
    }

    for(i=0;i<N;i++)                  //printing matrix a
    {
        for(j=0;j<N;j++)
        {
            printf("%lf  ",a[i][j]);
        }
        printf("\n");
    }
    
    printf("\n\n");

    for(i=0;i<N;i++)                             //printing identity matrix
    {
        for(j=0;j<N;j++)
        {
            printf("%lf  ",I[i][j]);
        }
        printf("\n");
    }
    
    printf("\n\n");

    
    for(i=1;i<N;i++)                   //making the coulmn bellow the first element to be 0
    {
        m=a[i][0];
        for(j=0;j<N;j++)
        {
           a[i][j]=a[i][j]-m*a[0][j];
           I[i][j]=I[i][j]-m*I[0][j];

        }
    
    }

    for(i=0;i<N;i++)                 //printing matrix a
    {
        for(j=0;j<N;j++)
        {
            printf("%lf  ",a[i][j]);
        }
        printf("\n");
    }
    
    printf("\n\n");

    for(i=0;i<N;i++)              //printing identity matrix
    {
        for(j=0;j<N;j++)
        {
            printf("%lf  ",I[i][j]);
        }
        printf("\n");
    }
    
    printf("\n\n");

    for(i=1;i<N;i++) 
    {
      p=a[i][i];               // dividing by diagonal element to make diagonal elements as 1
      for(j=0;j<N;j++)
       {
        a[i][j]=a[i][j]/p;
        I[i][j]=I[i][j]/p;
       }    
       for (int k=0;k<N;k++)
        {
          if (k!=i)                          //to make rest all elements in matrix a as 0 
           {                                 //doing till matrix a becomes identity matrix, at that time the identity matrix becomes inverse of matrix a
            double m=a[k][i];
            for (j=0;j<N;j++) 
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

    for(i=0;i<N;i++)                   //printing inverse of matrix
    {
        for(j=0;j<N;j++)
        {
            printf("%lf  ",I[i][j]);
        }
        printf("\n");
    }
    

   return 0;
}    



/*Output:

Enter the order of MxN Matrix: 3 2 
Inverse of this 3x2 Matrix dosen't exist

*/