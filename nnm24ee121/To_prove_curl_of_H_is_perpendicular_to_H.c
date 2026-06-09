/***
 * Name:Sushanth Shetty
 * Usn:NNM24EE121
 * DATE;06-JUNE-2026
 * DEPT:Electrical and electronics engineering
 * College:NMAMIT
 */
#include <stdio.h>
#include<math.h>

int main() {
    int x,y,dy_Hz=0,dx_Hz=0,dz_Hx=0,dx_Hy=1,dy_Hx=-1,Hxx,Hyy,Hzz,perpendicular,hz;
    char hx,hy;
    hx =-y;
    hy =x;
    hz=0;
    printf("The H vector is -y i + x j+ o k \n");
    Hxx=dy_Hz-dz_Hx;
    Hyy=dx_Hz-dz_Hx;
    Hzz=dx_Hy-dy_Hx;
    printf( "the curl of H vector is %d i+ %d j+ %d k \n",Hxx,Hyy,Hzz);
    perpendicular=Hxx*hx+Hyy*hy+Hzz*hz;
    if(perpendicular==0)
    {
        printf("The Divergence of curl of H vector is %d .\n",perpendicular);
    printf("Therefore we can say that  curl of H vector is perpendicular to H vector. \n");
    printf("Hence proved.");
    
    }
    return(0);
}
/*Output
The H vector is -y i+ x j +0 k

the curl of H vector is 0 i+ 0 j +2 k

The Divergence of curl of H vector is 0.

Therefore we can say that curl of H vector is perpendicular to H vector.

Hence proved.*/
