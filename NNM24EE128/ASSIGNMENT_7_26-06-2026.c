//Name:Veda Venkatesh Kamat
//USN: NNM24EE128
//Date: 26 June 2026
//Department: Electrical and Electronics Engineering
//College: NMAM Institute of Technology
//Topic: use of call by value to find the largest of three numbers
#include <stdio.h>
int largest(int a, int b, int c)
{
 if (a >= b && a >= c)
  return a;
 else if (b >= a && b >= c)
  return b;
 else
 return c;
}
int main()
{
 int n1, n2, n3, result;
 printf("Enter three numbers: ");
 scanf("%d %d %d", &n1, &n2, &n3);
 result = largest(n1, n2, n3);
 printf("Largest number = %d\n", result);
 return 0;
}