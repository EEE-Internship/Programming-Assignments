/* **********************************************************************************************************
   * Author- Tilak Poojary                                                                                  *
   * USN- NNM24EE127                                                                                        *
   * Date- 25 June 2026                                                                                     *
   * Dept- Electrical and Electronics Engineering Department                                                *
   * College- NMAM Institute of Technology, Nitte                                                           *
   * Purpose- To get the percentage, total and grades by taking marks of five subjects                      *
   ********************************************************************************************************** */
   
#include<stdio.h>

int main()
{
    float sub1,sub2,sub3,sub4,sub5,total,percentage;
    int grade;

    printf("Enter the marks of five subjects: ");
    scanf("%f %f %f %f %f",&sub1,&sub2,&sub3,&sub4,&sub5);

    total=sub1+sub2+sub3+sub4+sub5;
    percentage=total/5;

    printf("The total marks is: %f \nThe percentage is: %f\n",total,percentage);

    if(percentage>=40)
    printf("The above candidate passed the exam\n");
    else
    printf("The above candidate failed to clear the exam\n");
    
    printf("Garde: ");
    (percentage>=90)?printf("A"):(percentage>=75)?printf("B"):(percentage>=50)?printf("C"):(percentage>=40)?printf("D"):printf("F");

    return 0;
}

/*Output:
1.
Enter the marks of five subjects: 90 99 95 95.6 96.36
The total marks is: 475.960022 
The percentage is: 95.192001
The above candidate passed the exam
Garde: A

2.
Enter the marks of five subjects: 80 60 80 90 85.3
The total marks is: 395.299988 
The percentage is: 79.059998
The above candidate passed the exam
Garde: B

3.
Enter the marks of five subjects: 40 50 80 50 60
The total marks is: 280.000000 
The percentage is: 56.000000
The above candidate passed the exam
Garde: C

4.
Enter the marks of five subjects: 60 50 40 40 45
The total marks is: 235.000000 
The percentage is: 47.000000
The above candidate passed the exam
Garde: D

5.
Enter the marks of five subjects: 20 10 30 50 25.2
The total marks is: 135.199997 
The percentage is: 27.039999
The above candidate failed to clear the exam
Garde: F
*/