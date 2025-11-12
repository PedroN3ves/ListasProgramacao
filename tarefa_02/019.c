#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int estudante, idoso;
    scanf("%d%d", &estudante, &idoso);

    if (estudante == 1 || idoso == 1)
    {
        printf("%d", 1);
    }
    else
    {
        printf("%d", 0);
    }

    return 0;
}