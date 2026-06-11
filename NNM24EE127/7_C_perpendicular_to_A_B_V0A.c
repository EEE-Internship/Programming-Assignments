/* **********************************************************************************************************
   * Author- Tilak Poojary                                                                                  *
   * USN- NNM24EE127                                                                                        *
   * Date- 10 June 2026                                                                                     *
   * Dept- Electrical and Electronics Engineering Department                                                *
   * College- NMAM Institute of Technology, Nitte                                                           *
   * Purpose- To prove C is perpendicular to both A and B                                                   *
   ********************************************************************************************************** */

#include<stdio.h>

int main(void)
{
    float A[3],B[3],C[3],D,E;
    int i,j;
    printf("Enter the coefficents of A:\n");  
    for(i=0;i<3;i++)
    {
        scanf("%f",&A[i]);                   //to take coefficients of A
    }
    printf("Enter the coefficents of B:\n");
    for(j=0;j<3;j++)
    {
        scanf("%f",&B[i]);                   //to take coefficients of b
    }


    C[0]=A[1]*B[2]-A[2]*B[1];               //to compute the determinanat or performing AxB
    C[1]=-(A[0]*B[2]-A[2]*B[0]);
    C[2]=A[0]*B[1]-A[1]*B[1];

    printf("C= %f i- %f j+ %f k\n",C[0],C[1],C[2]);   //printing C vector
    
    D=A[0]*C[0]+A[1]*C[1]+A[2]*C[2];                   //Doing dot product of C and A, if we get 0 then C is perpendicular to A
    E=B[0]*C[0]+B[1]*C[1]+B[2]*C[2];              //Doing dot product of C and B, if we get 0 then C is perpendicular to B
    
    if(D==0 && E==0)     //checking if both D and E are 0, if yes than C is perpendicular to both A and B
    {
        printf("C is perpendicular to both A and B");
    }
    else if(D==0)
    {
        printf("C is perpendicular to A only");
    }
    else if(E==0)
    {
        printf("C is perpendicular to B only");
    }
    else
    {
        printf("C is neither perpendicular to A nor B");
    }

    return 0;
}


/* Output:

Enter the coefficents of A:
7 4 1 
Enter the coefficents of B:
8 6 2
C= -0.000000 i- 0.000000 j+ 0.000000 k
C is perpendicular to both A and B

*/