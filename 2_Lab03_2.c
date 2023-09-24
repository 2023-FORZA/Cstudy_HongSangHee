#include <stdio.h>

int main() {
    int a, b, c, d;
    double one, two, three, four;

    scanf_s("%d %d %d %d", &a, &b, &c, &d);

    one = a / c + b / d;
    two = c / d + a / b;
    three = d / b + c / a;
    four = b / a + d / c;

    int num[] = { one, two, three, four };

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            if (num[i] < num[j]) {
                int temp = num[i];
                num[i] = num[j];
                num[j] = temp;
            }
        }
    }

    printf("%d", num[3]);

    return 0;
}
