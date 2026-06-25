//Name:Veda Venkatesh Kamat
//USN: NNM24EE128
//Date: 25 June 2026
//Department: Electrical and Electronics Engineering
//College: NMAM Institute of Technology
//Topic: use of go to, continue and break statements
#include <stdio.h>
int main()
{
    int i;
    goto START;   
START:
    for(i=1;i<=10;i++)
    {
        if(i==6)
        {
            continue;  
        }
        if(i==8)
        {
            break;    
        }
        printf("%d\n", i);
    }
    return 0;
}