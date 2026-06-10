/*Author: Vrushabh P Ram
  USN: NNM24EE135
  Date: 10-June-2026
  Department: Electrical and Electronics Engineering 
  College: NMAM Instutute of Technology
  About the program: This program is show that vector c is perpendicular to vector a and b.*/
#include <stdio.h>
#include <math.h>
int main() {
    double a[3], b[3];
    printf("Enter the components of vector a (i j k): ");
    scanf("%lf %lf %lf", &a[0], &a[1], &a[2]); //input for vector a
    printf("Enter the components of vector b (i j k): ");
    scanf("%lf %lf %lf", &b[0], &b[1], &b[2]); //input for vector b
    // Calculate the cross product c = a x b
    double c[3];
    c[0] = a[1]*b[2]-b[1]*a[2]; //i component of vector c
    c[1] = -(a[0]*b[2]-b[0]*a[2]); //j component of vector c
    c[2] = a[0]*b[1]-b[0]*a[1]; //k component of vector c
    printf("vector c is: %.2lf i + %.2lf j + %.2lf k\n", c[0], c[1], c[2]);
    printf("vector c is perpendicular to vector a and b.\n");
    return 0;
}
