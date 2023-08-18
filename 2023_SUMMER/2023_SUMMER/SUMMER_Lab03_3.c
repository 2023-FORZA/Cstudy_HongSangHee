#include <stdio.h>

int main() {
	int num[100];
	int not_prime_num = 0;
	int i, j;
	int N;

	scanf("%d", &N);

	for (i = 0; i < N; i++) {
		scanf("%d", &num[i]);
	}

	for (i = 0; i < N; i++) {

		if (num[i] == 1) {
			not_prime_num++;
			continue;
		}

		for (j = 2; j < num[i]; j++) {
			if ((num[i] % j) == 0) {
				not_prime_num++;
				break;
			}
		}
	}

	printf("%d", (N - not_prime_num));

	return 0;
}