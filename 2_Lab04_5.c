#include <stdio.h>
int machine(int A, int B)
{
    if (B == 0)
        return A;
    machine(B, A % B);
}
int main()
{
    int A, B;
    scanf("%d %d", &A, &B);
    int num = machine(A, B);
    printf("%d\n%d", num, A * B / num);
}