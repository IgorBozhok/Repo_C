#include <stdio.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL, "rus");
	int number;
	printf_s("������� ����� : ");
	scanf_s("%d", &number);
	if (number % 2 == 0) {
		printf_s("����� ������ \n");
	}
	else {
			printf_s("����� ��������.\n");
		}
	return 0;
}