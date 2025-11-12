#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int contarAcertos(int aposta[], int tamanho, int resultado[], int tamResultado)
{
    int acertos = 0;
    for (int i = 0; i < tamanho; i++)
    {
        for (int j = 0; j < tamResultado; j++)
        {
            if (aposta[i] == resultado[j])
            {
                acertos++;
                break;
            }
        }
    }
    return acertos;
}

int calcularVencedores(int jogos[][10], int tamanhos[], int totalJogos, int resultado[], int tamResultado)
{
    int vencedores = 0;
    for (int i = 0; i < totalJogos; i++)
    {
        if (contarAcertos(jogos[i], tamanhos[i], resultado, tamResultado) == tamResultado)
        {
            vencedores++;
        }
    }
    return vencedores;
}

void processarApostas(int jogos[][10], int tamanhos[], int totalJogos)
{
    char linha[256];
    for (int i = 0; i < totalJogos; i++)
    {
        fgets(linha, sizeof(linha), stdin);
        char *token = strtok(linha, ",");
        int indice = 0;
        while (token != NULL)
        {
            jogos[i][indice++] = atoi(token);
            token = strtok(NULL, ",");
        }
        tamanhos[i] = indice;
    }
}

void lerResultado(int resultado[], int tamanho)
{
    for (int i = 0; i < tamanho; i++)
    {
        scanf("%d", &resultado[i]);
    }
}

int main()
{
    int totalJogos;
    int apostas[100][10];
    int tamanhosApostas[100];
    int numerosSorteados[6];

    scanf("%d\n", &totalJogos);

    processarApostas(apostas, tamanhosApostas, totalJogos);

    lerResultado(numerosSorteados, 6);

    int vencedores = calcularVencedores(apostas, tamanhosApostas, totalJogos, numerosSorteados, 6);
    printf("Total de ganhadores: %d\n", vencedores);

    return 0;
}
