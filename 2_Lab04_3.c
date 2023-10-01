#include <stdio.h>

int a = 0, b = 1, c = 1;

int F(int n)
{
    if (n > 1)
    {
        c = a + b;
        a = b;
        b = c;
        return F(n - 1);
    }
    else if (n == 0)
        return 0;
    else
        return c;
}

int main(void)
{
    int n;

    scanf("%d", &n);
    printf("%d \n", F(n));
    return 0;
}