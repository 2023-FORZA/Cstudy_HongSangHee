#include <stdio.h>

int main() {
    int T;
    scanf_s("%d", &T);

    while (T--) {
        int A[10];
        for (int i = 0; i < 10; i++) {
            scanf_s("%d", &A[i]);
        }

        // �迭 A���� 3��°�� ū ���� ã�� ���� ���� ������ ���
        for (int i = 0; i < 10 - 1; i++) {
            for (int j = 0; j < 10 - i - 1; j++) {
                if (A[j] > A[j + 1]) {
                    int temp = A[j];
                    A[j] = A[j + 1];
                    A[j + 1] = temp;
                }
            }
        }

        // �迭 A���� 3��°�� ū ���� ���
        printf("%d\n", A[7]); // 0���� �����ϹǷ� �ε��� 7�� 3��°�� ū ��
    }

    return 0;
}
