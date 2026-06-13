#include <stdio.h>

int main()
 {
    int a1, a2, a3, b1, b2, b3;
    int c1, c2, c3;

    printf("Enter vector A (a1 a2 a3): ");
    scanf("%d%d%d", &a1, &a2, &a3);

    printf("Enter vector B (b1 b2 b3): ");
    scanf("%d%d%d", &b1, &b2, &b3);

    c1 = a2 * b3 - a3 * b2;
    c2 = a3 * b1 - a1 * b3;
    c3 = a1 * b2 - a2 * b1;

    printf("Vector C = (%d, %d, %d)\n", c1, c2, c3);

    return 0;
}