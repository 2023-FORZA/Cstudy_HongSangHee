#include <stdio.h>
#include <string.h>


int main() {


	int N;
	char str[52];

	scanf_s("%d", &N);

	getchar();

	for (int i = 1; i <= N; i++) {

		fgets(str, sizeof(str), stdin);

		printf("%d. %s", i, str);


	}
}
