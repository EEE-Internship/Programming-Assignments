/* *************************************************************************
   * Author- DAKSHESH KUMAR                                                                                  
   * USN- NNM24EE033                                                                                         
   * Date- 10 June 2026                                                                                      
   * Dept- Electrical and Electronics Engineering Department                                                 
   * College- NMAM Institute of Technology, Nitte                                                            
   * Purpose- To find C =A x B VECTORS 
   ***************************************************************************/

#include <stdio.h>

int main()
{
    int a1, a2, a3; //A
    int b1, b2, b3; //B
    int c1, c2, c3; ///C
    int crossproduct1, crossproduct2, crossproduct3;

    printf("Enter the components of vector A (a1 a2 a3): ");
    scanf("%d %d %d", &a1, &a2, &a3);

    printf("Enter the components of vector B (b1 b2 b3): ");
    scanf("%d %d %d", &b1, &b2, &b3);

    printf("Enter the components of vector C (c1 c2 c3): ");
    scanf("%d %d %d", &c1, &c2, &c3);

    //Calculate A × B 
    crossproduct1 = a2 * b3 - a3 * b2;
    crossproduct2 = a3 * b1 - a1 * b3;
    crossproduct3 = a1 * b2 - a2 * b1;

    if (crossproduct1 == c1 && crossproduct2 == c2 && crossproduct3 == c3)
    {
        printf("The cross product of A and B is equal to C.\n");
    }
    else
    {
        printf("The cross product of A and B is not equal to C.\n");
    }

    return 0;
}