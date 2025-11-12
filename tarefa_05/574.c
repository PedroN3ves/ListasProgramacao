#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

double dolar_real(double dolar, double valor_dolar)
{
    return valor_dolar * dolar;
}

void printar_variaveis(double dolar, double valor_produto, double valor_frete, double valor_total, double valor_importacao, double icms, double total_impostos, double total_pagar)
{
    printf("%.2lf\n", dolar);
    printf("%.2lf\n", valor_produto);
    printf("%.2lf\n", valor_frete);
    printf("%.2lf\n", valor_total);
    printf("%.2lf\n", valor_importacao);
    printf("%.2lf\n", icms);
    printf("%.2lf\n", total_impostos);
    printf("%.2lf\n", total_pagar);
}

int main()
{
    double dolar, aliquota, valor_produto_dolar, valor_frete_dolar;
    scanf("%lf %lf %lf %lf", &dolar, &aliquota, &valor_produto_dolar, &valor_frete_dolar);
    aliquota /= 100;

    double valor_produto = dolar_real(dolar, valor_produto_dolar);
    double valor_frete = dolar_real(dolar, valor_frete_dolar);

    double valor_total, valor_importacao, valor_final_produto, icms, total_impostos, total_pagar;

    if (valor_produto_dolar >= 2500)
    {
        valor_total = valor_produto + valor_frete;
    }
    else
    {
        valor_total = valor_produto + valor_frete;
    }

    valor_importacao = valor_total * 0.60;
    valor_final_produto = (valor_total + valor_importacao) / (1 - aliquota);
    icms = valor_final_produto * aliquota;
    total_impostos = valor_importacao + icms;
    total_pagar = valor_produto + valor_importacao + icms;

    printar_variaveis(dolar, valor_produto, valor_frete, valor_total, valor_importacao, icms, total_impostos, total_pagar);

    if (valor_produto_dolar >= 2500)
    {
        printf("Impostos calculados sem o frete\n");
    }
    else
    {
        printf("Impostos calculados com o frete\n");
    }

    return 0;
}
