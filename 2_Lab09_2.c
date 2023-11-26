#include <stdio.h>
#include <string.h>

int main() {
    int n;
    int index = 0;
    int count = 0;
    int dif = 0;
    int flag = 0;
    int xc;
    int yc;
    int alp[30];
    int comp[30];
    char s[101];

    memset(alp, 0, sizeof(alp));

    scanf("%d", &n);
    scanf("%s", s);

    for (int i = 0; i < strlen(s); ++i) {
        index = s[i] - 'A';
        ++alp[index];
    }
    --n;

    while (n--) {
        memset(comp, 0, sizeof(comp));
        dif = 0;
        flag = 0;
        xc = 0;
        yc = 0;

        scanf("%s", s);

        for (int i = 0; i < strlen(s); ++i) {
            index = s[i] - 'A';
            ++comp[index];
        }
        for (int i = 0; i < 26; ++i) {
            if (alp[i] == comp[i]) {
                continue;
            }
            if (abs(alp[i] - comp[i]) > 1) { // 2 이상 차이
                flag = 1;
                break;
            }
            else if (alp[i] < comp[i]) {
                ++xc;
            }
            else if (alp[i] > comp[i]) {
                ++yc;
            }
            if (xc > 1 || yc > 1) {
                flag = 1;
                break;
            }
        }
        if (flag == 1) {
            continue;
        }
        ++count;
    }

    printf("%d\n", count);

    return 0;
}

