#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int A, B, C, D;
    scanf("%d %d %d %d", &A, &B, &C, &D);

    int diferenca;
    diferenca = (A * B) - (C * D);
    printf("DIFERENCA = %d", diferenca);

    return 0;
}