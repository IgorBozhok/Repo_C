#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "rus");
	int side[5];
	int summ;
	summ = 0;
	for (int i = 0; i < 5; ++i) {
		printf_s("������� %d ������� ������������� : ", i + 1);
		scanf_s("%d", &side[i]);
		summ = summ + side[i];
	}
	printf_s("�������� ������������� = %d\n", summ);
	return 0;
}
