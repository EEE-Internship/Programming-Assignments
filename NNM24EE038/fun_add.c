#include <stdio.h>

float add(float a, float b)
{
    return a + b;
}

int main()
{
    float a, b;
    printf("Enter values a & b: ");
    scanf("%f %f", &a, &b);
    printf("result: %f", add(a, b));
    return 0;
}