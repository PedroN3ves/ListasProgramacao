#include <stdio.h>
#include <math.h>

int batalha(int v1, int v2, int d1, int d2)
{

    if (v1 <= 0)
    {
        return 1;
    }
    if (v2 <= 0)
    {
        return 0;
    }

    if (v1 > 0 && v2 > 0)
    {

        if ((ceil(1.0 * v1 / d2)) < (ceil(1.0 * v2 / d1)))
        {
            d1 += 50;
        }
        else
        {
            v2 -= d1;
        }
    }

    if (v2 > 0)
    {
        v1 -= d2;
    }

    return batalha(v1, v2, d1, d2);
}

void turnos(int n)
{

    if (n == 0)
    {
        return;
    }

    int V1, V2, D1, D2;

    scanf("%d %d %d %d", &V1, &V2, &D1, &D2);

    int vencedor = batalha(V1, V2, D1, D2);

    if (vencedor == 0)
    {
        printf("Clodes\n");
    }
    else if (vencedor == 1)
    {
        printf("Bezaliel\n");
    }

    turnos(n - 1);
}

int main()
{
    int n;
    scanf("%d", &n);

    turnos(n);

    return 0;
}