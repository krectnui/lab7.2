#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL,"RUS");
	float x, y;
	char c;
	printf("������� �������e ��� x\n");
	scanf_s("%f", &x);
	printf("������� �������� ��� y\n");
	scanf_s("%f", &y);
	printf("������� ��������, ������� ������ ��������� ��� ���������� x � y \n");
	scanf_s("%c", &c);
	scanf_s("%c", &c);

	switch (c)
	{
	case '+':
		printf("%.2f", (x + y));
		break;
	case '-':
		printf("%.2f", (x - y));
		break;
	case '*':
		printf("%.2f", (x * y));
		break;
	case':':
		printf("% .2f", (x / y));
		break;
	default:
		printf("����������� ��������\n");


	}
}

