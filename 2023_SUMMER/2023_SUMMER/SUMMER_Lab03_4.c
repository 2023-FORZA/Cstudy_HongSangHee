#include <stdio.h>

int main() {
    int num_tests;
    scanf("%d", &num_tests);

    for (int _ = 0; _ < num_tests; ++_) {
        int n;
        scanf("%d", &n);

        if (n < 3) {
            for (int i = 0; i < n; ++i) {
                for (int j = 0; j < n; ++j) {
                    printf("#");
                }
                printf("\n");
            }
            printf("\n");
        }
        else {
            for (int i = 0; i < n; ++i) {
                printf("#");
            }
            printf("\n");
            for (int i = 0; i < n - 2; ++i) {
                printf("#");
                for (int j = 0; j < n - 2; ++j) {
                    printf("J");
                }
                printf("#\n");
            }
            for (int i = 0; i < n; ++i) {
                printf("#");
            }
            printf("\n\n");
        }
    }

    return 0;
}
