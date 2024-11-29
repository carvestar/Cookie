#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{

	int a;
	printf("나이를 입력하세요: \n");
	scanf("%d", &a);

	if (a >= 20 && a <= 39)
	{
		printf("청년입니다.11111\n");
	}

	else if (a >= 40 && a <= 59)
	{
		printf("중장년입니다.\n");
	}
	else
		printf("기타입니다.\n");

	printf("처리를 종료합니다.\n");

	return 0;
}
