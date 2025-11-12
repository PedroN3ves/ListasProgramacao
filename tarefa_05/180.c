#include <stdio.h>
#include <stdlib.h>

#define LIMITE 1000

char avaliar_ocupacao(int indice, int ocupacao, int num_leituras, int max_ocupacao, int saidas[], int entradas[])
{
    if (indice == num_leituras)
    {
        return 'N';
    }

    ocupacao -= saidas[indice];
    ocupacao += entradas[indice];

    if (ocupacao > max_ocupacao)
    {
        return 'S';
    }

    return avaliar_ocupacao(indice + 1, ocupacao, num_leituras, max_ocupacao, saidas, entradas);
}

void capturar_leituras(int indice, int num_leituras, int saidas[], int entradas[])
{
    if (indice == num_leituras)
    {
        return;
    }

    scanf("%d %d", &saidas[indice], &entradas[indice]);
    capturar_leituras(indice + 1, num_leituras, saidas, entradas);
}

int main()
{
    int num_leituras, max_ocupacao;
    int saidas[LIMITE], entradas[LIMITE];

    scanf("%d %d", &num_leituras, &max_ocupacao);

    capturar_leituras(0, num_leituras, saidas, entradas);

    char resultado = avaliar_ocupacao(0, 0, num_leituras, max_ocupacao, saidas, entradas);

    printf("%c\n", resultado);

    return 0;
}
