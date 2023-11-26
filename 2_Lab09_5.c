#include <stdio.h>

int main(void) {
    int d[101][101] = { {0} };
    int sum = 0;
    int x1, y1, x2, y2;

    for (int i = 0; i < 4; i++) {
        scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
        for (int i = x1; i < x2; i++)
            for (int j = y1; j < y2; j++)
                d[i][j]++;
    }

    for (int i = 0; i <= 100; i++)
        for (int j = 0; j <= 100; j++)
            if (d[i][j])
                sum++;

    printf("%d\n", sum);

    return 0;
}
