#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int serie(int n, int t, int x)
{
    int n2, r;

    if (x == t)
    {
        r = n;
    }
    else
    {
        if (x % 2 == 0)
        {
            n = n + 3;
            x = x + 1;
            r = serie(n, t, x);
        }
        else
        {
            n = n + (n % 5);
            x = x + 1;
            r = serie(n, t, x);
        }
    }

    return r;
}

int main()
{
    int n, t, r;
    scanf("%d%d", &n, &t);

    r = serie(n, t, 0);
    printf("%d", r);

    return 0;
}