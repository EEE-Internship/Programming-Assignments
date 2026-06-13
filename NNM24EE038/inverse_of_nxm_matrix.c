/*******************************
 * Author: Gagan Shetty
 * Usn : NNM24EE038
 * Dept: Electrical and Electronics Engineering
 * College: NMAMIT
 * Date: 13/06/2026
 * Purpose : To understand to create nxm matrix
 */

#include <stdio.h>

int main()
{
    // Initialize the order variable
    int n, m;

    // Read matrix order
    printf("Enter the order N for the matrix: ");
    scanf("%d %d", &n, &m);

    if (n == m)
    {
        printf("A inverse exists. \n");
    } else {
        printf("A inverse doesnt exists. \n");
    }

    return 0;
}

/*******************************
 * Enter the order N for the matrix: 1 2
 * A inverse doesnt exists. 
 *
 *******************************/