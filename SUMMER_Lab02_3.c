#include <stdio.h>

int main(void) {
	int sum = 0;
	int arr[9] = {};
	for (int i = 0; i < 9; i++) {
		scanf("%d", &arr[i]);
		sum += arr[i];
	}

	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 8; j++) {
			if (arr[j] > arr[j + 1]) {
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}


	for (int i = 0; i < 8; i++)
		for (int j = i + 1; j < 9; j++)
		{
			if (sum - arr[i] - arr[j] == 100) {
				for (int l = 0; l < 9; l++) {
					if (l == i || l == j);
					else printf("%d\n", arr[l]);
				}
				return 0;
			}
		}

}
