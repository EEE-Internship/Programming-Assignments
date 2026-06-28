/*
Anwitha Bhat
NNM24EE022
27-June-2026
Department of Electrical and Electronics
NMAM Institute of Technology Nitte
Program which which gives call by value to find sum */


#include <stdio.h>

void sum(int a, int b)
{
printf("Sum = %d", a + b);
}

int main()
{
int x, y;

    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    sum(x, y);

    return 0;
}