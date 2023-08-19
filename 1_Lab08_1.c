#include <stdio.h>

int main() {
    int inputNumber;
    int cnt = 0;
    scanf("%d", &inputNumber);
    int height[inputNumber], weight[inputNumber];

    for (int i = 0; i < inputNumber; i++) {
        scanf("%d %d", &height[i], &weight[i]);
    }

    for (int i = 0; i < inputNumber; i++) {
        cnt = 0;
        for (int j = 0; j < inputNumber; j++) {
            if (height[i] < height[j] && weight[i] < weight[j]) {
                cnt++;
            }
        }
        printf("%d ", cnt + 1);
    }
    return 0;
}