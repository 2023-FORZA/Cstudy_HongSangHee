#include <stdio.h>
int arr[128][128];
int N;

int one;
int zero;

// 시작점과 사각형 크기
void divide_conquer(int x, int y, int n) {

    int sum = 0;

    for (int i = x; i < x + n; i++)
        for (int j = y; j < y + n; j++)
            sum += arr[i][j];

    if (sum == n * n) {
        one++;
    }
    else if (sum == 0) {
        zero++;
    }
    else {

        divide_conquer(x, y, n / 2);
        divide_conquer(x, y + n / 2, n / 2);
        divide_conquer(x + n / 2, y, n / 2);
        divide_conquer(x + n / 2, y + n / 2, n / 2);

    }

}

int main() {
    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    divide_conquer(0, 0, N);

    printf("%d %d", zero, one);
}