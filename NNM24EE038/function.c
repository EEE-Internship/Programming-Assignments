#include <stdio.h>

float add(float a, float b)
{
    return a + b;
}

float subtract(float a, float b)
{
    return a - b;
}

float multiply(float a, float b)
{
    return a * b;
}

float divide(float a, float b)
{
    return a / b;
}

int main()
{
    int choice;
    float a, b;
    printf("1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n\n Enter Your choice: ");
    scanf("%d", &choice);
    printf("Enter values a & b: ");
    scanf("%f %f", &a, &b);

    switch (choice)
    {
    case 1:
        printf("result: %f", add(a, b));
        break;
    case 2:
        printf("result: %f", subtract(a, b));
        break;
    case 3:
        printf("result: %f", multiply(a, b));
        break;
    case 4:
        if (b == 0)
        {
            printf("result: Invalid output since b is 0");
            return 0;
        }
        printf("result: %f", divide(a, b));
        break;

    default:
        printf("result: Invalid choice");
        break;
    }

    return 0;
}