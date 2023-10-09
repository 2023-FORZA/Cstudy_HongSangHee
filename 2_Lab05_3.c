#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    int N;
    scanf("%d", &N);
    getchar(); // 개행 문자 처리

    for (int _ = 0; _ < N; _++) {
        char S[101];
        fgets(S, sizeof(S), stdin);
        int cnt = 0;

        for (int i = 0; S[i] != '\0'; i++) {
            char c = tolower(S[i]);
            if (c == 'g') {
                cnt++;
            }
            else if (c == 'b') {
                cnt--;
            }
        }

        printf("%s is ", strtok(S, "\n"));

        if (cnt > 0) {
            printf("GOOD\n");
        }
        else if (cnt == 0) {
            printf("NEUTRAL\n");
        }
        else {
            printf("A BADDY\n");
        }
    }

    return 0;
}
