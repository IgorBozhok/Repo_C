#include <stdio.h>
#include <locale.h>


int main()
{
	int num = 0;
	setlocale(LC_ALL, "rus");
	for (int i = 100; i < 1000; ++i) {
		if (i / 100 == i / 10 % 10 || i / 10 % 10 == i / 100 || i % 10 == i / 100) {
			num++;
		}
	}
	printf_s(" ���������� ����� ����� � ��������� �� 100 �� 999, � ������� ���� ��� ���������� ����� : %d \n", num);
	return 0;
}