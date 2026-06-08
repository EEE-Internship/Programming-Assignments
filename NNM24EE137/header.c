#include <stdio.h>
#include "yashasvi.h"
int main()
{
    add(4, 6);

    /*This calls add function written in yashasvi.h
      and therefore no compilation error.*/
    multiply(5, 5);

    // Same for the multiply function in yasahsvi.h
    printf("BYE!See you Soon");
    return 0;
}
