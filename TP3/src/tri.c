#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int tableau[100];
    int i;
    int j;
    int temp;

    srand(time(NULL));

    /* Remplissage du tableau avec des nombres aléatoires */
    for (i = 0; i < 100; i++)
    {
        tableau[i] = rand() % 201 - 100;
    }

    /* Affichage du tableau non trié */
    printf("Tableau non trie :\n");

    for (i = 0; i < 100; i++)
    {
        printf("%d ", tableau[i]);
    }

    printf("\n\n");

    /* Tri a bulles */
    for (i = 0; i < 99; i++)
    {
        for (j = 0; j < 99 - i; j++)
        {
            if (tableau[j] > tableau[j + 1])
            {
                temp = tableau[j];
                tableau[j] = tableau[j + 1];
                tableau[j + 1] = temp;
            }
        }
    }

    /* Affichage du tableau trie */
    printf("Tableau trie par ordre croissant :\n");

    for (i = 0; i < 100; i++)
    {
        printf("%d ", tableau[i]);
    }

    printf("\n");

    return 0;
}
