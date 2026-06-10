/*Author: Vrushabh P Ram
  USN: NNM24EE135
  Date: 10-June-2026
  Department: Electrical and Electronics Engineering 
  College: NMAM Instutute of Technology
  About the program: This program is to prove that curl of magnetic field is perpendicular to magnetic field when divergence of curl is zero */
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
double F(double x, double y, double z) {
    return 3*x*y + 2*y*z + 5*x*z; //defining the scalar function F
    double del(dF_dx, dF_dy, dF_dz); //defining the del operator
    int main(void) {
        double i;
        double j;
        double k;
        double vector_component(i, j, k); //defining the vector components of the magnetic field
    double det3x3(F,
                  del,
                  vector_component);//calculating the curl of the magnetic field using the determinant of a 3x3 matrix
                  printf("The determinant is: %lf", det3x3);



    

}}

