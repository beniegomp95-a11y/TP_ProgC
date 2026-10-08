#include <stdio.h>

int main(void)
{
    int n = 7;
    int i;
    int u0 = 0;
    int u1 = 1;
    int suivant;

    printf("%d", u0);

    if (n >= 1)
    {
        printf(", %d", u1);
    }

    for (i = 2; i <= n; i++)
    {
        suivant = u0 + u1;
        printf(", %d", suivant);

        u0 = u1;
        u1 = suivant;
    }

    printf("\n");

    return 0;
}
