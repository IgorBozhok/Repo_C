#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "rus");
	int profit[12];
	for (int i = 1; i < 13; ++i) {
		printf_s("������� ������� ����� �� %d ����� : ", i);
		scanf_s("%d", &profit[i - 1]);
	}
	int max_profit = profit[0];
	for (int i = 1; i < 12; ++i) {
		if (max_profit < profit[i]) {
			max_profit = profit[i];
		}
	}
	printf_s("\n������������ ������� ����� �� ��� : %d \n", max_profit);
	int mix_profit = profit[0];
	for (int i = 1; i < 12; ++i) {
		if (mix_profit > profit[i]) {
			mix_profit = profit[i];
		}
	}
	printf_s("\n����������� ������� ����� �� ��� : %d \n\n", mix_profit);
	
	return 0;
}
