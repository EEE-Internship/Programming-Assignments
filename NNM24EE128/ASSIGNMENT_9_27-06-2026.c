//DATE: 27-06-2026
//CLASS_TASK_02
//CIRCUIT NATURE OF RLC
#include<stdio.h>
#include<math.h>
int main()
{
    int r,v,f;
    float l,c,xl,xc,z,i,phi,phideg,pf,fr;
    printf("enter the value of resistance: \n");
    scanf("%d",&r);
    printf("enter the value of inductance: \n");
    scanf("%f",&l);
    printf("enter the value of capacitancetance: \n");
    scanf("%f",&c);
    printf("enter the value of supply voltage: \n");
    scanf("%d",&v);
    printf("enter the value of frequency: \n");
    scanf("%d",&f);
    xl=2*3.142*f*l;
    printf("Inductive Reactance Xl= %.3f ohms",xl);
    printf("\n");
    xc=1/(2*3.142*f*c);
    printf("Capacitive Reactance Xc= %.3f ohms",xc);
    printf("\n");
    z=sqrt(r*r+(xl-xc)*(xl-xc));
    printf("Impedance Z= %.3f ohms",z);
    printf("\n");
    i=v/z;
    printf("\n");
    printf("Current= %.3f",i);
    printf("\n");
    phi=atan((xl-xc)/r);
    phideg=(180/3.142)*phi;
    printf("Phase Angle= %.3f",phideg);
    printf("\n");
    pf=cos(phi);
    printf("Power factor= %.3f",pf);
    printf("\n");
    fr=1/(2*3.142*sqrt(l*c));
    printf("Resonant Frequency= %.3f",fr);
    printf("\n");
    if(xl>xc)
    {
        printf("Circuit is Inductive\n\n");
    }
    else if(xl<xc)
    {
        printf("Circuit is Capacitive\n\n");
    }
    else
    {
        printf("Circuit is Resonant");
    }
    return 0;
}