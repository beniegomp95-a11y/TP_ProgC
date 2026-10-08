#include <stdio.h>

int main(void)
{
    int compteur = 5;
    int i = 1;
    int j;

    if (compteur >= 10)
    {
        printf("La valeur de compteur doit etre strictement inferieure a 10.\n");
        return 1;
    }

    while (i <= compteur)
    {
        j = 1;

        while (j <= i)
        {
            if (i == compteur)
                printf("* ");
            else if (j == 1)
                printf("* ");
            else
                printf("# ");

            j++;
        }

        printf("\n");
        i++;
    }

    return 0;
}
