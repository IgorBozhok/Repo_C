#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "rus");
	int oper1, oper2;
	double cost1min, cost, min;
	printf_s(" Список Операторов : \n \n 1)Velcom \n 2)MTS \n 3)LIVE \n 4)BELTELECOM \n ");
	printf_s("\n Выбирите с какого оператора будете звонить? (1-4) :   ");
	scanf_s("%d", &oper1);
	printf_s("\n Выбирите на какой оператор будете звонить? (1-4) : ");
	scanf_s("%d", &oper2);
	printf_s("\n Выбирите количество минут разговора : ");
	scanf_s("%lf", &min);
	if (oper1 == 1 && oper2 == 2) {
		cost1min = 0.4;
		cost = cost1min*min;
		printf_s("\n Стоимость 1 минуты с Velcom на MTS = %.2lf рублей.  \n", cost1min);
		printf_s("\n Стоимость %.2lf минут = %.2lf рублей.  \n", min, cost);
	}
	else if (oper1 == 1 && oper2 == 3) {
		cost1min = 0.4;
		cost = cost1min*min;
		printf_s("\n Стоимость 1 минуты с Velcom на LIVE = %.2lf рублей.  \n", cost1min);
		printf_s("\n Стоимость %.2lf минут = %.2lf рублей.  \n", min, cost);
	}
	else if (oper1 == 1 && oper2 == 4) {
		cost1min = 0.85;
		cost = cost1min*min;
		printf_s("\n Стоимость 1 минуты с Velcom на BELTELECON = %.2lf рублей.  \n", cost1min);
		printf_s("\n Стоимость %.2lf минут = %.2lf рублей.  \n", min, cost);
	}
	else if (oper1 == 2 && oper2 == 1) {
		cost1min = 0.38;
		cost = cost1min*min;
		printf_s("\n Стоимость 1 минуты с MTS на VELCOM = %.2lf рублей.  \n", cost1min);
		printf_s("\n Стоимость %.2lf минут = %.2lf рублей.  \n", min, cost);
	}
	else if (oper1 == 2 && oper2 == 3) {
		cost1min = 0.36;
		cost = cost1min*min;
		printf_s("\n Стоимость 1 минуты с MTS на LIVE = %.2lf рублей.  \n", cost1min);
		printf_s("\n Стоимость %.2lf минут = %.2lf рублей.  \n", min, cost);
	}
	else if (oper1 == 2 && oper2 == 4) {
		cost1min = 0.83;
		cost = cost1min*min;
		printf_s("\n Стоимость 1 минуты с MTS на BELTELECOM = %.2lf рублей.  \n", cost1min);
		printf_s("\n Стоимость %.2lf минут = %.2lf рублей.  \n", min, cost);
	}
	else if (oper1 == 3 && oper2 == 1) {
		cost1min = 0.38;
		cost = cost1min*min;
		printf_s("\n Стоимость 1 минуты с LIVE на VELCOM = %.2lf рублей.  \n", cost1min);
		printf_s("\n Стоимость %.2lf минут = %.2lf рублей.  \n", min, cost);
	}
	else if (oper1 == 3 && oper2 == 2) {
		cost1min = 0.38;
		cost = cost1min*min;
		printf_s("\n Стоимость 1 минуты с LIVE на MTS = %.2lf рублей.  \n", cost1min);
		printf_s("\n Стоимость %.2lf минут = %.2lf рублей.  \n", min, cost);
	}
	else if (oper1 == 3 && oper2 == 4) {
		cost1min = 0.38;
		cost = cost1min*min;
		printf_s("\n Стоимость 1 минуты с LIVE на BELTELECOM = %.2lf рублей.  \n", cost1min);
		printf_s("\n Стоимость %.2lf минут = %.2lf рублей.  \n", min, cost);
	}
	else if (oper1 == 4 && oper2 == 1) {
		cost1min = 0.55;
		cost = cost1min*min;
		printf_s("\n Стоимость 1 минуты с BELTELECOM на VELCOM = %.2lf рублей.  \n", cost1min);
		printf_s("\n Стоимость %.2lf минут = %.2lf рублей.  \n", min, cost);
	}
	else if (oper1 == 4 && oper2 == 2) {
		cost1min = 0.6;
		cost = cost1min*min;
		printf_s("\n Стоимость 1 минуты с BELTELECOM на MTS = %.2lf рублей.  \n", cost1min);
		printf_s("\n Стоимость %.2lf минут = %.2lf рублей.  \n", min, cost);
	}
	else if (oper1 == 4 && oper2 == 3) {
		cost1min = 0.65;
		cost = cost1min*min;
		printf_s("\n Стоимость 1 минуты с BELTELECOM на LIVE = %.2lf рублей.  \n", cost1min);
		printf_s("\n Стоимость %.2lf минут = %.2lf рублей.  \n", min, cost);
	}
	else if (oper1 == oper2) {
		cost1min = 0.;
		cost = cost1min*min;
		printf_s("\n Стоимость 1 минуты внутри сети = %.2lf рублей.  \n", cost1min);
		printf_s("\n Звонок бесплатный ;-) \n");
	}
	else {
		printf_s("\n У нас 4 мобильных оператора !!!!!\n");
	}
	return 0;
}