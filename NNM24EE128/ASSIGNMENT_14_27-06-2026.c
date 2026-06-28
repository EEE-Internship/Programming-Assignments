//DATE: 27-06-2026
//ASSIGNMENT_14
//print the elements of array using pointer notation

#include<stdio.h>
int main()
{
    int arr[10],n,i;
    printf("enter the number of elements: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("enter the elements %d: ",i+1);
        scanf("%d", &arr[i]);
    }
    printf("array elements are: ");
    for(i=0;i<n;i++)
    {
        printf("%d, ", *(arr+i));
    }
    return 0;
}
//output
//enter the number of elements: 6
//enter the elements 1: 2
//enter the elements 2: 5
//enter the elements 3: 3
//enter the elements 4: 7
//enter the elements 5: 9
//enter the elements 6: 6
//array elements are: 2, 5, 3, 7, 9, 6, 
