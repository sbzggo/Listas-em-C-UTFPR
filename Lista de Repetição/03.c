#include <stdio.h>
#include <math.h>

int main()
{
    int n1, i, j, contdiv, k;

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
            contdiv=0;

            for(k = 2 ; k<=j/2 ; k++)
            {
                if(j % k == 0)
                {
                    contdiv++;
                    break;
                }
            }
            if(contdiv==0)
            {
                printf("%d  ", j);
            }

        }
        printf("\n");
        n1++;
    }

    return 0;
}
