/* **********************************************************************************************************
   * Author- Tilak Poojary                                                                                  *
   * USN- NNM24EE127                                                                                        *
   * Date- 27 June 2026                                                                                     *
   * Dept- Electrical and Electronics Engineering Department                                                *
   * College- NMAM Institute of Technology, Nitte                                                           *
   * Purpose- To find the position of a element in an arry.                                                 *
   ********************************************************************************************************** */
   


#include<stdio.h>

int main()
{
    int a[100],i,n,p;

    printf("Enter the value for n: ");
    scanf("%d",&n);
    
    printf("Enter the elements of the array: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    printf("Enter the element to find it's position: ");
    scanf(" %d",&p);
    
    for(i=0;i<n;i++)
    {
        if(a[i]==p)
        {
        printf("The element found on location %d\n",i+1);
        break;
        }
        
        if(i==n)
        {
            printf("Element not found");
        }
    }
    return 0;
}