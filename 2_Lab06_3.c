#include <stdio.h>
#include <stdlib.h>

int compare(const void* first, const void* second)
{
	if (*(int*)first > *(int*)second)
		return 1;
	else if (*(int*)first < *(int*)second)
		return -1;
	else
		return 0;
}
int arr[5000001] = { 0, };
int main() {
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	qsort(arr, n, sizeof(int), compare);

	long long int  boo = 0;
	for (int i = 0; i < n; i++)
	{
		boo += abs(arr[i] - (i + 1));
	}

	printf("%lld", boo);


	return 0;
}