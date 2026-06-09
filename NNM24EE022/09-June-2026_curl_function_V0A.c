#include <stdio.h>
/*
Anwitha Bhat
NNM24EE022
09-June-2026
Department of Electrical and Electronics
NMAM Institute of Technology Nitte
Program which gives curl of a function and proves that curl is perpendicular to the function */

int main() {
float dCdy, dBdz;
float dAdz, dCdx;
float dBdx, dAdy;
float A,B,C;

//input for A,B,C is taken from user
printf("Enter A B C: ");
scanf("%f %f %f", &A, &B, &C);

//directly the partial derivative input is taken from the user
    printf("Enter dC/dy: ");
    scanf("%f", &dCdy);
    printf("Enter dB/dz: ");
    scanf("%f", &dBdz);
    printf("Enter dA/dz: ");
    scanf("%f", &dAdz);
    printf("Enter dC/dx: ");
    scanf("%f", &dCdx);
    printf("Enter dB/dx: ");
    scanf("%f", &dBdx);
    printf("Enter dA/dy: ");
    scanf("%f", &dAdy);

    //We arrived at this because of curl formula in matrix form
    float curl_x = dCdy - dBdz;
    float curl_y = dAdz - dCdx;
    float curl_z = dBdx - dAdy;

    //to obtain the curl
    printf("\nCurl = (%.2f, %.2f, %.2f)\n",
           curl_x, curl_y, curl_z);


//curl is dotted wuth A,B,C to check if the resltant is 0
float dot_product= A*curl_x + B*curl_y + C*curl_z;

if(dot_product == 0)
    printf("Curl is perpendicular to the vector.\n");
else
    printf("Curl is NOT perpendicular to the vector.\n");

    return 0;
}



output
Enter A B C: -1 1 0
Enter dC/dy: 0
Enter dB/dz: 0
Enter dA/dz: 0
Enter dC/dx: 0
Enter dB/dx: 1
Enter dA/dy: -1

Curl = (0.00, 0.00, 2.00)
Curl is perpendicular to the vector.
