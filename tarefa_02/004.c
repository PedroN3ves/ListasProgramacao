#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int level, potencia;
    scanf("%d", &level);

    if (level >= 1 && level <= 20)
    {
        potencia = 20 + pow(level, 3);
        printf("Potencia de : %d W", potencia);
    }
    else if (level >= 21 && level <= 40)
    {
        potencia = 8000 + pow(level - 10, 2);
        printf("Potencia de : %d W", potencia);
    }
    else if (level >= 41 && level <= 60)
    {
        potencia = 9000 + (level * 5);
        printf("Potencia de : %d W", potencia);
    }
    else if (level >= 61 && level <= 80)
    {
        potencia = 9300 + (level * 2);
        printf("Potencia de : %d W", potencia);
    }
    else if (level >= 81 && level <= 100)
    {
        potencia = 9500 + level;
        printf("Potencia de : %d W", potencia);
    }

    return 0;
}