#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	/*
	int x, y, z;
	printf("세 정수를 입력: 2");
	scanf("%d %d %d", &x, &y, &z);

	if (x > y)
	{
		if (x > z)
			printf("최대 수: %d\n", x);
		else
			printf("최대 수: %d\n", z);
	}
	else
	{
		if (y > z)
			printf("최대 수: %d\n", y);
		else
			printf("최대 수: %d\n", z);
	}

	return 0;
	*/

	int score;

	printf("점수 입력: ");
	scanf("%d", &score);

	switch (score / 10)
	{
	case 10: case 9:
		printf("점수가 %d 점으로 성적이 %c 입니다.\n", score, 'A');
		break;
	case 8:
		printf("점수가 %d 점으로 성적이 %c 입니다.\n", score, 'B');
		break;
	case 7:
		printf("점수가 %d 점으로 성적이 %c 입니다.\n", score, 'C');
		break;
	case 6:
		printf("점수가 %d 점으로 성적이 %c 입니다.\n", score, 'D');
		break;

	default:
		printf("점수가 %d 점으로 성적이 %c 입니다.\n", score, 'F');
	}

	return 0;
}
