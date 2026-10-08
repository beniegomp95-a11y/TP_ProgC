#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    int a = 16;
    int b = 3;

    printf("Addition : %d + %d = %d\n", a, b, a + b);
    printf("Soustraction : %d - %d = %d\n", a, b, a - b);
    printf("Multiplication : %d * %d = %d\n", a, b, a * b);
    printf("Division : %d / %d = %d\n", a, b, a / b);
    printf("Modulo : %d %% %d = %d\n", a, b, a % b);

    printf("a == b : %s\n", (a == b) ? "true" : "false");
    printf("a > b  : %s\n", (a > b) ? "true" : "false");

    return 0;
}


