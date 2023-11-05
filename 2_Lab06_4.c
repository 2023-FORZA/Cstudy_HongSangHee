#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    if (n < 3) {
        printf("4");
    }

    for (int i = 2; i < n; i++) {
        if (n <= i * i) {
            printf("%d", (i - 1) * 4);
            break;
        }
        else if (n <= i * (i + 1)) {
            printf("%d", (i - 1) * 4 + 2); //(i-1)*2 + i*2
            break;
        }
    }

    return 0;
}
