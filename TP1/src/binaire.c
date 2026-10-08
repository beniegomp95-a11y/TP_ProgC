#include <stdio.h>

int main(void)
{
    int nombres[] = {0, 4096, 65536, 65535, 1024};
    int i, j;
    int nombre;
    int bits[32];

    for (i = 0; i < 5; i++)
    {
        nombre = nombres[i];

        printf("%d en binaire = ", nombre);

        if (nombre == 0)
        {
            printf("0");
        }
        else
        {
            j = 0;

            /* On récupère les bits de droite à gauche */
            while (nombre > 0)
            {
                bits[j] = nombre % 2;
                nombre = nombre / 2;
                j++;
            }

            /* On les affiche dans l'ordre inverse */
            for (j = j - 1; j >= 0; j--)
            {
                printf("%d", bits[j]);
            }
        }

        printf("\n");
    }

    return 0;
}