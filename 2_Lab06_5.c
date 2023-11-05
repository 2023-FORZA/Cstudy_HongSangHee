#include <stdio.h>

int main(void) {
	int i, cnt = 0;
	char str[1000];

	scanf("%s", str);
	for (i = 0; str[i]; ++i) {
		while ('A' <= str[i] && str[i] <= 'Z' && (i + cnt) % 4 != 0) {
			++cnt;
		}
	}
	printf("%d", cnt);
	return 0;
}