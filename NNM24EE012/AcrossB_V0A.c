/*
Name: Amal Najeeb
USN: NNM24EE012
10th june 2026
Dept of Electrical and Electronics Engineering
NMAM Institute of Technology

About: The following code is for proving that the cross product of 2 vectors will be perpendicular to both the vectors
<stdio.h> header is used for printf() function
*/

#include <stdio.h>

int main(){
    int A[3] = {4, 3, 6};          //declaring vector A
    int B[3] = {2, 7, 1};          //declaring vector B

    int C[3];

    //Calculating cross product
    C[0] = (A[1]*B[2]) - (A[2]*B[1]);
    C[1] = (A[2]*B[0]) - (A[0]*B[2]);
    C[2] = (A[0]*B[1]) - (A[1]*B[0]);

    //Calculating dot product
    int DotProductOfAandC = A[0]*C[0] + A[1]*C[1] + A[2]*C[2];
    int DotProductOfBandC = B[0]*C[0] + B[1]*C[1] + B[2]*C[2]; 

    //Printing inputs and outputs
    printf("Let vector A = %di + %dj + %dk\n", A[0], A[1], A[2]);
    printf("Let vector B = %di + %dj + %dk\n", B[0], B[1], B[2]);
    printf("Let vector AxB = vector C = %di + %dj + %dk\n", C[0], C[1], C[2]);
    printf("\nDot product of A and C = %d, B and C = %d. Therefore C is perpendicular to both A and B.", DotProductOfAandC, DotProductOfBandC);
}

/*
Output
------

Let vector A = 4i + 3j + 6k
Let vector B = 2i + 7j + 1k
Let vector AxB = vector C = -39i + 8j + 22k


Dot product of A and C = 0, B and C = 0. Therefore C is perpendicular to both A and B.
*/