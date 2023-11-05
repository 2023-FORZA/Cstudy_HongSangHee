#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int N;
	scanf("%d", &N);
	int arr[100];
	int check = 0;
	int result = 0;
	for (int i = 0; i < N; i++)
	{
		scanf("%d", &arr[i]);
	}
	for (int i = 0; i < N; i++)
	{
		if (arr[i] == 0)
		{
			result = -1;
		}
	}
	for (int i = 0; i < N; i++)
	{

		for (int j = 0; j < N; j++)
		{
			if (arr[i] == arr[j])
			{
				check++;
			}
		}
		if (check == arr[i])
		{
			if (arr[i] > result)
			{
				result = arr[i];
			}
		}
		check = 0;
	}
	printf("%d", result);
}