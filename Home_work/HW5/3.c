#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "rus");
	double a = 50, b = 100, c = 3, d = 20; // a - 50$ �� ��� �����, b - ���������� �����, � - ���������� ���������, d - �����
	double f = b / a; // f - ��������� 1 ������
	double e = d / c; // e - ���� �� 1 ���������
					  //printf_s("%.lf %lf", f, e);
	printf_s("	�������� �������� : \n");
	printf_s("\n 1) ��������� ���������� ����� ��� �������� ������ � ����� � ���������.\n");
	printf_s(" 2) ��������� ���������� ��������� ���� ��� �������� ������ � ����� � ����������	�����.\n");
	printf_s(" 3) ������� ������� ����� �������� �� ����� ���� �� ������������ ���������� \n	����� � ���������.\n");
	printf_s("\n ��� ����� : ");
	int choice;
	scanf_s("%d", &choice);
	switch (choice)
	{
	case 1: {
		int a1, c1;
		printf_s("������� �������� ����� ���� : ");
		scanf_s("%d", &a1);
		printf_s("������� ���������� ��������� : ");
		scanf_s("%d", &c1);
		double choice1 = ((a1 + c1*e) / f) + 1;
		printf_s(" %.lf ����� ����� �������� ���� ��� �������� ������ � %d $ � ��������� %d ���. \n  ", choice1, a1, c1);
		break;
	}
	case 2: {
		int a2, b2;
		printf_s("������� ���������� ����� : ");
		scanf_s("%d", &b2);
		printf_s("������� �������� ����� ���� : ");
		scanf_s("%d", &a2);
		double Income = b2*f - a2;
		if (Income > 0) {
			double choice2 = Income / e;
			printf_s("%.lf ��� ����� �������� ��� �������� %d ����� � �������� ������ %d $ \n", choice2, b2, a2);
		}
		else /*if(Income <= 0)*/ {
			printf_s("������ ����������!!!!!!!!! \n ");
		}

		break;
	}
	case 3: {
		int b3, c3;
		printf_s("������� ���������� ����� : ");
		scanf_s("%d", &b3);
		printf_s("������� ���������� ��������� : ");
		scanf_s("%d", &c3);
		double Income1 = b3*f - c3*e;
		if (Income1 > 0) {
			printf_s("��� �������� %d ����� � %d ��� ��������� ���� ������� %.2lf $\n", b3, c3, Income1);
		}
		else {
			printf_s("������ �� �����!!!!! \n");
		}
		break;
	}
	default: {
		printf_s("�� ������� �������� �������� !!!!! \n");
	}

	}



	return 0;
}