#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int a, b, c, Vdelta, x1, x2, x, test1, test2, option;

void reset()
{
    system("CLS");
    printf("\n\n");
    printf("1. VOLTAR AOS COEFICIENTES\n2. SAIR\n");
    printf("\n\n");
    scanf("%d", &option);
    switch (option)
    {
    case 1:
        system("CLS");
        main();
    case 2:
        exit(0);
    }
}

int main()
{

    printf("DIGITE OS VALORES A BAIXO: \n");
    printf("A: ");
    scanf("%d", &a);
    printf("B: ");
    scanf("%d", &b);
    printf("C: ");
    scanf("%d", &c);

    Vdelta = (b * b) - 4 * a * c;
    if (Vdelta < 0)
    {
        printf("a equacao nao possui raiz real.\n\n");
        system("PAUSE");
        reset();
    }
    else
        printf("o valor de delta e: %d\n\n", Vdelta);

    x1 = ((-b) + sqrt(Vdelta)) / (2 * a);
    x2 = ((-b) - sqrt(Vdelta)) / (2 * a);
    if (Vdelta > 0)
    {
        printf("os valores de x sao x1=%d, x2=%d\n\n", x1, x2);
    }
    else if (x1 == x2)
        printf("o valor de x e %d\n\n", x1);
    else
        printf("os valores de x sao x1=%d, x2=%d\n\n", x1, x2);

     system("PAUSE");
     reset();
}