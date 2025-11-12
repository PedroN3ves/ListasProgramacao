#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void figurinhas(int contador, int joao, int maria, int joaoCount, int mariaCount, int figurinhasRepetidas[13001])
{
    if (contador == 0)
    {
        if (mariaCount > joaoCount)
        {
            printf("%d\n%d\n%d\n", joao, maria, mariaCount);
        }
        else
        {
            printf("%d\n%d\n%d\n", joao, maria, joaoCount);
        }
        return;
    }

    int nSerie;
    scanf("%d", &nSerie);

    if (nSerie % 2 == 0)
    {
        joao++;
        if (figurinhasRepetidas[nSerie] == 0)
        {
            joaoCount += nSerie;
        }
    }
    else
    {
        maria++;
        if (figurinhasRepetidas[nSerie] == 0)
        {
            mariaCount += nSerie;
        }
    }

    figurinhasRepetidas[nSerie] = 1;
    figurinhas(contador - 1, joao, maria, joaoCount, mariaCount, figurinhasRepetidas);
}

int main()
{
    int valor;
    scanf("%d", &valor);

    int figurinhasRepetidas[13001] = {0};
    figurinhas(valor, 0, 0, 0, 0, figurinhasRepetidas);

    return 0;
}
