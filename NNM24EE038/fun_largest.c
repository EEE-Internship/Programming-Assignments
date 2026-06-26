#include <stdio.h>

float largest(float a, float b, float c)
{
    float temp = a;
    if (b > a)
    {
        temp = b;
    }

    if (c > b)
    {
        temp = c;
    }
    return temp;
}

int main()
{
    float a, b, c;
    printf("Enter values a, b & c: ");
    scanf("%f %f %f", &a, &b, &c);
    printf("result: %f", largest(a, b, c));
    return 0;
}