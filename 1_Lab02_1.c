#include <stdio.h>

int main()
{
    long long A, B, C;
    scan_f("%lld %lld %lld", &A, &B, &C);

    printf("%lld", A + B + C);
}