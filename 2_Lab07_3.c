#include <stdio.h>

int main() {
    int totalPrice;
    int sum = 0;
    int num;

    scanf("%d", &totalPrice);

    for (int i = 0; i < 9; ++i) {
        scanf("%d", &num);
        sum += num;
    }

    printf("%d\n", totalPrice - sum);

    return 0;
}
