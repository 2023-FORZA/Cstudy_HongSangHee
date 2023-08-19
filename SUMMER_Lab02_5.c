#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n); // 테스트케이스 개수 입력

    for (int i = 0; i < n; i++) {
        double a;
        scanf("%lf", &a); // 판자의 모서리 길이 입력

        // 최대 부피를 계산하는 b의 값을 찾는 과정
        double b = a / 6.0; // 정사각형을 bxb 크기로 자르면 b만큼 높이가 됨

        // 소수점 아래 10자리까지 출력
        printf("%.10lf\n", b);
    }

    return 0;
}
