#include <stdio.h>
int main()
{
	int n,i,j; // ����� 3���� ������ ���� �ڷ��� ����
	j = 0; 
	scanf("%d", &n); 
	for (i = 1; i <= n; i++) { // for���� Ȱ���Ͽ� i�� 1�� ���������ش�
		j= j + i; // ���� ��°��� �� j�� ���ŵǴ� i�� ��� �����ش�
	}
	printf("%d", j);
	return 0;
}