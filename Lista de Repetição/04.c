#include <stdio.h>

int main()
{
    int qtde = 1, somaM = 0, somaF = 0, somaI = 0, total;
    float percmasc, percfem, percinf;
    char cat;

    while (qtde > 0)
    {
        printf("Informe a quantidade: ");
        scanf("%d", &qtde);
        if (qtde > 0)
        {
            do
            {
                printf("Informe categoria: ");
                fflush(stdin);
                scanf("%c", &cat);

                if (cat != 'M' && cat != 'm' && cat != 'I' && cat != 'i' && cat != 'F' && cat != 'f')
                {
                    printf("Categoria invalida! digite novamente\n");
                }
            } while (cat != 'M' && cat != 'm' && cat != 'F' && cat != 'f' && cat != 'I' && cat != 'i');

            if (cat == 'M' || cat == 'm')
            {
                somaM = somaM + qtde;
            }
            else if (cat == 'F' || cat == 'f')
            {
                somaF = somaF + qtde;
            }
            else
            {
                somaI = somaI + qtde;
            }
        }
    }

    total = somaM + somaF + somaI;

    printf("Quantidade total de produtos : %d\n", total);
    printf("Quantidade de produtos masculinos: %d\n", somaM);
    printf("Quantidade de produtos femininos: %d\n", somaF);
    printf("Quantidade de produtos infantis: %d\n", somaI);

    percmasc = (float)somaM * 100 / total;

    percfem = (float)somaF * 100 / total;

    percinf = (float)somaI * 100 / total;

    printf("Percentual de produtos masculinos: %.2f%%\n", percmasc);
    printf("Percentual de produtos femininos: %.2f%%\n", percfem);
    printf("Percentual de produtos infantis: %.2f%%\n", percinf);
}