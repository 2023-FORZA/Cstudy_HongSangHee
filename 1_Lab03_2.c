#include <stdio.h>
int main()
{
	int a      //입력받을 변수 a에 대한 자료형 int선언
	scanf("%d", &a);      //사용자로부터 a에 해당하는 정수값을 입력받음
	if (a % 4 == 0 && a % 100 != 0 || a%400 == 0) { //윤년에 해당할 조건 
		printf("1");
	}
	else { // 윤년에 해당하지 않는 경우
		printf("0");
	}
	return 0;
}