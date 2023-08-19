#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int n, sum = 0;
    scanf("%d", &n);

    char* num = (char*)malloc(sizeof(char) * (n + 1));
    scanf("%s", num);

    for (int i = 0; i < n; i++) {
        sum += num[i] - '0';
    }

    printf("%d", sum);

    free(num);
    return 0;
}