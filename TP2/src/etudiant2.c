#include <stdio.h>
#include <string.h>

struct Etudiant
{
    char nom[30];
    char prenom[30];
    char adresse[100];
    float note_c;
    float note_systeme;
};

int main(void)
{
    struct Etudiant etudiants[5];

    /* Etudiant 1 */
    strcpy(etudiants[0].nom, "Dupont");
    strcpy(etudiants[0].prenom, "Marie");
    strcpy(etudiants[0].adresse, "20, Boulevard Niels Bohr, Lyon");
    etudiants[0].note_c = 16.5;
    etudiants[0].note_systeme = 12.1;

    /* Etudiant 2 */
    strcpy(etudiants[1].nom, "Martin");
    strcpy(etudiants[1].prenom, "Pierre");
    strcpy(etudiants[1].adresse, "22, Boulevard Niels Bohr, Lyon");
    etudiants[1].note_c = 14.0;
    etudiants[1].note_systeme = 14.1;

    /* Etudiant 3 */
    strcpy(etudiants[2].nom, "Durand");
    strcpy(etudiants[2].prenom, "Sophie");
    strcpy(etudiants[2].adresse, "15, Rue de la Republique, Lyon");
    etudiants[2].note_c = 15.5;
    etudiants[2].note_systeme = 16.0;

    /* Etudiant 4 */
    strcpy(etudiants[3].nom, "Bernard");
    strcpy(etudiants[3].prenom, "Lucas");
    strcpy(etudiants[3].adresse, "8, Rue Victor Hugo, Lyon");
    etudiants[3].note_c = 13.5;
    etudiants[3].note_systeme = 15.0;

    /* Etudiant 5 */
    strcpy(etudiants[4].nom, "Petit");
    strcpy(etudiants[4].prenom, "Emma");
    strcpy(etudiants[4].adresse, "42, Avenue Jean Jaures, Lyon");
    etudiants[4].note_c = 17.0;
    etudiants[4].note_systeme = 18.0;

    /* Affichage des étudiants */
    for (int i = 0; i < 5; i++)
    {
        printf("Etudiant.e %d :\n", i + 1);
        printf("Nom : %s\n", etudiants[i].nom);
        printf("Prenom : %s\n", etudiants[i].prenom);
        printf("Adresse : %s\n", etudiants[i].adresse);
        printf("Note 1 (Programmation C) : %.1f\n", etudiants[i].note_c);
        printf("Note 2 (Systeme d'exploitation) : %.1f\n",
               etudiants[i].note_systeme);
        printf("\n");
    }

    return 0;
}
