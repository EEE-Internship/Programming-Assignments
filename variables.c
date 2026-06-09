/*Author:GHANASHRI M
USN:NNM24EE042
Date:6th June 2026
Dept:Electrical & Electronics Engineering
College:NMAM Institute of Technology
About the program: To find address and  number of memory locations used by each variable*/

#include <stdio.h>
int main(){
    int a=10;char b='A';float c=2.63;//initializing variables a,b and c 
    printf("Integer a-address:%p",&a );//to find address ampersand operator used 
    printf(",Memory allocated:%zu bytes \n",sizeof(a));//to find memory location sizeof(variable name) is used    
    printf("Character b-address:%p",&b );//%p is a format specifier used in printf sts to print memory address(pointer) of a variable
    printf(",Memory allocated:%zu bytes \n",sizeof(b));//%zu is used to print the answer to sizeof()function
   
    printf("Floating point c-address:%p",&c);//address of a var means where the computer stores the value declared in RAM 
    printf(",Memory allocated:%zu bytes \n",sizeof(c));//sizeof(c) means how many bytes are needed to store c 
   }


   /*output:
   PS D:\Projects\sample\variables> D:\Projects\sample\variables\variables.exe
Integer a-address:000000270D53F774,Memory allocated:4 bytes 
Character b-address:000000270D53F770,Memory allocated:1 bytes 
Floating point c-address:000000270D53F778,Memory allocated:4 bytes 
*/