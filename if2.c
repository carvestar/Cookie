#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	/*
	int a;
	printf("���ڸ� �Է��ϼ���: \n");
	scanf("%d", &a);

	if (a >= 0)
		if (a == 0)
			printf("0�Դϴ�.\n");
		else
			printf("����Դϴ�.\n");
	else
		printf("�����Դϴ�.\n");

	return 0;
	

	int a;
	printf("������ �Է��ϼ���: \n");
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

	printf("�����Դϴ�.\n");

	return 0;

	// �̰� �÷��� �ϴ� �� //

	int a;
	printf("���� �Է��ϼ���: \n");
	scanf("%d", &a);

	if (6 > a && a >= 3)
		printf("��");
	else if (9 > a && a >= 6)
		printf("����");
	else if (12 > a && a >= 9)
		printf("����");
	else if (a == 12 || 1 == a || 2 == a)
		printf("�ܿ�");
	else
		printf("����");

	printf("�Դϴ�.\n");

	return 0;



	int a;
	printf("1-4 �߿� �����ϼ���.");
	scanf("%d", &a);

	switch (a)
	{
	case 1:
		printf("1�г��Դϴ�.");
		break;
	case 2:
		printf("2�г��Դϴ�.");
		break;
	case 3:
		printf("3�г��Դϴ�.");
		break;
	case 4:
		printf("������ȭ�Դϴ�.");
		break;
	default:
		printf("1-4 �߿� �Է��ϼ���.");
	}

	return 0;
	

	int a;
	printf("���� �Է��ϼ���.");
	scanf("%d", &a);

	switch (a)
	{
	case 1: case 2:
		printf("�ܿ��Դϴ�.");
		break;
	case 3: case 4: case 5:
		printf("���Դϴ�.");
		break;
	case 6: case 7: case 8:
		printf("�����Դϴ�.");
		break;
	case 9: case 10: case 11:
		printf("�����Դϴ�.");
		break;
	case 12:
		printf("�ܿ��Դϴ�.");
		break;
	default:
		printf("1-12 �߿� �Է��ϼ���.");
	}

	return 0;
	*/

	char a;
	printf("���ڸ� �Է��ϼ���.");
	scanf("%c", &a);

	switch (a) // (grade/10) //
	{
	case 'a':
		printf("���ĺ��Դϴ�.");
		break;
	case 'b':
		printf("���ĺ��Դϴ�.");
		break;
	default:
		printf("���ڸ� �Է��ϼ���.");
	}

	return 0;
}