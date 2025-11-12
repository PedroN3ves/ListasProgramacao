#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int x, y;
    scanf("%d %d", &x, &y);

    if (x > y)
    {
        printf("%d\n", 1);
        printf("%d\n", 0);
        printf("%d\n", 0);
        printf("%d\n", 1);
        printf("%d\n", 1);
        printf("%d\n", 0);
    }
    else if (x == y)
    {
        printf("%d\n", 0);
        printf("%d\n", 1);
        printf("%d\n", 0);
        printf("%d\n", 0);
        printf("%d\n", 1);
        printf("%d\n", 1);
    }
    else
    {
        printf("%d\n", 0);
        printf("%d\n", 0);
        printf("%d\n", 1);
        printf("%d\n", 1);
        printf("%d\n", 0);
        printf("%d\n", 1);
    }

    return 0;
}