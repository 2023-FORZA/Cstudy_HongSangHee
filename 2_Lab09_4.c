#include <stdio.h>

int N;

int ff(int a, int f) {
    int k = N;
    int i = 0;
    while (k >= 0) {
        int temp = k;
        if (f) printf("%d ", temp);
        k = a;
        a = temp - a;
        i++;
    }
    return i;
}

int main() {
    int target = -1;
    int tnum = 0;

    scanf("%d", &N);

    for (int i = N / 2; i <= N; i++) {
        int a = ff(i, 0);
        if (target < a) {
            target = a;
            tnum = i;
        }
    }

    printf("%d\n", target);
    ff(tnum, 1);

    return 0;
}
