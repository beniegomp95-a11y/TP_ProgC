#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int tableau[100];
    int plus_grand;
    int plus_petit;
    int i;

    srand(time(NULL));

    /* Remplissage du tableau */
    for (i = 0; i < 100; i++)
    {
        tableau[i] = rand() % 1000 + 1;
    }

    /* Initialisation */
    plus_grand = tableau[0];
    plus_petit = tableau[0];

    /* Recherche du plus grand et du plus petit */
    for (i = 1; i < 100; i++)
    {
        if (tableau[i] > plus_grand)
        {
            plus_grand = tableau[i];
        }

        if (tableau[i] < plus_petit)
        {
            plus_petit = tableau[i];
        }
    }

    printf("Le numéro le plus grand est : %d\n", plus_grand);
    printf("Le numéro le plus petit est : %d\n", plus_petit);

    return 0;
}
