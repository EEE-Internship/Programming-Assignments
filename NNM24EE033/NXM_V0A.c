/* *************************************************************************
   * Author- DAKSHESH KUMAR                                                                                  
   * USN- NNM24EE033                                                                                         
   * Date- 10 June 2026                                                                                      
   * Dept- Electrical and Electronics Engineering Department                                                 
   * College- NMAM Institute of Technology, Nitte                                                            
   * Purpose- To find WHEATHER INVERSE OF N X M EXISTS
   ***************************************************************************/
#include <stdio.h>

int main()
{
    int row;
    int column;

    printf("Enter the number of rows: ");
    scanf("%d", &row);

    printf("Enter the number of columns: ");
    scanf("%d", &column);

    if (row == column)
    {
        printf("Inverse may exist.\n");
    }
    else
    {
        printf("Inverse does not exist.\n");
    }

    return 0;
}