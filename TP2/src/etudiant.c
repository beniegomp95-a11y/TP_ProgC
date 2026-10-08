#include <stdio.h>

int main(void)
{
    char noms[5][30] = {
        "Dupont",
        "Martin",
        "Durand",
        "Bernard",
        "Petit"
    };

    char prenoms[5][30] = {
        "Alice",
        "Lucas",
        "Emma",
        "Hugo",
        "Chloe"
    };

    char adresses[5][100] = {
        "10 rue de Paris",
        "25 avenue Victor Hugo",
        "5 rue des Lilas",
        "18 boulevard Voltaire",
        "42 rue de la Republique"
    };

    float notes_c[5] = {
        15.5,
        12.0,
        17.5,
        14.0,
        16.0
    };

    float notes_systeme[5] = {
        14.0,
        15.5,
        13.0,
        16.5,
        18.0
    };

    int i;

    for (i = 0; i < 5; i++)
    {
        printf("Etudiant %d\n", i + 1);
        printf("Nom : %s\n", noms[i]);
        printf("Prenom : %s\n", prenoms[i]);
        printf("Adresse : %s\n", adresses[i]);
        printf("Note Programmation C : %.2f\n", notes_c[i]);
        printf("Note Systeme d'exploitation : %.2f\n", notes_systeme[i]);
        printf("-----------------------------\n");
    }

    return 0;
}