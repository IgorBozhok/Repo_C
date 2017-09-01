#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "rus");
	int profit[12];
	for (int i = 1; i < 13; ++i) {
		printf_s("\n ¬ведите прибыль фирмы за %d мес€ц : ", i);
		scanf_s("%d", &profit[i - 1]);
	}
	int SoR;
	int EoR;
	printf_s("¬ведите начальный диапазон дл€ определени€, в котором прибыль была максимальна и минимальна. \n");
	do {
		printf_s("¬ыш выбор : ");
		scanf_s("%d", &SoR);
	} while (SoR <1 || SoR > 11);
	printf_s("¬ведите конечный диапазон дл€ определени€, в котором прибыль была максимальна и минимальна. \n");
	do {
		printf_s("¬ыш выбор : ");
		scanf_s("%d", &EoR);
	} while (EoR <= SoR || EoR>12);
	
	int minProfit = profit[0];
	int pro1;
	for (int i = SoR; i < EoR; ++i) {
		if (minProfit > profit[i]) {
			pro1 = profit[i];
			minProfit = pro1;
		}
	}
	int maxProfit = profit[SoR - 1];
	int pro2=maxProfit;
		for (int i = SoR; i < EoR; ++i) {
			if (maxProfit < profit[i]) {
				pro2 = profit[i];
				maxProfit = pro2;
			}
		}
		printf_s("ћинимальна€ прибыль за год %d \n", pro1);
		printf_s("ћаксимальна€ прибыль за год %d \n", pro2);


	return 0;
}
