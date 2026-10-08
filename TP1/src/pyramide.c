#include <stdio.h>

int main(void)
{
    int n = 5;
    int i, j;

    for (i = 1; i <= n; i++)
    {
        /* Afficher les espaces avant les nombres */
        for (j = 1; j <= n - i; j++)
        {
            printf(" ");
        }

        /* Afficher les nombres croissants */
        for (j = 1; j <= i; j++)
        {
            printf("%d", j);
        }

        /* Afficher les nombres décroissants */
        for (j = i - 1; j >= 1; j--)
        {
            printf("%d", j);
        }

        printf("\n");
    }

    printf("Generation de la pyramide terminee.\n");

    return 0;
}

