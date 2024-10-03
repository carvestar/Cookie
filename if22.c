#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	/*
	int a;
	printf("숫자를 입력하세요: \n");
	scanf("%d", &a);

	if (a >= 0)
		if (a == 0)
			printf("0입니다.\n");
		else
			printf("양수입니다.\n");
	else
		printf("음수입니다.\n");

	return 0;
	

	int a;
	printf("성적을 입력하세요: \n");
	scanf("%d", &a);

	if (a >= 90)
		printf("A");
	else if (a >= 80)
		printf("B");
	else if (a >= 70)
		printf("C");
	else if (a >= 60)
		printf("D");
	else
		printf("F");

	printf("학점입니다.\n");

	return 0;

	// 이거 올려야 하는 듯 //

	int a;
	printf("달을 입력하세요: \n");
	scanf("%d", &a);

	if (6 > a && a >= 3)
		printf("봄");
	else if (9 > a && a >= 6)
		printf("여름");
	else if (12 > a && a >= 9)
		printf("가을");
	else if (a == 12 || 1 == a || 2 == a)
		printf("겨울");
	else
		printf("오류");

	printf("입니다.\n");

	return 0;



	int a;
	printf("1-4 중에 선택하세요.");
	scanf("%d", &a);

	switch (a)
	{
	case 1:
		printf("1학년입니다.");
		break;
	case 2:
		printf("2학년입니다.");
		break;
	case 3:
		printf("3학년입니다.");
		break;
	case 4:
		printf("전공심화입니다.");
		break;
	default:
		printf("1-4 중에 입력하세요.");
	}

	return 0;
	

	int a;
	printf("월을 입력하세요.");
	scanf("%d", &a);

	switch (a)
	{
	case 1: case 2:
		printf("겨울입니다.");
		break;
	case 3: case 4: case 5:
		printf("봄입니다.");
		break;
	case 6: case 7: case 8:
		printf("여름입니다.");
		break;
	case 9: case 10: case 11:
		printf("가을입니다.");
		break;
	case 12:
		printf("겨울입니다.");
		break;
	default:
		printf("1-12 중에 입력하세요.");
	}

	return 0;
	*/

	char a;
	printf("문자를 입력하세요.");
	scanf("%c", &a);

	switch (a) // (grade/10) //
	{
	case 'a':
		printf("알파벳입니다.");
		break;
	case 'b':
		printf("알파벳입니다.");
		break;
	default:
		printf("문자를 입력하세요.");
	}

	return 0;
}
