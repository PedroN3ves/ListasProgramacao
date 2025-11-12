#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int sequencia(int n)
{
    if (n != 1)
    {
        if (n % 2 == 0)
        {
            return 1 + sequencia(n / 2);
        }
        return 1 + sequencia((n * 3) + 1);
    }
    return 1;
}

int valor_max(int i, int j, int maior_ciclo)
{
    if (i > j)
    {
        return maior_ciclo;
    }
    if (sequencia(i) > maior_ciclo)
    {
        maior_ciclo = sequencia(i);
    }
    return valor_max(i + 1, j, maior_ciclo);
}

void sequencia_entrada()
{
    int i, j;
    if (scanf("%d %d", &i, &j) != EOF)
    {
        int i_original = i;
        int j_original = j;

        if (i > j)
        {
            int aux = i;
            i = j;
            j = aux;
        }

        printf("%d %d %d\n", i_original, j_original, valor_max(i, j, 0));
        return sequencia_entrada();
    }
}

int main()
{
    sequencia_entrada();

    return 0;
}