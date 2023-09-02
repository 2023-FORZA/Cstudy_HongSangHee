#include <stdio.h>

// 함수 선언: 두 수의 최대 공약수를 계산하는 함수
int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}

// 함수 선언: 두 수의 최소 공배수를 계산하는 함수
long long lcm(long long a, long long b) {
    return (a * b) / gcd(a, b);
}

int main() {
    int n;
    scanf("%d", &n); // 테스트 케이스의 개수 입력

    while (n--) {
        long long a, b;
        scanf("%lld %lld", &a, &b); // 두 수 a와 b 입력
        long long result = lcm(a, b); // 최소 공배수 계산
        printf("%lld\n", result); // 결과 출력
    }

    return 0;
}
