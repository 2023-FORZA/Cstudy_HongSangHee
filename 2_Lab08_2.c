#include <stdio.h>
#include <stdlib.h>


#define MAX_LENGTH 255


int gcd(int a, int b) {
    while (b) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// 10진수를 7진법으로 변환하는 함수
void toBase7(int N, int D, int B, int E, char* result) {
    int commonFactor = gcd(N, D);
    N /= commonFactor;
    D /= commonFactor;

    int integerPart = N / D;
    int fractionalPart = N % D;

    // 소수점 이하 값 계산
    for (int i = 0; i <= E; ++i) {
        fractionalPart *= 7;
        if (i >= B) {
            result[i - B] = (fractionalPart / D) + '0';
        }
        fractionalPart %= D;
    }


    result[E - B + 1] = '\0';
}


void solveTestCase(int caseNumber, int N, int D, int B, int E) {

    char result[MAX_LENGTH];

    toBase7(N, D, B, E, result);
    printf("Problem set %d: %d / %d, base 7 digits %d through %d: %s\n", caseNumber, N, D, B, E, result);
}

int main() {
    int T;
    scanf("%d", &T);

    for (int caseNumber = 1; caseNumber <= T; ++caseNumber) {
        int N, D, B, E;
        scanf("%d %d %d %d", &N, &D, &B, &E);
        solveTestCase(caseNumber, N, D, B, E);
    }

    return 0;
}

