#include <stdio.h>

int main()
{
    int i;

    goto START;

START:
    printf("Numbers from 1 to 10:\n");

    for(i = 1; i <= 10; i++)
    {
        if(i == 6)
        {
            continue;   // Skip number 6
        }

        if(i == 8)
        {
            break;      // Stop loop when 8 is reached
        }

        printf("%d ", i);
    }

    return 0;
}