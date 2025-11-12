#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int n1, n2, n3;
    scanf("%d%d%d", &n1, &n2, &n3);

    if (n1 == n2 && n2 == n3)
    {
        printf("%d", 1);
    }
    else if (n1 != n2 && n1 != n3 && n2 != n3)
    {
        printf("%d", 2);
    }
    else
    {
        printf("%d", 3);
    }

    return 0;
}