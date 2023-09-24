#include <stdio.h>
#include <stdbool.h>
#include <string.h>
char arr[1000][20];
char newArr[1000][20];
char ans[1000][20];

int main() {
    int n;
    int cnt = 0;
    while (true) {
        scanf("%d", &n);
        if (n == 0) {

            break;
        }

        for (int i = 0; i < n; i++) {
            char c[20] = {};
            scanf("%s", c);

            for (int j = 0; j < sizeof(c); j++) {
                arr[i][j] = c[j];
                if (c[j] >= 'a' && c[j] <= 'z') {
                    c[j] = c[j] - 'a' + 'A';

                }
            }

            for (int j = 0; j < sizeof(c); j++) {
                newArr[i][j] = c[j];
            }
        }
        int minIndex = 0;

        for (int i = 0; i < n; i++) {
            int ans = 0;
            ans = strcmp(newArr[minIndex], newArr[i]);
            if (ans > 0) {
                minIndex = i;
            }

        }

        printf("%s", arr[minIndex]);
        printf("\n");
    }


}
