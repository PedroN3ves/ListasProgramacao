#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int avaliarRespostas(char chave[], char resposta[], int questaoAtual)
{
    if (questaoAtual >= 10)
    {
        return 0;
    }

    int resultado = (chave[questaoAtual] == resposta[questaoAtual]) ? 1 : 0;
    return resultado + avaliarRespostas(chave, resposta, questaoAtual + 1);
}

int obterNotaMaisFrequente(int contagem[], int indice, int maiorFrequencia, int nota)
{
    if (indice >= 11)
    {
        return nota;
    }

    if (contagem[indice] > maiorFrequencia)
    {
        return obterNotaMaisFrequente(contagem, indice + 1, contagem[indice], indice);
    }

    return obterNotaMaisFrequente(contagem, indice + 1, maiorFrequencia, nota);
}

float calcularTaxaAprovacao(int totalAprovados, int totalAlunos)
{
    return (totalAlunos > 0) ? ((totalAprovados * 100.0) / totalAlunos) : 0.0;
}

void processarAlunos(char chave[], int totalAlunos, int totalAprovados, int notas[], int contagemNotas[])
{
    int idAluno;
    char respostas[11];

    scanf("%d", &idAluno);

    if (idAluno == 9999)
    {
        float taxaAprovacao = calcularTaxaAprovacao(totalAprovados, totalAlunos);
        printf("%.1lf%%\n", taxaAprovacao);

        int notaFrequente = obterNotaMaisFrequente(contagemNotas, 0, 0, 0);
        printf("%.1lf\n", (float)notaFrequente);
        return;
    }

    scanf("%s", respostas);

    int notaAtual = avaliarRespostas(chave, respostas, 0);
    notas[totalAlunos] = notaAtual;
    contagemNotas[notaAtual]++;

    totalAprovados += (notaAtual >= 6) ? 1 : 0;

    printf("%d %.1lf\n", idAluno, (float)notaAtual);

    processarAlunos(chave, totalAlunos + 1, totalAprovados, notas, contagemNotas);
}

int main()
{
    char chave[10];
    scanf("%s", chave);

    int notas[1000] = {0};
    int contagemNotas[11] = {0};

    processarAlunos(chave, 0, 0, notas, contagemNotas);

    return 0;
}
