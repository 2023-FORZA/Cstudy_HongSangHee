#include <stdio.h>
#include <string.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        char str[81];
        scanf("%s", str);
        int sz = strlen(str);
        int cnt[10] = { 0 };

        int i, j;
        for (i = sz - 1; i > 0; i--) {
            if (str[i - 1] < str[i]) {
                for (j = i - 1; j < sz; j++) {
                    cnt[str[j] - '0']++;
                }

                printf("%.*s", i - 1, str);
                for (j = str[i - 1] - '0' + 1; j < 10; j++) {
                    if (cnt[j] > 0) {
                        cnt[j]--;
                        printf("%d", j);
                        break;
                    }
                }

                for (j = 0; j < 10; j++) {
                    while (cnt[j]-- > 0) {
                        printf("%d", j);
                    }
                }

                printf("\n");
                break;
            }
        }

        if (i == 0) {
            printf("BIGGEST\n");
        }
    }

    return 0;
}