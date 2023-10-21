#include <stdio.h>
#include <math.h>

int main()
{
    int n1, i, j;

    do
    {
        printf("Informe um numero positivo: ");
        scanf("%d", &n1);
    } while (n1 <= 0);

    for (i = 1; i <= 11; i++)
    {
        printf("%d ==> ", n1);
        for (j = 2; j <= n1; j++)
        {
            printf("%d  ", j);
        }
        printf("\n");
        n1++;
    }

    return 0;
}