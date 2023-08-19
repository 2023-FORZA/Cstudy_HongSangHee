#include <stdio.h>

int main() {
    int a1, a2, b1, b2, c1, c2;
    scanf("%d %d", &a1, &a2);
    scanf("%d %d", &b1, &b2);
    scanf("%d %d", &c1, &c2);

    int l1 = (a1 - b1) * (a1 - b1) + (a2 - b2) * (a2 - b2);
    int l2 = (c1 - b1) * (c1 - b1) + (c2 - b2) * (c2 - b2);
    int l3 = (a1 - c1) * (a1 - c1) + (a2 - c2) * (a2 - c2);

    int l123[3] = { l1, l2, l3 };
    for (int i = 0; i < 2; i++) {
        for (int j = i + 1; j < 3; j++) {
            if (l123[i] > l123[j]) {
                int temp = l123[i];
                l123[i] = l123[j];
                l123[j] = temp;
            }
        }
    }

    int x1 = a1, x2 = b1, x3 = c1;
    int y1 = a2, y2 = b2, y3 = c2;

    int s = (x1 * y2 + x2 * y3 + x3 * y1) - (x1 * y3 + x3 * y2 + x2 * y1);

    if (a1 == b1 && b1 == c1 || a2 == b2 && b2 == c2 || s == 0) {
        printf("X\n");
    }
    else if (l1 == l2 && l2 == l3) {
        printf("JungTriangle\n");
    }
    else if (l1 == l2 || l2 == l3 || l3 == l1) {
        if (l123[2] == l123[0] + l123[1]) {
            printf("Jikkak2Triangle\n");
        }
        else if (l123[2] > l123[0] + l123[1]) {
            printf("Dunkak2Triangle\n");
        }
        else {
            printf("Yeahkak2Triangle\n");
        }
    }
    else {
        if (l123[2] == l123[0] + l123[1]) {
            printf("JikkakTriangle\n");
        }
        else if (l123[2] > l123[0] + l123[1]) {
            printf("DunkakTriangle\n");
        }
        else {
            printf("YeahkakTriangle\n");
        }
    }

    return 0;
}
