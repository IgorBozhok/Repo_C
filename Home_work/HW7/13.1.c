#include <stdio.h>
#include <locale.h>
#include <limits.h>

int main()
{
	setlocale(LC_ALL, "rus");
	int num;
	int num1;
	int Choice;
	int r = 0;
	int i = 0;
	int j = 0;
	printf_s("������� ����� \n ");
	
	do {
		printf_s("��� ����� :");
		scanf_s("%d", &num);
	} while (num<0 && num <INT_MAX);
	printf_s(" 1) ���������� ���������� ���� � ���� �����. \n");
	printf_s(" 2) ��������� ����� ����� � ���� �����. \n");
	printf_s(" 3) ��������� ������� �������������� ����� � ���� �����. \n");
	printf_s(" 4) ���������� ���������� ����� � ���� �����. \n");
	do {
		printf_s("��� ����� : ");
			scanf_s("%d", &Choice);
	} while (Choice < 1 || Choice>4);
	switch (Choice)
	{
	case 1:
		for (; num > 0; i++) {
			num = num / 10;
		}
		printf_s(" %d ���� � ���� �����.\n", i);
		break;
	case 2:
		for(int i=0;num>0;i++) {
			r = num % 10 + r;
			num = num / 10;
		}
		printf_s("C���� ����� � ���� ����� = %d.\n", r);
		break;
	case 3:
		num1 = num;
		for (int j = 0; num1>0; j++) {
			r = num1 % 10 + r;
			num1 = num1 / 10;
		}
		printf_s("C���� ����� � ���� ����� = %d.\n", r);
		for (; num > 0; i++) {
			num = num / 10;
		}
		printf_s(" %d ���� � ���� �����.\n", i);
		
		double r1;
		r1 = (double)r / (double)i;
		printf_s("C������ �������������� ����� � ���� ����� = %.2lf .\n", r1);
		break; 
	case 4:
		for (int i = 0; num > 0; i++) {
			if (num % 10 == 0)
				++r;
			num = num / 10;
		}
		printf_s("R��������� ����� � ���� ����� %d .\n", r);
	}
	return 0;
	}