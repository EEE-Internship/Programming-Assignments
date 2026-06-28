/*
Anwitha Bhat
NNM24EE022
27-June-2026
Department of Electrical and Electronics
NMAM Institute of Technology Nitte
Program which which gives position of any element in the array */


#include <stdio.h>

int main()
{
    int a[10], n, i, x;

    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter the elements:\n");
    for(i = 0; i < n; i++)
    {
     scanf("%d", &a[i]);
    }

    printf("Enter the element to search: ");
    scanf("%d", &x);

    for(i = 0; i < n; i++)
    {
        if(a[i] == x)
        {
        printf("Position = %d", i + 1);
            break;
        }
    }

    return 0;
}


output

Enter number of elements: 7
Enter the elements:
10 20 30 40 50 60 70
Enter the element to search: 70
Position = 7
