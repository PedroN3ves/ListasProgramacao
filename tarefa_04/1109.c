#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void sequencia(int dia, int metas_programas, int metas_linhas, int max_linhas, int dia_max_linhas)
{
    if (dia == 7)
    {
        printf("QUANTIDADE DE DIAS QUE ATINGIU MEDIA DE PROGRAMAS: %d\n", metas_programas);
        printf("QUANTIDADE DE DIAS QUE ATINGIU MEDIA DE LINHAS: %d\n", metas_linhas);

        if (dia_max_linhas == 0)
        {
            printf("DIA QUE MAIS PRODUZIU: DOMINGO\n");
        }
        else if (dia_max_linhas == 1)
        {
            printf("DIA QUE MAIS PRODUZIU: SEGUNDA\n");
        }
        else if (dia_max_linhas == 2)
        {
            printf("DIA QUE MAIS PRODUZIU: TERCA\n");
        }
        else if (dia_max_linhas == 3)
        {
            printf("DIA QUE MAIS PRODUZIU: QUARTA\n");
        }
        else if (dia_max_linhas == 4)
        {
            printf("DIA QUE MAIS PRODUZIU: QUINTA\n");
        }
        else if (dia_max_linhas == 5)
        {
            printf("DIA QUE MAIS PRODUZIU: SEXTA\n");
        }
        else if (dia_max_linhas == 6)
        {
            printf("DIA QUE MAIS PRODUZIU: SABADO\n");
        }

        return;
    }

    int n_programas, n_linhas;
    scanf("%d %d", &n_programas, &n_linhas);

    if (n_programas >= 5)
    {
        metas_programas++;
    }
    if (n_linhas >= 100)
    {
        metas_linhas++;
    }

    if (n_linhas >= max_linhas)
    {
        max_linhas = n_linhas;
        dia_max_linhas = dia;
    }

    sequencia(dia + 1, metas_programas, metas_linhas, max_linhas, dia_max_linhas);
}

int main()
{
    sequencia(0, 0, 0, 0, 0);
    return 0;
}
