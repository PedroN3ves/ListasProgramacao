#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int mdc(int a, int d)
{
    int q, r, res;
    q = a / d;
    r = a % d;

    if (r == 0)
    {
        res = d;
    }
    else
    {
        a = d;
        d = r;
        res = mdc(a, d);
    }

    return res;
}

void casos(int n_casos)
{
    int n1, n2, res;

    if (n_casos > 0)
    {
        n_casos = n_casos - 1;

        scanf("%d%d", &n1, &n2);
        res = mdc(n1, n2);
        printf("MDC(%d,%d) = %d\n", n1, n2, res);

        return casos(n_casos);
    }
}

int main()
{
    int n_casos;
    scanf("%d", &n_casos);

    casos(n_casos);

    return 0;
}