//Author:Veda Venkatesh Kamat
//USN: NNM24EE128
//Date: 13 June 2026
//Department: Electrical and elctronics
//College: NMAM Institute of Technology
//About the program: this program is used to prove that the curl of h is perpendicular to h

int main()
{
    float I, rho;//current and radial distance
    float H;//magnitude of magnetic field
    float curlH;//magnitude of curl(H)
    float dotproduct;//stores H . curl(H)
    printf("proof that curl of H is perpendicular to H\n");
    //input values
    printf("enter current I: ");
    scanf("%f", &I);
    printf("enter radial distance rho: ");
    scanf("%f", &rho);
    //magnetic field around a coaxial cable
    H=I/(2*3.142*rho);
    //curl(H) magnitude
    curlH=I/rho;
    //H is along aphi and curl(H) is along az
    //aphi.az = 0
    dotproduct= H*curlH*0;
    printf("\nMagnetic Field H = %.4f aphi\n", H);
    printf("Curl(H) = %.4f az\n", curlH);
    printf("\nDot Product:\n");
    printf("H . Curl(H)\n");
    printf("= %.4f x %.4f x (aphi.az)\n", H, curlH);
    printf("= %.4f x %.4f x 0\n", H, curlH);
    printf("= %.4f\n", dotproduct);
    if(dotproduct == 0)
    {
        printf("\nsince H . Curl(H) = 0\n");
        printf("therefore Curl(H) is perpendicular to H.\n");
    }
    else
    {
        printf("\ncurl(H) is not perpendicular to H.\n");
    }
    return 0;
}