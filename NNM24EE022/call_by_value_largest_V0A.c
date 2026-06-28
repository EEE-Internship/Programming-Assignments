/*
Anwitha Bhat
NNM24EE022
27-June-2026
Department of Electrical and Electronics
NMAM Institute of Technology Nitte
Program which which gives call by value to find the largest value*/


#include <stdio.h>

void largest(int a, int b, int c)
{
    if (a >= b && a >= c)
        printf("Largest = %d", a);
    else if (b >= a && b >= c)
        printf("Largest = %d", b);
    else
        printf("Largest = %d", c);
}

int main()
{
    int x, y, z;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &x, &y, &z);

    largest(x, y, z);   // Call by Value

    return 0;
}