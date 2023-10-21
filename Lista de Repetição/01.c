#include <stdio.h>
#include <math.h>

/*
1) O número 3.025 possui a seguinte característica: 30 + 25 = 55 e 552 = 3 025. Faça um programa que escreva
todos os números com quatro algarismos que possuem a citada característica.
*/

int main()
{
    int soma, primeiro, segundo, i;

    for (i = 1000; i <= 9999; i++)
    {
        primeiro = i / 100;

        segundo = i % 100;

        soma = (primeiro + segundo) * (primeiro + segundo);

        if (soma == i)
        {
            printf("NUMERO: %d\n", i);
        }
    }

    return 0;
}