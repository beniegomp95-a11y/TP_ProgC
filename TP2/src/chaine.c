#include <stdio.h>

int main(void)
{
    char chaine1[100] = "Hello";
    char chaine2[100] = " World!";
    char copie[100];

    int longueur = 0;
    int i = 0;
    int j = 0;

    /* 1. Calculer la longueur de chaine1 */
    while (chaine1[longueur] != '\0')
    {
        longueur++;
    }

    printf("Longueur de chaine1 : %d\n", longueur);

    /* 2. Copier chaine1 dans copie */
    while (chaine1[i] != '\0')
    {
        copie[i] = chaine1[i];
        i++;
    }

    copie[i] = '\0';

    printf("Copie de chaine1 : %s\n", copie);

    /* 3. Concaténer chaine2 à chaine1 */
    i = 0;

    /* Aller à la fin de chaine1 */
    while (chaine1[i] != '\0')
    {
        i++;
    }

    /* Ajouter chaine2 à la suite de chaine1 */
    while (chaine2[j] != '\0')
    {
        chaine1[i] = chaine2[j];
        i++;
        j++;
    }

    /* Ajouter le caractère nul à la fin */
    chaine1[i] = '\0';

    printf("Concaténation : %s\n", chaine1);

    return 0;
}