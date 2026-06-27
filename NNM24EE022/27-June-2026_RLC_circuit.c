/*
Anwitha Bhat
NNM24EE022
27-June-2026
Department of Electrical and Electronics
NMAM Institute of Technology Nitte
Program which which gives various electrical values */

#include<stdio.h>
#include<math.h>
int main(){
    int r;
    float l,c,XL,XC,Z,V,I,phi,pf,fr;

    printf("Enter the value for V\n");
     scanf("%f",&V);

     printf("Enter the value for R\n");
     scanf("%d",&r);

     printf("Enter the value for L\n");
     scanf("%f",&l);

      printf("Enter the value for C\n");
     scanf("%f",&c);


        printf("The value of XL is %f\n",XL=2*3.14*50*l);

        printf("The value of XC is %f\n",XC=1/(2*3.14*50*c));

        printf("The impedance is %f\n",Z=sqrt((r*r)+pow((XL-XC),2)));
     
        printf("The value of current is %f\n",I=V/Z);

        printf("The phase angle is %f\n",phi=atan((XL-XC)/r)*180/3.14);

        printf("The power factor is %f\n",pf=cos(atan((XL-XC)/r)));

        printf("The resonant frequency is %f\n",fr=1/(2*3.14*sqrt(l*c)));

        (XL>XC)?printf("The circuit is inductive"):
        (XL<XC)?printf("The circuit is capacitive"):printf("The circuit is resistive");
     return 0;
}



output

Enter the value for V
10
Enter the value for R
10
Enter the value for L
10
Enter the value for C
4.7
The value of XL is 3140.000000
The value of XC is 0.000678
The impedance is 3140.015137
The value of current is 0.003185
The phase angle is 89.863083
The power factor is 0.003185
The resonant frequency is 0.023227
The circuit is inductive
