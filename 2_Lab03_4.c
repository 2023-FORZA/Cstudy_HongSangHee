#include <stdio.h>

int gcd(int a, int b) {
    int r;
    while (b != 0) {
        r = a % b;
        a = b;
        b = r;
    }
    return a;
}

int main() {
    int n;
    scanf("%d", &n);

    int a, b;

    for (int i = 0; i < n; i++) {
        scanf("%d %d", &a, &b);

        printf("%d ", (a * b) / gcd(a, b));
        printf("%d\n", gcd(a, b));
    }

    return 0;
}
