#include <stdio.h>
#include <math.h>
#include <string.h>

void preencher_numeros(char *n, char *m)
{
    int tamanho_n = strlen(n), tamanho_m = strlen(m);
    int navegador = 0;

    while (tamanho_m < tamanho_n)
    {
        memmove(m + 1, m, tamanho_m + 1);
        m[0] = '0';
        tamanho_m += 1;
    }
    while (tamanho_n < tamanho_m)
    {
        memmove(n + 1, n, tamanho_n + 1);
        n[0] = '0';
        tamanho_n += 1;
    }

    for (int i = tamanho_n - 1; i >= 0; i--)
    {
        int digito = (n[i] - '0') + (m[i] - '0') + navegador;
        n[i] = (digito % 10) + '0';
        navegador = digito / 10;
    }

    if (navegador)
    {
        memmove(n + 1, n, tamanho_n + 1);
        n[0] = navegador + '0';
    }
}

int main()
{
    char n[100000], m[100000];

    gets(n);
    gets(m);

    preencher_numeros(n, m);
    printf("%s", n);

    return 0;
}