#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "rus");
	int oper1, oper2;
	double cost1min, cost, min;
	printf_s(" ������ ���������� : \n \n 1)Velcom \n 2)MTS \n 3)LIVE \n 4)BELTELECOM \n ");
	printf_s("\n �������� � ������ ��������� ������ �������? (1-4) :   ");
	scanf_s("%d", &oper1);
	printf_s("\n �������� �� ����� �������� ������ �������? (1-4) : ");
	scanf_s("%d", &oper2);
	printf_s("\n �������� ���������� ����� ��������� : ");
	scanf_s("%lf", &min);
	if (oper1 == 1 && oper2 == 2) {
		cost1min = 0.4;
		cost = cost1min*min;
		printf_s("\n ��������� 1 ������ � Velcom �� MTS = %.2lf ������.  \n", cost1min);
		printf_s("\n ��������� %.2lf ����� = %.2lf ������.  \n", min, cost);
	}
	else if (oper1 == 1 && oper2 == 3) {
		cost1min = 0.4;
		cost = cost1min*min;
		printf_s("\n ��������� 1 ������ � Velcom �� LIVE = %.2lf ������.  \n", cost1min);
		printf_s("\n ��������� %.2lf ����� = %.2lf ������.  \n", min, cost);
	}
	else if (oper1 == 1 && oper2 == 4) {
		cost1min = 0.85;
		cost = cost1min*min;
		printf_s("\n ��������� 1 ������ � Velcom �� BELTELECON = %.2lf ������.  \n", cost1min);
		printf_s("\n ��������� %.2lf ����� = %.2lf ������.  \n", min, cost);
	}
	else if (oper1 == 2 && oper2 == 1) {
		cost1min = 0.38;
		cost = cost1min*min;
		printf_s("\n ��������� 1 ������ � MTS �� VELCOM = %.2lf ������.  \n", cost1min);
		printf_s("\n ��������� %.2lf ����� = %.2lf ������.  \n", min, cost);
	}
	else if (oper1 == 2 && oper2 == 3) {
		cost1min = 0.36;
		cost = cost1min*min;
		printf_s("\n ��������� 1 ������ � MTS �� LIVE = %.2lf ������.  \n", cost1min);
		printf_s("\n ��������� %.2lf ����� = %.2lf ������.  \n", min, cost);
	}
	else if (oper1 == 2 && oper2 == 4) {
		cost1min = 0.83;
		cost = cost1min*min;
		printf_s("\n ��������� 1 ������ � MTS �� BELTELECOM = %.2lf ������.  \n", cost1min);
		printf_s("\n ��������� %.2lf ����� = %.2lf ������.  \n", min, cost);
	}
	else if (oper1 == 3 && oper2 == 1) {
		cost1min = 0.38;
		cost = cost1min*min;
		printf_s("\n ��������� 1 ������ � LIVE �� VELCOM = %.2lf ������.  \n", cost1min);
		printf_s("\n ��������� %.2lf ����� = %.2lf ������.  \n", min, cost);
	}
	else if (oper1 == 3 && oper2 == 2) {
		cost1min = 0.38;
		cost = cost1min*min;
		printf_s("\n ��������� 1 ������ � LIVE �� MTS = %.2lf ������.  \n", cost1min);
		printf_s("\n ��������� %.2lf ����� = %.2lf ������.  \n", min, cost);
	}
	else if (oper1 == 3 && oper2 == 4) {
		cost1min = 0.38;
		cost = cost1min*min;
		printf_s("\n ��������� 1 ������ � LIVE �� BELTELECOM = %.2lf ������.  \n", cost1min);
		printf_s("\n ��������� %.2lf ����� = %.2lf ������.  \n", min, cost);
	}
	else if (oper1 == 4 && oper2 == 1) {
		cost1min = 0.55;
		cost = cost1min*min;
		printf_s("\n ��������� 1 ������ � BELTELECOM �� VELCOM = %.2lf ������.  \n", cost1min);
		printf_s("\n ��������� %.2lf ����� = %.2lf ������.  \n", min, cost);
	}
	else if (oper1 == 4 && oper2 == 2) {
		cost1min = 0.6;
		cost = cost1min*min;
		printf_s("\n ��������� 1 ������ � BELTELECOM �� MTS = %.2lf ������.  \n", cost1min);
		printf_s("\n ��������� %.2lf ����� = %.2lf ������.  \n", min, cost);
	}
	else if (oper1 == 4 && oper2 == 3) {
		cost1min = 0.65;
		cost = cost1min*min;
		printf_s("\n ��������� 1 ������ � BELTELECOM �� LIVE = %.2lf ������.  \n", cost1min);
		printf_s("\n ��������� %.2lf ����� = %.2lf ������.  \n", min, cost);
	}
	else if (oper1 == oper2) {
		cost1min = 0.;
		cost = cost1min*min;
		printf_s("\n ��������� 1 ������ ������ ���� = %.2lf ������.  \n", cost1min);
		printf_s("\n ������ ���������� ;-) \n");
	}
	else {
		printf_s("\n � ��� 4 ��������� ��������� !!!!!\n");
	}
	return 0;
}