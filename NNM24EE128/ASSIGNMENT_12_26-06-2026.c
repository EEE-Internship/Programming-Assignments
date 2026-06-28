//DATE: 26-06-2026
//ASSIGNMENT_12
//Use of Functions
#include<stdio.h>
int add(int, int);
int sub(int,int);
int product(int,int);
float divide(int,int);
int main()
{
    int a,b,choice;
    int result;
    float divresult;
    printf("Enter the first number: ");
    scanf("%d",&a);
    printf("Enter the second number: ");
    scanf("%d",&b);
    printf("\n1.Addition");
    printf("\n2.Subtraction");
    printf("\n3.Multiplication");
    printf("\n4.Division");
    printf("\nEnter your choice: ");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
        result=add(a,b);
        printf("addition= %d",result);
        break;
        case 2:
        result=sub(a,b);
        printf("Subtraction= %d",result);
        break;
        case 3:
        result=product(a,b);
        printf("multiplication= %d",result);
        break;
        case 4:
        if(b==0)
        {
            printf("Division by zero is not possible!");
        }
        else
        {
            result=divide(a,b);
            printf("Division= %.2f",divresult);
        }
        break;
        default:
        printf("Invalid choice");
        }
        return 0;
}
int add(int a,int b)
{
    return a+b;
}
int sub(int a,int b)
{
    return a-b;
}
int product(int a,int b)
{
    return a*b;
}
float divide(int a,int b)
{
    return (float)a/b;
}
//output
//Enter the first number: 5
//Enter the second number: 10

//1.Addition
//2.Subtraction
//3.Multiplication
//4.Division
//Enter your choice: 3
//multiplication= 50
