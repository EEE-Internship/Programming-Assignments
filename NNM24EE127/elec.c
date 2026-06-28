/* **********************************************************************************************************
   * Author- Tilak Poojary                                                                                  *
   * USN- NNM24EE127                                                                                        *
   * Date- 27 June 2026                                                                                     *
   * Dept- Electrical and Electronics Engineering Department                                                *
   * College- NMAM Institute of Technology, Nitte                                                           *
   * Purpose- To calculate Xl,Xc,Z,I,Pf,theta,fr,zeta,omega,sigma.                                          *
   ********************************************************************************************************** */
   


#include<stdio.h>
#include<math.h>
#define pi 3.141592654

int main()
{
    float R,L,C,Xl,Xc,fr,f,I,V,Z,Pf,theta,omega_n,zeta,sigma;

    printf("Enter value of Resistor: ");
    scanf("%f",&R);
    printf("\nEnter value of Capacitor: ");
    scanf("%f",&C);
    printf("\nEnter value of Inductor: ");
    scanf("%f",&L);
    printf("\nEnter supply volatge: ");
    scanf("%f",&V);
    printf("\nEnter the frequency: ");
    scanf("%f",&f);

    Xl=2*pi*f*L;
    Xc=1/(2*pi*f*C);
    Z=sqrt(R*R+((Xl-Xc)*(Xl-Xc)));
    I=V/Z;
    Pf=R/Z;
    theta=atan((Xl-Xc)/R);
    fr=1/(2*pi*sqrt(L*C));

    
    printf("\n*****************************************************\n");


    printf("\nThe reactive inducatnce Xl = %f\n",Xl);
    printf("\nThe reactive capacitance Xc = %f\n",Xc);
    printf("\nThe impedance Z = %f\n",Z);
    printf("\nThe current I = %f\n",I);
    printf("\nThe power factor Pf = %f\n",Pf);
    printf("\nThe Phase angle theta = %f\n",theta);
    printf("\nThe resonance frequency fr = %f\n",fr);


    if(Xl==Xc)
    printf("\nThe circuit is Resonant\n");
    else if(Xl>Xc)
    printf("\nThe circuit is Inductive\n");
    else
    printf("\nThe circuit is Capacitive\n");

    
    printf("\n*****************************************************\n");


    omega_n=1/sqrt(L*C);
    sigma=R/(2*L);
    zeta=sigma/omega_n;
    
    printf("\nOmega_n = %f\n",omega_n);
    printf("\nSigma = %f\n",sigma);
    printf("\nZeta = %f\n",zeta);

    if(zeta==1)
    printf("\nThe circuit is critically damped\n");
    else if(zeta>1)
    printf("\nThe circuit is over damped\n");
    else if (0<zeta&&zeta<1)
    printf("\nThe circuit is Under damped\n");
    else if(zeta==0)
    printf("\nThe circuit is undamped\n");
    else
    printf("\nSomething went wrong, Please try again\n");

}

/*Output:
Enter value of Resistor: 10

Enter value of Capacitor: 0.000001

Enter value of Inductor: 0.000025

Enter supply volatge: 10

Enter the frequency: 55000

*****************************************************

The reactive inducatnce Xl = 8.639380

The reactive capacitance Xc = 2.893726

The impedance Z = 11.533106

The current I = 0.867069

The power factor Pf = 0.867069

The Phase angle theta = 0.521508

The resonance frequency fr = 31830.990234

The circuit is Inductive

*****************************************************

Omega_n = 200000.000000

Sigma = 200000.000000

Zeta = 1.000000

The circuit is critically damped
*/