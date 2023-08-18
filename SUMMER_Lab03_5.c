#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    for (int testcase = 0; testcase < t; ++testcase) {
        int n, k;
        scanf("%d %d", &n, &k);

        int data[n];
        for (int i = 0; i < n; ++i) {
            scanf("%d", &data[i]);
        }

        int result = 0;
        for (int i = 0; i < n; ++i) {
            result += data[i] / k;
        }

        printf("%d\n", result);
    }

    return 0;
}
