/*AUTHOR=Deepika G
USN=NNM24EE035
Date=05 JUNE 2026
Department=Electrical and Electronics
College=NMAM Institute of Technology
To demonstrate how memory is allocated and managed by the computers CPU and operating system*/

#include<stdio.h>
int main()
{
int i=10;
float f=20.5;
char c='A';
printf("integer=%d\n",i);
printf("Address of integer=%p\n",&i);

printf("\n float=%f\n",f);
printf("Address of float=%p\n",&f);

printf("\n character=%c\n",c);
printf("Address of character=%p\n",&c);
}
