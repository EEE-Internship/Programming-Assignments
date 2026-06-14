/*Author:Shivali
   USN:NNM24EE103
   Date:14.6.26
   Department: Electrical and Electronics Engineering
   College:Nmam Institute of Technology
  Prove C = A x B is perpendicular to A and B */
#include <stdio.h>
int main()
{
    //declaring variables
    float ax, ay, az, bx, by, bz, cx, cy, cz, d1, d2;
    //A Vector
    printf("Enter A vector: ");
    scanf("%f %f %f", &ax, &ay, &az); 
    //B Vector
    printf("Enter B vector: ");
    scanf("%f %f %f", &bx, &by, &bz);
    // Cross product
    cx = ay*bz - az*by;
    cy = az*bx - ax*bz;
    cz = ax*by - ay*bx;
    // Dot product
    d1 = ax*cx + ay*cy + az*cz;
    d2 = bx*cx + by*cy + bz*cz;
    printf("C vector = (%f, %f, %f)\n", cx, cy, cz);
    if(d1 == 0 && d2 == 0)
        printf("C is perpendicular to both A and B");
    else
        printf("C is not perpendicular to both A and B");

    return 0;
}
/*OUTPUT
Enter A vector: 1 2 3
Enter B vector: 4 5 6
C vector = (-3.000000, 6.000000, -3.000000)
C is perpendicular to both A and B
*/