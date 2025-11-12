#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int gen, idade;
    scanf("%d %d", &gen, &idade);

    if (gen == 0 && idade == 1)
    {
        printf("%d", 1);
    }
    else
    {
        printf("%d", 0);
    }

    return 0;
}