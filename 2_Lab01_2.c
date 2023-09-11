#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    long long dp[65][10];  // dp[i][j]는 i자리 숫자 중에서 마지막 자리 숫자가 j일 때의 개수를 저장

    // 초기화
    for (int i = 0; i < 10; i++) {
        dp[1][i] = 1;  // 1자리 숫자는 모두 1개씩 존재
    }

    for (int i = 2; i < 65; i++) {  // n이 최대 64이므로
        long long sum = 0;  // 각 자릿수의 누적 합을 저장하는 변수

        for (int j = 0; j < 10; j++) {
            dp[i][j] = dp[i - 1][j] + sum;
            sum += dp[i - 1][j];
        }
    }

    while (T--) {
        int n;
        scanf("%d", &n);
        long long result = 0;

        // n자리 수의 모든 경우를 합산
        for (int i = 0; i < 10; i++) {
            result += dp[n][i];
        }

        printf("%lld\n", result);
    }

    return 0;
}

