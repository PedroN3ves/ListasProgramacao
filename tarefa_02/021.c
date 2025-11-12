#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    double sal;
    scanf("%lf", &sal);

    double valor_aumento, novo_salario;

    if (sal <= 280)
    {
        valor_aumento = sal * 0.2;
        novo_salario = sal + valor_aumento;
        printf("%.2lf\n20\n%.2lf\n%.2lf\n", sal, valor_aumento, novo_salario);
    }
    else if (sal > 280 && sal <= 700)
    {
        valor_aumento = sal * 0.15;
        novo_salario = sal + valor_aumento;
        printf("%.2lf\n15\n%.2lf\n%.2lf\n", sal, valor_aumento, novo_salario);
    }
    else if (sal > 700 && sal < 1500)
    {
        valor_aumento = sal * 0.1;
        novo_salario = sal + valor_aumento;
        printf("%.2lf\n10\n%.2lf\n%.2lf\n", sal, valor_aumento, novo_salario);
    }
    else
    {
        valor_aumento = sal * 0.05;
        novo_salario = sal + valor_aumento;
        printf("%.2lf\n5\n%.2lf\n%.2lf\n", sal, valor_aumento, novo_salario);
    }

    return 0;
}