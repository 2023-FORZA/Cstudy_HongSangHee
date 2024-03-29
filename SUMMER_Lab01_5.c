#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    int arr[100];

    while (N--) {
        int input, copy, sum, reverse = 0;
        int i = 0;
        int T = 1; //true를 1로 설정

        scanf("%d", &input);
        copy = input;
        while (1) {
            reverse += input % 10;
            if (input / 10 == 0) {
                break;
            }
            reverse *= 10;
            input /= 10;
        } // 역수 만들기

        sum = copy + reverse;

        while (1) {
            arr[i] = sum % 10;
            i++;
            if (sum / 10 == 0) {
                break;
            }
            sum /= 10;
        } // 배열에 숫자 넣기

        // i번째 숫자랑 첫번째 숫자부터 차근차근 비교한다. i/2까지만 비교하면 된다. 앞뒤 비교이기 때문
        for (int j = 0; j < i / 2; j++) {
            if (arr[j] != arr[i - 1 - j]) {
                T = 0; // false를 0으로 설정
            }
        }

        if (T)
            printf("YES\n");
        else
            printf("NO\n");
    }

    return 0;
}
