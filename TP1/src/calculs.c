#include <stdio.h>

int main(void)
{
    int num1 = 16;
    int num2 = 3;
    char op = '+';
    int resultat;

    switch (op)
    {
        case '+':
            resultat = num1 + num2;
            printf("%d + %d = %d\n", num1, num2, resultat);
            break;

        case '-':
            resultat = num1 - num2;
            printf("%d - %d = %d\n", num1, num2, resultat);
            break;

        case '*':
            resultat = num1 * num2;
            printf("%d * %d = %d\n", num1, num2, resultat);
            break;

        case '/':
            if (num2 != 0)
            {
                resultat = num1 / num2;
                printf("%d / %d = %d\n", num1, num2, resultat);
            }
            else
            {
                printf("Erreur : division par zero.\n");
            }
            break;

        case '%':
            if (num2 != 0)
            {
                resultat = num1 % num2;
                printf("%d %% %d = %d\n", num1, num2, resultat);
            }
            else
            {
                printf("Erreur : modulo par zero.\n");
            }
            break;

        case '&':
            resultat = num1 & num2;
            printf("%d & %d = %d\n", num1, num2, resultat);
            break;

        case '|':
            resultat = num1 | num2;
            printf("%d | %d = %d\n", num1, num2, resultat);
            break;

        case '~':
            printf("~%d = %d\n", num1, ~num1);
            printf("Remarque : l'operateur ~ est unaire et ne necessite qu'un seul nombre.\n");
            break;

        default:
            printf("Operateur invalide.\n");
            break;
    }

    return 0;
}

