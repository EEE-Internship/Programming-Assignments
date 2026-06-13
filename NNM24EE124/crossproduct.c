#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int i,j,k,x,y,z,dx,dy,dz;
    int result[3];
    result[3]=0;
    float B[3]={i*dx,j*dy,k*dz};
    float A[3]={i*x,j*y,k*z};
    float AXB[3]={(i*(z*dy-y*dz)),(j*(k*dx-x*dz)),(k*(j*dx-x*dy))};
    A[3]*AXB[3]==result[3];
    B[3]*AXB[3]==result[3];
    printf("%p\t",result[3]);
    printf("\nhence the curl of a vector is perpendicular to that vector\n");
    return 0;
}
