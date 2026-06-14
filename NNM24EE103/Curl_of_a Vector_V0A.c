/*Author:Shivali
   USN:NNM24EE103
   Date:14.6.26
   Department: Electrical and Electronics Engineering
   College:Nmam Institute of Technology
    check whether Curl(H) is perpendicular to H */
#include <stdio.h>
int main()
{
    // declaring variables
    float hx, hy, hz, cx, cy, cz, dot;
    // H vector
    printf("Enter H vector: ");
    scanf("%f %f %f", &hx, &hy, &hz);
    // Curl(H) vector
    printf("Enter Curl(H): ");
    scanf("%f %f %f", &cx, &cy, &cz);
    // Dot product
    dot = hx*cx + hy*cy + hz*cz;
    printf("Dot Product = %f\n", dot);
    // Perpendicular
    if(dot == 0)
        printf("Curl(H) is perpendicular to H");
    else
        printf("Curl(H) is not perpendicular to H");
    return 0;
}
/*  Output
Enter H vector: 1 0 0
Enter Curl(H): 0 1 0
Dot Product = 0.000000
Curl(H) is perpendicular to H

Enter H vector: 1 2 3 
Enter Curl(H): 1 3 4
Dot Product = 19.000000
Curl(H) is not perpendicular to H
*/