#include <stdio.h>
/*
Akshay g rao
NNM24EE010
09-June-2026
Department of Electrical and Electronics
NMAM Institute of Technology Nitte
Program to find curl of the vector */
/*
Author: Akshay G Rao
USN: NNM24EE010
Purpose: To find the curl of a vector field
*/
int main()
{
float dRdy, dQdz, dPdz, dRdx, dQdx, dPdy;  //to store the partial deriatives
float curl_x, curl_y, curl_z;   
printf("Enter dR/dy and dQ/dz: ");//read from the data given
scanf("%f %f", &dRdy, &dQdz);//scan the given data
printf("Enter dP/dz and dR/dx: ");//read from the data given
scanf("%f %f", &dPdz, &dRdx);//scan the given data
printf("Enter dQ/dx and dP/dy: ");//read from the data given
scanf("%f %f", &dQdx, &dPdy);//scan the given data
curl_x = dRdy - dQdz;//to valculate x component
curl_y = dPdz - dRdx;//to find y component
curl_z = dQdx - dPdy;//to find z component
printf("\nCurl F = %.2fi + %.2fj + %.2fk\n",//this is the resultt after the calculation
curl_x, curl_y, curl_z);
return 0;
}
