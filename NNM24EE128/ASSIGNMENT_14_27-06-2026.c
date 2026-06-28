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