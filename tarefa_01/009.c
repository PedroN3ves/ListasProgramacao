#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int id_funcionario, hrs_trabalhadas;
    double salario_hora;
    scanf("%d %d %lf", &id_funcionario, &hrs_trabalhadas, &salario_hora);

    double salario_total;
    salario_total = hrs_trabalhadas * salario_hora;
    printf("NUMBER = %d\nSALARY = R$ %.2lf\n", id_funcionario, salario_total);

    return 0;
}