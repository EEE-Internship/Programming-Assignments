//Name:Veda Venkatesh Kamat
//USN: NNM24EE128
//Date: 26 June 2026
//Department: Electrical and Electronics Engineering
//College: NMAM Institute of Technology
//Topic: use of call by value to find the sum of two numbers
#include <stdio.h>
int sum(int a, int b)
{
    return a + b;
}
int main()
{
    int n1, n2, result;
    printf("Enter two numbers: ");
    scanf("%d %d", &n1, &n2);
    result = sum(n1, n2);
    printf("Sum = %d\n", result);
    return 0;
}