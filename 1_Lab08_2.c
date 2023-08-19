#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct score {
	char name[11];
	int korean;
	int english;
	int math;
};

int compare(const void* a, const void* b)
{
	struct score* A = (struct score*)a;
	struct score* B = (struct score*)b;

	if (A->korean > B->korean) return -1;
	else if (A->korean < B->korean) return 1;
	else
	{
		if (A->english > B->english) return 1;
		else if (A->english < B->english) return -1;
		else
		{
			if (A->math > B->math) return -1;
			else if (A->math < B->math) return 1;
			else
			{
				return strcmp(A->name, B->name);
			}
		}
	}

}


int main()
{
	int n;
	struct score arr[100001] = { 0, };
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%s %d %d %d", arr[i].name, &arr[i].korean, &arr[i].english, &arr[i].math);
	}
	qsort(arr, n, sizeof(struct score), compare);
	for (int i = 0; i < n; i++)
	{
		printf("%s\n", arr[i].name);
	}
}