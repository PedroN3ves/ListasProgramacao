#include <stdio.h>
#include <string.h>

void adicionar_nulo(int tamanho, char fruta[tamanho])
{
    fruta[tamanho + 1];
    fruta[tamanho] = ' ';
}

double media_kg_dia(int n, int contador_fruta[n])
{
    int total = 0;
    for (int i = 0; i < n; i++)
    {
        total += contador_fruta[i];
    }
    double media = (double)total / n;
    return media;
}

double media_dinheiro(int n, double contador_v[n])
{
    double total = 0;
    for (int i = 0; i < n; i++)
    {
        total += contador_v[i];
    }
    double media = total / n;
    return media;
}

void imprimir_por_dia(int n, int contador_fruta[n])
{
    for (int i = 0; i < n; i++)
    {
        printf("dia %d: %d kg\n", i + 1, contador_fruta[i]);
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    char fruta[100];
    int tamanho;
    int contador_fruta[n];
    double contador_v[n];

    for (int i = 0; i < n; i++)
    {
        contador_fruta[i] = 0;
        contador_v[i] = 0;

        double v;
        scanf("%lf", &v);
        contador_v[i] = v;

        getchar();
        fgets(fruta, sizeof(fruta), stdin);

        tamanho = strlen(fruta);
        if (fruta[tamanho - 1] == '\n')
        {
            fruta[tamanho - 1] = '\0';
            tamanho--;
        }

        for (int j = 0; j < tamanho; j++)
        {
            if (fruta[j] == ' ')
            {
                contador_fruta[i] += 1;
            }
        }
        contador_fruta[i] += 1;
    }

    imprimir_por_dia(n, contador_fruta);

    double media_kg = media_kg_dia(n, contador_fruta);
    printf("%.2lf kg por dia\n", media_kg);

    double media_din = media_dinheiro(n, contador_v);
    printf("R$ %.2lf por dia\n", media_din);

    return 0;
}
