#include <stdio.h>
#include <stdlib.h>

int main() {
    int t = 0, j = 0, sum = 0, count = 0;
    scanf("%d", &t);
    char* testcase = (char*)malloc(sizeof(char) * 81);

    for (int i = 0; i < t; i++) {
        scanf("%s", testcase);
        j = 0;
        sum = 0;
        count = 0;
        while (testcase[j] != '\0') {
            if (testcase[j] == 'O') {
                sum += ++count;
                j += 1;
            }
            else if (testcase[j] == 'X') {
                count = 0;
                j += 1;
            }
        }
        printf("%d\n", sum);
    }

    free(testcase);
    return 0;
}