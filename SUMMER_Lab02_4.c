#include <stdio.h>

int main() {
    int h, m;
    scanf("%d %d", &h, &m);
    if (h == 0) {
        if (m >= 45) {
            m = m - 45;
            printf("%d %d", h, m);
        }
        else {
            m = m + 60 - 45;
            printf("%d %d", 23, m);
        }
    }
    else {
        if (m >= 45) {
            m = m - 45;
            printf("%d %d", h, m);
        }
        else {
            m = m + 60 - 45;
            printf("%d %d", h - 1, m);
        }
    }
}