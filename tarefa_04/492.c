#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int capsulas(int qtd_capsulas, int qtd_caixas, char tamanho, int repeticao)
{

    scanf("%d", &qtd_caixas);
    scanf(" %c", &tamanho);

    if (repeticao > 0)
    {
        if (tamanho == 'P' || tamanho == 'p')
        {
            qtd_capsulas += (10 * qtd_caixas);
            return capsulas(qtd_capsulas, qtd_caixas, tamanho, repeticao - 1);
        }
        else if (tamanho == 'G' || tamanho == 'g')
        {
            qtd_capsulas += (16 * qtd_caixas);
            return capsulas(qtd_capsulas, qtd_caixas, tamanho, repeticao - 1);
        }
    }
    else
    {
        printf("%d\n", qtd_capsulas);
        printf("%d\n", (qtd_capsulas * 2) / 7);
        return qtd_capsulas;
    }
}

int main()
{
    capsulas(0, 0, 0, 7);

    return 0;
}
