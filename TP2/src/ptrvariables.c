#include <stdio.h>
#include <string.h>

int main(void)
{
    char c = 'A';
    short s = 10;
    int i = 100;
    long int l = 1000;
    long long int ll = 10000;
    float f = 1.0f;
    double d = 2.0;
    long double ld = 3.0L;

    char *pc = &c;
    short *ps = &s;
    int *pi = &i;
    long int *pl = &l;
    long long int *pll = &ll;
    float *pf = &f;
    double *pd = &d;
    long double *pld = &ld;

    printf("AVANT LA MANIPULATION\n\n");

    printf("Adresse de c : %p, Valeur de c : %x\n",
           (void *)pc, (unsigned int)c);

    printf("Adresse de s : %p, Valeur de s : %hx\n",
           (void *)ps, (unsigned short)s);

    printf("Adresse de i : %p, Valeur de i : %x\n",
           (void *)pi, (unsigned int)i);

    printf("Adresse de l : %p, Valeur de l : %lx\n",
           (void *)pl, (unsigned long)l);

    printf("Adresse de ll : %p, Valeur de ll : %llx\n",
           (void *)pll, (unsigned long long)ll);

    printf("Adresse de f : %p, Valeur de f : %08x\n",
           (void *)pf, *(unsigned int *)pf);

    printf("Adresse de d : %p, Valeur de d : %016llx\n",
           (void *)pd, *(unsigned long long *)pd);

    printf("Adresse de ld : %p\n", (void *)pld);

    /*
     * Manipulation des variables avec les pointeurs
     */
    *pc = 'B';
    *ps = 20;
    *pi = 200;
    *pl = 2000;
    *pll = 20000;
    *pf = 1.0f;
    *pd = 4.0;
    *pld = 5.0L;

    printf("\nAPRES LA MANIPULATION\n\n");

    printf("Adresse de c : %p, Valeur de c : %x\n",
           (void *)pc, (unsigned int)c);

    printf("Adresse de s : %p, Valeur de s : %hx\n",
           (void *)ps, (unsigned short)s);

    printf("Adresse de i : %p, Valeur de i : %x\n",
           (void *)pi, (unsigned int)i);

    printf("Adresse de l : %p, Valeur de l : %lx\n",
           (void *)pl, (unsigned long)l);

    printf("Adresse de ll : %p, Valeur de ll : %llx\n",
           (void *)pll, (unsigned long long)ll);

    printf("Adresse de f : %p, Valeur de f : %08x\n",
           (void *)pf, *(unsigned int *)pf);

    printf("Adresse de d : %p, Valeur de d : %016llx\n",
           (void *)pd, *(unsigned long long *)pd);

    printf("Adresse de ld : %p\n", (void *)pld);

    return 0;
}
