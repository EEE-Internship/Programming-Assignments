/*******************************
 * Author: Gagan Shetty
 * USN: NNM24EE038
 * Dept: Electrical and Electronics Engineering
 * Date: 08/06/2026
 * Purpose: To find curl of a vector H and verify that curl(H) is perpendicular to H
 *******************************/

#include <stdio.h>

int main() {
     // Initialising variables
    float x, y;

    float Hx, Hy, Hz;
    float curl_x, curl_y, curl_z;
    float dot;

    // Asking for Input values
    printf("Enter x and y: ");
    scanf("%f %f", &x, &y);

    /* Taking H = -y i + x j +0k */
    Hx = -y;
    Hy = x;
    Hz = 0;

    /* Using computed curl values*/
    curl_x = 0;
    curl_y = 0;
    curl_z = 2;

// displaying output results

    printf("\nVector H = %fi + %fj + %fk\n",
           Hx, Hy, Hz);

    printf("Curl(H) = %fi + %fj + %fk\n",
           curl_x, curl_y, curl_z);

    dot = Hx * curl_x +
          Hy * curl_y +
          Hz * curl_z;

    printf("H . Curl(H) = %.2f\n", dot);

    if (dot == 0)
        printf("Hence Curl(H) is perpendicular to H\n");
    else
        printf("Curl(H) is not perpendicular to H\n");

    return 0;
}
/*******************************
 * Enter x and y: 1 2
*
* Vector H = -2.000000i + 1.000000j + 0.000000k
* Curl(H) = 0.000000i + 0.000000j + 2.000000k
* H . Curl(H) = 0.00
* Hence Curl(H) is perpendicular to H
*
 *******************************/
