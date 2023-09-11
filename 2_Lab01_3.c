#include <stdio.h>

int main() {
    int T;
    scanf_s("%d", &T);

    while (T--) {
        int A[10];
        for (int i = 0; i < 10; i++) {
            scanf_s("%d", &A[i]);
        }

        // 배열 A에서 3번째로 큰 값을 찾기 위해 버블 정렬을 사용
        for (int i = 0; i < 10 - 1; i++) {
            for (int j = 0; j < 10 - i - 1; j++) {
                if (A[j] > A[j + 1]) {
                    int temp = A[j];
                    A[j] = A[j + 1];
                    A[j + 1] = temp;
                }
            }
        }

        // 배열 A에서 3번째로 큰 값을 출력
        printf("%d\n", A[7]); // 0부터 시작하므로 인덱스 7이 3번째로 큰 값
    }

    return 0;
}
