#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int n_questoes, n_resolvidas;
    scanf("%d %d", &n_questoes, &n_resolvidas);

    double cumpridas;
    cumpridas = ((double)n_resolvidas / (double)n_questoes) * 100;

    if (cumpridas >= 0 && cumpridas < 20)
    {
        printf("%.2lf%% 4.40%% Pessimo", cumpridas);
    }
    else if (cumpridas >= 20 && cumpridas < 40)
    {
        printf("%.2lf%% 31.65%% Ruim", cumpridas);
    }
    else if (cumpridas >= 40 && cumpridas < 60)
    {
        printf("%.2lf%% 56.82%% Bom", cumpridas);
    }
    else if (cumpridas >= 60 && cumpridas < 80)
    {
        printf("%.2lf%% 80.00%% Muito Bom", cumpridas);
    }
    else
    {
        printf("%.2lf%% 94.00%% Excelente", cumpridas);
    }

    return 0;
}