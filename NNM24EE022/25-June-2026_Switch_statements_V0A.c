
/*
Anwitha Bhat
NNM24EE022
25-June-2026
Department of Electrical and Electronics
NMAM Institute of Technology Nitte
Program which demonstrates switch statement */


#include <stdio.h>
int main()
{
    int floor;
    printf("Push a button\n________\n|1    2|\n|3    4|\n|5    6|\n|______|");
    scanf("%d",&floor);

    switch(floor)
    {
case 1 : printf("First floor");
break;
case 2 : printf("Second floor");
break;
case 3 : printf("Thirdfloor");
break;
case 4 : printf("Fourth floor");
break;
case 5 : printf("Fifth floor");
break;
case 6 : printf("Sixth floor");
break;

default : printf("Invalid");
break;

    }
     return 0;
}




OUTPUT
Push a button
________
|1    2|
|3    4|
|5    6|
|______|6
Sixth floor
