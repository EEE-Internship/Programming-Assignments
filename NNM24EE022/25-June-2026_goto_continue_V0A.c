/*
Anwitha Bhat
NNM24EE022
25-June-2026
Department of Electrical and Electronics
NMAM Institute of Technology Nitte
Program which demonstrates goto and continuous statement */




#include<stdio.h>
int main()
{
    int i;
    for(i=0;i<11;i++)

  {


    if(i==6)
        continue;
  
    if(i==8)
    break;
printf("%d\n",i);


  }
return 0;
}



RESULT
0
1
2
3
4
5
7
