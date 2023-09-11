#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    long long dp[65][10];  // dp[i][j]�� i�ڸ� ���� �߿��� ������ �ڸ� ���ڰ� j�� ���� ������ ����

    // �ʱ�ȭ
    for (int i = 0; i < 10; i++) {
        dp[1][i] = 1;  // 1�ڸ� ���ڴ� ��� 1���� ����
    }

    for (int i = 2; i < 65; i++) {  // n�� �ִ� 64�̹Ƿ�
        long long sum = 0;  // �� �ڸ����� ���� ���� �����ϴ� ����

        for (int j = 0; j < 10; j++) {
            dp[i][j] = dp[i - 1][j] + sum;
            sum += dp[i - 1][j];
        }
    }

    while (T--) {
        int n;
        scanf("%d", &n);
        long long result = 0;

        // n�ڸ� ���� ��� ��츦 �ջ�
        for (int i = 0; i < 10; i++) {
            result += dp[n][i];
        }

        printf("%lld\n", result);
    }

    return 0;
}

