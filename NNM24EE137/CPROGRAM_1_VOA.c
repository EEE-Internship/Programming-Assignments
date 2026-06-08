//Author-Yashasvi V
//USN-NNM24EE137
//Date-05 june 2026
//Department-Electrical and Electronics Engineering
//College-NMAM Institute of Technology
//Purpose-To declare integer,float,& character variables and print their values, memory size and memory address
// Reffered link- https://www.programming9.com/programs/c-programs/103-c-program-to-find-address-locations-of-variables.
#include <stdio.h>
int main()
{
int a=20;   //integer variable is declared and its value is 20
float b=10.5;  //float variable is declared and its vale is 10.5
char c='A';  //char variable is decalred and its value is A
printf("value of a is %d\n", a); //prints the value of a
printf("address of a = %p\n", &a); //prints the memory address of a
printf("value of b is %f\n", b); //prints the value of b
printf("address of b = %p\n", &b); //prints the memory address of b
printf("value of c is %d\n", c);  //prints the value of c
printf("address of c = %p\n", &c);  //prints the memory address of c
printf("size of int= %zu bytes\n",sizeof(a)); //prints the size of a integer variable
printf("size of float= %zu bytes\n",sizeof(b)); //prints the size of b float variable
printf("size of char= %zu bytes\n",sizeof(c)); //prints the value of c character variable
return 0;

}

