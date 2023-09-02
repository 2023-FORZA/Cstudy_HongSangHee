#include <stdio.h>

// �Լ� ����: �� ���� �ִ� ������� ����ϴ� �Լ�
int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}

// �Լ� ����: �� ���� �ּ� ������� ����ϴ� �Լ�
long long lcm(long long a, long long b) {
    return (a * b) / gcd(a, b);
}

int main() {
    int n;
    scanf("%d", &n); // �׽�Ʈ ���̽��� ���� �Է�

    while (n--) {
        long long a, b;
        scanf("%lld %lld", &a, &b); // �� �� a�� b �Է�
        long long result = lcm(a, b); // �ּ� ����� ���
        printf("%lld\n", result); // ��� ���
    }

    return 0;
}
