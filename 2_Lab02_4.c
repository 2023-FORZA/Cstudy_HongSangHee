#include <stdio.h>

int main()
{
    int t, n;
    long long tmp, sum;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        scanf("%d", &n);
        sum = 0;
        for (int j = 0; j < n; j++)
        {
            scanf("%lld", &tmp);
            sum = (sum + tmp) % n;
        }

        if (sum % n == 0) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}