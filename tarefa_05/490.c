#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void calc_enfeite(double a[], int i, int tamanho)
{
    double temp;
    int n;
    if (i < tamanho)
    {
        scanf("%d", &n);
        scanf("%lf", &temp);
        a[i] = n * temp;
        return calc_enfeite(a, i + 1, tamanho);
    }
}

double somatorio(double valor_total, double valor_enfeite[], int i, int tamanho)
{
    if (i < tamanho)
    {
        valor_total += valor_enfeite[i];
        return somatorio(valor_total, valor_enfeite, i + 1, tamanho);
    }
    return valor_total;
}

int main()
{
    int valor_arvore;
    double valor_enfeites[3], total, por_pessoa;

    scanf("%d", &valor_arvore);

    calc_enfeite(valor_enfeites, 0, 3);

    total = somatorio(valor_arvore, valor_enfeites, 0, 3);
    printf("%.2lf\n", total);

    por_pessoa = total / 21;
    printf("%.2lf", por_pessoa);

    return 0;
}

/*
void print_array(int i, int n, double array[])
{
    if (i < n)
    {
        printf("%.2lf ", array[i]);

        print_array(i + 1, n, array);
    }
}
*/