#include <stdio.h>
#include <locale.h>
#include <limits.h>

int main()
{
	setlocale(LC_ALL, "rus");
	int num1, num2;
	printf_s("������� 1 ����� : ");
	scanf_s("%d", &num1);
	printf_s("������� 2 ����� : ");
	scanf_s("%d", &num2);
	printf_s("����� %d � %d  ������� ��� ������� �� :", num1, num2);
	for (int i = INT_MIN; i < INT_MAX; i++) {
		if (i%num1 == 0 && i% num2 == 0) {
			printf_s("%d ", i);
		}
	}
	return 0;
}

