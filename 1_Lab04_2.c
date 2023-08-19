#include <stdio.h>
int main()
{
	int n,i,j; // 사용할 3개의 변수에 대한 자료형 선언
	j = 0; 
	scanf("%d", &n); 
	for (i = 1; i <= n; i++) { // for문을 활용하여 i를 1씩 증가시켜준다
		j= j + i; // 최종 출력값이 될 j에 갱신되는 i를 계속 더해준다
	}
	printf("%d", j);
	return 0;
}