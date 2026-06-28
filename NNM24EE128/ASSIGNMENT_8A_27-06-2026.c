//DATE: 27-06-2026
//CLASS_WORK_1: NUMBERS IN DIAMOND SHAPE

#include <stdio.h> 
int main()
{
    int n,i,j,k;
    printf("Enter the number of rows: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n-i;j++)
        {
            printf(" ");
        }
        for(k=1;k<=i;k++)
        {
            printf("%d ",i);
        }
        printf("\n");
    }
        for(i=n-1;i>=1;i--)
    {
        for(j = 1; j <= n - i; j++)
        {
            printf(" ");
        }
        for(k=1;k<=i;k++)
        {
            printf("%d ",i);
        }
        printf("\n");
    }

return 0;
}

//output
//Enter the number of rows: 6                                                                                                                                                     
//     1                                     
//    2 2 
//   3 3 3 
//  4 4 4 4 
// 5 5 5 5 5 
//6 6 6 6 6 6 
// 5 5 5 5 5 
//  4 4 4 4 
//   3 3 3 
//    2 2 
//     1 
