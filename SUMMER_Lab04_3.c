#include <stdio.h>

int d(int num) {
    int dnum;
    int a, b, c, d; // 천, 백, 십, 일의 자리수

    if (num > 0 && num < 10) {
        dnum = 2 * num;
    }
    else if (num >= 10 && num < 100) {
        c = num / 10;
        d = num % 10;
        dnum = num + c + d;
    }
    else if (num >= 100 && num < 1000) {
        b = num / 100;
        c = (num / 10) % 10;
        d = num % 10;
        dnum = num + b + c + d;
    }
    else if (num >= 1000 && num < 10000) {
        a = num / 1000;
        b = (num / 100) % 10;
        c = (num / 10) % 10;
        d = num % 10;
        dnum = num + a + b + c + d;
    }
    return dnum;
}

int main() {
    int t[10000] = { 0, }; // 1만개의 숫자
    int n = 1;

    while (n <= 10000) {
        if (d(n) <= 10000) {
            t[d(n) - 1] = 1; // 셀프넘버가 아님
        }
        n++;
    }
    for (int i = 0; i < 10000; i++) {
        if (t[i] == 0) { // 셀프넘버
            printf("%d\n", i + 1);
        }
    }
    return 0;
}