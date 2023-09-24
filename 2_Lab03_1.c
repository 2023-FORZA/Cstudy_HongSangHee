#include <stdio.h>

int main() {
    int now[3], after[3], salt[3];

    scanf("%2d:%2d:%2d", &now[0], &now[1], &now[2]);
    scanf("%2d:%2d:%2d", &after[0], &after[1], &after[2]);

    if (now[0] >= after[0]) {

        after[0] = after[0] + 24 * 3600;

    }

    int t1 = now[0] * 3600 + now[1] * 60 + now[2];
    int t2 = after[0] * 3600 + after[1] * 60 + after[2];

    int t3 = t2 - t1;

    salt[0] = t3 / 3600;
    salt[1] = (t3 % 3600) / 60;
    salt[2] = t3 % 60;

    printf("%02d:%02d:%02d", salt[0], salt[1], salt[2]);

    return 0;
}