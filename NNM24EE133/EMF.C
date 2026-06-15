/******************************************************************************************************
  *AUTHOR:VINAYAKA H P
  *USN:NNM24EE133
  *DATE:14 JUNE 2026
  *Dept:ELECTRICAL AND ELECTRONICS ENGINEERING
  *COLLEGE:NMAM Institute of Technology
******************************************************************************************************/

  #include <stdio.h>

    int main() {
    double dHz_dy, dHy_dz;
    double dHx_dz, dHz_dx;
    double dHy_dx, dHx_dy;

    printf("Enter the values for the partial derivatives:\n");
  
    printf("dHz/dy: ");
    scanf("%lf", &dHz_dy);
    printf("dHy/dz: ");  
    scanf("%lf", &dHy_dz);
    printf("dHx/dz: ");
    scanf("%lf", &dHx_dz);
    printf("dHz/dx: ");
    scanf("%lf", &dHz_dx);
    printf("dHy/dx: ");
    scanf("%lf", &dHy_dx);
    printf("dHx/dy: ");
    scanf("%lf", &dHx_dy);
  
    double curlX = dHz_dy - dHy_dz;
    double curlY = dHx_dz - dHz_dx;
    double curlZ = dHy_dx - dHx_dy;

    printf("\nThe Curl (Del x H) is: (%.2f)ax + (%.2f)ay + (%.2f)az\n", curlX, curlY, curlZ);

    return 0;
}
