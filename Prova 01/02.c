
#include <stdio.h>

int main() 
{
    char caractere;
    int somaPrimos = 0;
    int somaDigitos = 0;
    int totalCaracteres = 0;
    int totalNumeros = 0;

    while (1) 
    {
        printf("Informe um caractere: ");
        scanf(" %c", &caractere);

        if (caractere == '0') 
        {
            break;
        }

        totalCaracteres++;

        if (caractere >= '0' && caractere <= '9') 
        {
            totalNumeros++;
            somaDigitos += caractere - '0';
        } else if ((caractere >= 'a' && caractere <= 'z') || (caractere >= 'A' && caractere <= 'Z')) 
        
        {
            int ascii = (int)caractere;
            int ehprimo = 1;

            if (ascii <= 1) 
            {
                ehprimo = 0;
            } else 
            {
                for (int i = 2; i * i <= ascii; i++) 
                {
                    if (ascii % i == 0) 
                    {
                        ehprimo = 0;
                        break;
                    }
                }
            }

            if (ehprimo) 
            {
                printf("%d eh primo\n", ascii);
                somaPrimos += ascii;
            } else 
            {
                printf("%d nao eh primo\n", ascii);
            }
        }
    }

    
    double percentualNumeros = (double)totalNumeros / totalCaracteres * 100.0;

    
    int somaDigitosPrimos = 0;
    int tempSomaPrimos = somaPrimos;
    while (tempSomaPrimos > 0) 
    {
        somaDigitosPrimos += tempSomaPrimos % 10;
        tempSomaPrimos /= 10;
    }

    printf("Soma dos primos: %d\n", somaPrimos);
    printf("Soma dos digitos de %d: %d\n", somaPrimos, somaDigitosPrimos);
    printf("Percentual dos caracteres numeros: %.2lf%%\n", percentualNumeros);

    return 0;
}