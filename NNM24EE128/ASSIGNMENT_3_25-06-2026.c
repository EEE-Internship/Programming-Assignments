//Name:Veda Venkatesh Kamat
//USN: NNM24EE128
//Date: 25 June 2026
//Department: Electrical and Electronics Engineering
//College: NMAM Institute of Technology
//Topic: use of ternery operators, displaying students marks details
#include <stdio.h>
int main()
{
    int reg_num,m1,m2,m3,m4,m5,total;
    float percentage;
    char name[20],grade;
    printf("enter the name of the student: \n");
    scanf("%s", name);
    printf("enter the reg_num: \n");
    scanf("%d", &reg_num);
    printf("enter the marks in Network Analysis: \n");
    scanf("%d", &m1);
    printf("enter the marks in Analog Signal Processing: \n");
    scanf("%d", &m2);
    printf("enter the marks in Electrical Machines: \n");
    scanf("%d", &m3);
    printf("enter the marks in Control System \n");
    scanf("%d", &m4);
    printf("enter the marks in Intruments and Measurements \n");
    scanf("%d", &m5);
    total=m1+m2+m3+m4+m5;
    printf("Total Marks Obtained out of 500: %d \n",total);
    percentage=(float)total/500*100;
    printf("Percentage of the student: %.2f\n\n",percentage);
    if(percentage>=40)
    {
        printf("PASSED!!\n\n");
    }
    else
    {
        printf("FAILED!!");
    }
    grade=(percentage>=90)?'A':(percentage>=75)?'B':(percentage>=50)?'C':(percentage>=40)?'D':'F';
    printf("Grade= %c\n\n ",grade);
    printf("-----RESULTS-----\n\n");
    printf("Name: %s \n",name);
    printf("Register Number: %d \n",reg_num);
    printf("Total Marks Obtained: %d\n",total);
    printf("Percentage= %.2f\n",percentage);
    printf("Result: %s\n", (percentage >= 40) ? "PASS" : "FAIL");
    printf("Grade: %c\n",grade);

    return 0;
}

//OUTPUT
//enter the name of the student: 
//Veda
//enter the reg_num: 
//128
//enter the marks in Network Analysis: 
//56
//enter the marks in Analog Signal Processing: 
//74
//enter the marks in Electrical Machines: 
//86
//enter the marks in Control System 
//92
//enter the marks in Intruments and Measurements 
//63
//Total Marks Obtained out of 500: 371 
//Percentage of the student: 74.20

//PASSED!!

//Grade= C

// -----RESULTS-----

//Name: Veda 
//Register Number: 128 
//Total Marks Obtained: 371
//Percentage= 74.20
//Result: PASS
//Grade: C
