#include <stdio.h>

typedef struct
{
    int operacao;
    double valor;
} saldo;

void ler_struct(saldo array[], int *tamanho)
{
    int operacao;
    double valor;
    *tamanho = 0;

    for (int i = 0; i < 100; i++)
    {
        scanf("%d", &operacao);
        if (operacao == -1)
        {
            break;
        }
        scanf("%lf", &valor);
        array[i].operacao = operacao;
        array[i].valor = valor;
        (*tamanho)++;
    }
}

void contabilizar(double debito_credito[], saldo array[], int tamanho)
{
    for (int i = 0; i < tamanho; i++)
    {
        if (array[i].operacao == 1)
        {
            debito_credito[1] += array[i].valor;
        }
        else
        {
            debito_credito[0] += array[i].valor;
        }
    }
}

void imprimir(double debito_credito[], double saldo)
{
    saldo = debito_credito[1] - debito_credito[0];
    printf("Creditos: R$ %.2lf\n", debito_credito[1]);
    printf("Debitos: R$ %.2lf\n", debito_credito[0]);
    printf("Saldo: R$ %.2lf", saldo);
}

int main()
{
    saldo array[100];
    int tamanho;
    double debito_credito[2] = {0, 0};

    ler_struct(array, &tamanho);
    contabilizar(debito_credito, array, tamanho);
    imprimir(debito_credito, 0);

    return 0;
}