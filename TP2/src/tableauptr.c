#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int tab_int[11];
    float tab_float[11];
    int *p_int;
    float *p_float;
    int i;

    srand(time(NULL));

    /* Remplissage des tableaux */
    for (i = 0; i < 11; i++)
    {
        *(tab_int + i) = rand() % 100;
        *(tab_float + i) = (float)rand() / RAND_MAX * 10.0f;
    }

    /* Affichage avant modification */
    printf("Tableau d'entiers avant multiplication :\n");
    for (i = 0; i < 11; i++)
    {
        printf("%d", *(tab_int + i));

        if (i < 10)
        {
            printf(", ");
        }
    }
    printf("\n\n");

    printf("Tableau de float avant multiplication :\n");
    for (i = 0; i < 11; i++)
    {
        printf("%.2f", *(tab_float + i));

        if (i < 10)
        {
            printf(", ");
        }
    }
    printf("\n\n");

    /* Pointeurs sur le début des tableaux */
    p_int = tab_int;
    p_float = tab_float;

    /* Multiplication par 3 aux indices pairs */
    for (i = 0; i < 11; i++)
    {
        if (i % 2 == 0)
        {
            *(p_int + i) *= 3;
            *(p_float + i) *= 3.0f;
        }
    }

    /* Affichage après modification */
    printf("Tableau d'entiers après multiplication :\n");
    for (i = 0; i < 11; i++)
    {
        printf("%d", *(p_int + i));

        if (i < 10)
        {
            printf(", ");
        }
    }
    printf("\n\n");

    printf("Tableau de float après multiplication :\n");
    for (i = 0; i < 11; i++)
    {
        printf("%.2f", *(p_float + i));

        if (i < 10)
        {
            printf(", ");
        }
    }
    printf("\n");

    return 0;
}
