/* **********************************************************************************************************
   * Author- Tilak Poojary                                                                                  *
   * USN- NNM24EE127                                                                                        *
   * Date- 27 June 2026                                                                                     *
   * Dept- Electrical and Electronics Engineering Department                                                *
   * College- NMAM Institute of Technology, Nitte                                                           *
   * Purpose- To genearte numbers in diamond design.                                                        *
   ********************************************************************************************************** */
   


#include <stdio.h>

int main() {
    int i,j,n,k;
    
    printf("Enter the value for n: ");
    scanf("%d",&n);

   
    
    for(i=0;i<n;i++)
    {
      for(k=i;k<n;k++)
      {
        printf("  ");
      }
      for(j=0;j<i+1;j++)
      {
      printf("%d ",i+1);
      (i+1)>=10?printf("  "):printf("   ");
      }
    
      printf("\n");
    
    }



    for(j=n;j>0;j--)
    {
        for(k=0;k<=n-(j-1);k++)
      {
        printf("  ");
      }
    
    for(i=j-1;i>0;i--)
    {
        printf("%d ",j-1);
        (j-1)>=10?printf("  "):printf("   ");
    }
    
    printf("\n");
    }
    
    return 0;
}
