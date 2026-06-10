/*******************************
 * Author: Gagan Shetty
 * Usn : NNM24EE038
 * Dept: Electrical and Electronics Engineering
 * College: NMAMIT
 * Date: 10/06/2026
 * Purpose : To understand curl of the matrix
*/

#include <stdio.h>

void main() {
    // Declaring variables
    float x1, y1, z1, x2, y2, z2, AxB_i, AxB_j, AxB_k;

    // Asking for vectors
    printf("Enter vector A: ");
    scanf("%f %f %f", &x1, &y1, &z1);

    printf("Enter vector B: ");
    scanf("%f %f %f", &x2, &y2, &z2);

    // computing cross product
    AxB_i = y1 * z2 - z1 * y2;
    AxB_j = - (x1 * z2 - x2 * z1);
    AxB_k = x1 * y2 - x2 * y1;

    // checkig if perpendicular

    if ((AxB_i * x1 == 0 && AxB_i * x2 == 0) && (AxB_j * y1 == 0 && AxB_j * y2  == 0) && (AxB_k * z1 == 0 && AxB_k * z2  == 0))
    {
        printf("Vector C is perpendicular to both Vector A and Vector B.");
    } else {
        printf("Vector C is not perpendicular to both Vector A and Vector B.");
    }
    
}

/*****************************************************
 * Output:
 * Enter vector A: 1 0 0
 * Enter vector B: 0 1 0
 * Vector C is perpendicular to both Vector A and Vector B.
 * 
 *****************************************************/