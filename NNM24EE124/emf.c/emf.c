//name=Thrisha
//usn=nnm24ee124
//EEE
//purpose is to prove the del cross h is perpendicular to h
#include <stdio.h>// intialize the libray
#include <stdlib.h>// intialize the libray
#include <math.h>// intialize the libray
int main()
{
    int i,x,y,z,j,k;//intialize the variable
    float difference_type;// intialize the variable
    int del[3]={difference_type,difference_type,difference_type};// intialize the del operatore
    char H[3]={x+y+z,x+y+z,x+y+z};// intialize the del operator
    int delxH=((i*((del[3]*H[2])-(del[2]*H[3]))))
    -(j*((del[3]*H[1])-(del[1]*H[3]))
      +(k*(del[1]*H[2])-(del[2]*H[1])));// intialize the del curl of h
    int result=del[3]*delxH;//del.(delxH)
    for(i=0;i<3;i++)
    {
        printf("%d\t",result);// print the result
    }
    return 0;
}
