#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "rus");
	int profit[6];
	int allProfit;
	allProfit = 0;
	for (int i = 1; i < 7; ++i) {
		printf_s("������� ������� ����� �� %d ����� : ", i);
		scanf_s("%d", &profit[i - 1]);
		allProfit = allProfit + profit[i - 1];
		
	}
	printf_s("������� ����� �� 6 ������� : %d $. \n", allProfit);
	return 0;
}

		