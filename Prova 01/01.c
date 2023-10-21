#include <stdio.h>

int main()
{
    int numeros;

    do
    {
        printf("Informe um numero maior que zero: ");
        scanf("%d", &numeros);
    } while (numeros <= 0);

    int somaimpar = 0;
    int imparatual = 1;

    for (int i = 1; i <= numeros; i++)
    {
        printf("%d => ", i);

        int somaparcial = 0;

        for (int j = 0; j < i; j++)
        {
            printf("%d", imparatual);

            somaparcial += imparatual;

            if (j < i - 1)
            {
                printf(" + ");
            }

            imparatual += 2;
        }

        somaimpar += somaparcial;

        printf(" = %d\n", somaparcial);
    }

    printf("Soma de todos os impares: %d\n", somaimpar);

    return 0;
}
