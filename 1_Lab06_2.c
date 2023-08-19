#include <stdio.h>

int main()
{
    int n, s;
    long long min, max;
    scanf("%d%d", &n, &s);
    min = max = s;
    while (--n)
    {
        scanf("%d", &s);
        if (s < min) min = s;
        if (s > max) max = s;
    }
    printf("%lld\n", min * max);
}