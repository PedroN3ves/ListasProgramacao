#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int N;
    scanf("%d", &N);

    int extra;
    extra = N - 10;

    if (N <= 10)
    {
        printf("%d", 7);
    }
    else if (N >= 11 && N <= 30)
    {
        extra = 7 + (1 * (N - 10));
        printf("%d", extra);
    }
    else if (N >= 31 && N <= 100)
    {
        extra = 7 + 20 + (2 * (N - 30));
        printf("%d", extra);
    }
    else
    {
        extra = 7 + 20 + 140 + (5 * (N - 100));
        printf("%d", extra);
    }

    return 0;
}