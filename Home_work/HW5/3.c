#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "rus");
	double a = 50, b = 100, c = 3, d = 20; // a - 50$ за сто строк, b - количество строк, с - количество опозданий, d - штраф
	double f = b / a; // f - стоимость 1 строки
	double e = d / c; // e - шраф за 1 опоздание
					  //printf_s("%.lf %lf", f, e);
	printf_s("	Выберите действие : \n");
	printf_s("\n 1) Вычислить количество строк при желаемом доходе в месяц и опозданий.\n");
	printf_s(" 2) Вычислить количество опозданий Васи при желаемом доходе в месяц и количество	строк.\n");
	printf_s(" 3) Введите сколько денег заплатят за месяц Васи за определенное количество \n	строк и опоздания.\n");
	printf_s("\n Ваш выбор : ");
	int choice;
	scanf_s("%d", &choice);
	switch (choice)
	{
	case 1: {
		int a1, c1;
		printf_s("Введите желаемый доход Васи : ");
		scanf_s("%d", &a1);
		printf_s("Введите количество опозданий : ");
		scanf_s("%d", &c1);
		double choice1 = ((a1 + c1*e) / f) + 1;
		printf_s(" %.lf строк нужно написать Васи при желаемом доходе в %d $ и опозданий %d раз. \n  ", choice1, a1, c1);
		break;
	}
	case 2: {
		int a2, b2;
		printf_s("Введите количество строк : ");
		scanf_s("%d", &b2);
		printf_s("Введите желаемый доход Васи : ");
		scanf_s("%d", &a2);
		double Income = b2*f - a2;
		if (Income > 0) {
			double choice2 = Income / e;
			printf_s("%.lf раз можно опоздать при создание %d строк и жилаемом доходе %d $ \n", choice2, b2, a2);
		}
		else /*if(Income <= 0)*/ {
			printf_s("Нельзя опаздывать!!!!!!!!! \n ");
		}

		break;
	}
	case 3: {
		int b3, c3;
		printf_s("Введите количество строк : ");
		scanf_s("%d", &b3);
		printf_s("Введите количество опозданий : ");
		scanf_s("%d", &c3);
		double Income1 = b3*f - c3*e;
		if (Income1 > 0) {
			printf_s("При создании %d строк и %d раз опозданий Васе залатят %.2lf $\n", b3, c3, Income1);
		}
		else {
			printf_s("Дохода не будет!!!!! \n");
		}
		break;
	}
	default: {
		printf_s("Вы выбрали неверный подпункт !!!!! \n");
	}

	}



	return 0;
}