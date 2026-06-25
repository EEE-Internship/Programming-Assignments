/* **********************************************************************************************************
   * Author- Tilak Poojary                                                                                  *
   * USN- NNM24EE127                                                                                        *
   * Date- 25 June 2026                                                                                     *
   * Dept- Electrical and Electronics Engineering Department                                                *
   * College- NMAM Institute of Technology, Nitte                                                           *
   * Purpose- To demonstrate usage of switch statement                                                      *
   ********************************************************************************************************** */
   
#include<stdio.h>
#include<math.h>

int main()
{
    double a,b;
    char operation;
    
    printf("Enter the operation to be performed (+,-,*,/,%%): ");
    scanf("%c",&operation);

    printf("Enter the values for a and b: ");
    scanf("%lf %lf",&a,&b);
    
    switch(operation)
    {
        case '+':
        printf("%lf + %lf = %lf",a,b,a+b);
        break;

        case '-':
        printf("%lf - %lf = %lf",a,b,a-b);
        break;

        case '*':
        printf("%lf x %lf = %lf",a,b,a*b);
        break;
        
        case '/':
        printf("%lf / %lf = %lf",a,b,a/b);
        break;

        case '%':
        printf("%lf %% %lf = %lf",a,b,fmod(a,b));
        break;
        
        default:
        printf("The operator %c is invalid, please validate the operator",operation);
    }
    return 0;
}

/*Output:
1.
Enter the operation to be performed (+,-,*,/,%): %
Enter the values for a and b: 5
2
5.000000 % 2.000000 = 1.000000

2.
Enter the operation to be performed (+,-,*,/,%): -
Enter the values for a and b: 50 60
50.000000 - 60.000000 = -10.000000

3.
Enter the operation to be performed (+,-,*,/,%): *
Enter the values for a and b: 60 50.32
60.000000 x 50.320000 = 3019.200000

4.
Enter the operation to be performed (+,-,*,/,%): /
Enter the values for a and b: 10 5.3
10.000000 / 5.300000 = 1.886792

5.
Enter the operation to be performed (+,-,*,/,%): %
Enter the values for a and b: 8 4
8.000000 % 4.000000 = 0.000000
*/