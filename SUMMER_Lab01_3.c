#include<stdio.h>

int main() {
    int l;
    scanf("%d", &l);
    int count = 0;
    for (; l > 0; l = l / 2) {
        if (l % 2 == 1) count++;

    }
    printf("%d", count);

}