/* **********************************************************************************************************
   * Author- Tilak Poojary                                                                                  *
   * USN- NNM24EE127                                                                                        *
   * Date- 09 June 2026                                                                                     *
   * Dept- Electrical and Electronics Engineering Department                                                *
   * College- NMAM Institute of Technology, Nitte                                                           *
   * Purpose- To prove that del x H is perpendicular to H                                                   *
   ********************************************************************************************************** */
   

#include<stdio.h>

int main(void)
{   
    //defining the pointers as constants as we will use for equation forms
    const char *pi="pi";
    const char *a="Del x H";
    const char *b="J az";
    const char *c="H";
    const char *d="I";
    const char *e="aphi";
    const char *f="Ro";
    const char *g="aro";
    const char *h="az";
    
    printf("To prove %s is perpendicular to H\n",a);
    
    //we know the equation for coaxial cable with a<Ro<b then H is given as
    printf("%s=%s*%s/2*%s*%s\n",c,d,g,pi,f);
    printf("we know that A.B=|A||B|cos(theta), if A.B=0 means cos(theta)=0 that's theta=90 degree, means A and B are perpendicular to each other\n");
    printf("%s is given as %s=%s\n",a,a,b);
    //Thus delxH=J then
    printf("then\n");
    printf("%s.%s will be;\n",c,b);
    //substitute and solve we will get
    printf("[%s*%s/2*%s*%s].[%s]\n",d,g,pi,f,b);
    printf("as we know %s.%s=0. Thus,\n",e,g);
    //then answer will be
    printf("{[%s*%s/2*%s*%s].[%s]}=0\n",d,g,pi,f,b);
    printf("The result is 0 it says that cos(theta) is 0, which means theta is 90 degree\n");
    printf("Hence proved that %s is perpendicular to %s",a,c);


    return 0;
}


/*Output:

To prove Del x H is perpendicular to H
H=I*aro/2*pi*Ro
we know that A.B=|A||B|cos(theta), if A.B=0 means cos(theta)=0 that's theta=90 degree, means A and B are perpendicular to each other
Del x H is given as Del x H=J az
then
H.J az will be;
[I*aro/2*pi*Ro].[J az]
as we know aphi.aro=0. Thus,
{[I*aro/2*pi*Ro].[J az]}=0
The result is 0 it says that cos(theta) is 0, which means theta is 90 degree
Hence proved that Del x H is perpendicular to H

*/

/*Reference: Hayt eight edition textbook*/
