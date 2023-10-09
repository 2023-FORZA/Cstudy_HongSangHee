#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int u, n;
    scanf("%d %d", &u, &n);
    char** people_dict[100001]; // 경매 현황을 '경매가':['사람1', '사람2'] 형식으로 저장

    for (int i = 0; i < 100001; i++) {
        people_dict[i] = NULL;
    }

    for (int i = 0; i < n; i++) {
        char s[101];
        int p;
        scanf("%s %d", s, &p);

        if (p <= u) {
            if (people_dict[p] == NULL) {
                people_dict[p] = (char**)malloc(sizeof(char*));
                people_dict[p][0] = NULL;
            }
            else {
                int j = 0;
                while (people_dict[p][j] != NULL) {
                    j++;
                }
                people_dict[p] = (char**)realloc(people_dict[p], (j + 2) * sizeof(char*));
            }
            int j = 0;
            while (people_dict[p][j] != NULL) {
                j++;
            }
            people_dict[p][j] = (char*)malloc(strlen(s) + 1);
            strcpy(people_dict[p][j], s);
            people_dict[p][j + 1] = NULL;
        }
    }

    int min_count = n + 1;
    int min_key = 0;

    for (int i = 0; i <= 100000; i++) {
        if (people_dict[i] != NULL) {
            int count = 0;
            while (people_dict[i][count] != NULL) {
                count++;
            }
            if (count < min_count) {
                min_count = count;
                min_key = i;
            }
        }
    }

    printf("%s %d\n", people_dict[min_key][0], min_key);

    // 메모리 해제
    for (int i = 0; i <= 100000; i++) {
        if (people_dict[i] != NULL) {
            int j = 0;
            while (people_dict[i][j] != NULL) {
                free(people_dict[i][j]);
                j++;
            }
            free(people_dict[i]);
        }
    }

    return 0;
}
