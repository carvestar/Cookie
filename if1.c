#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{

	int a;
	printf("���̸� �Է��ϼ���: \n");
	scanf("%d", &a);

	if (a >= 20 && a <= 39)
	{
		printf("û���Դϴ�.\n");
	}

	else if (a >= 40 && a <= 59)
	{
		printf("������Դϴ�.\n");
	}
	else
		printf("��Ÿ�Դϴ�.\n");

	printf("ó���� �����մϴ�.\n");

	return 0;
}