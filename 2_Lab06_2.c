#include <stdio.h>
int main() {
	int n, m, cnt = 0, A[10002];
	scanf("%d%d", &n, &m);

	for (int i = 0; i < n; i++)
		scanf("%d", &A[i]);

	for (int i = 0; i < n; i++) {
		int sum = A[i];
		for (int j = i + 1; sum < m; j++)
			sum += A[j];

		if (sum == m) cnt += 1;
	}
	printf("%d", cnt);
}