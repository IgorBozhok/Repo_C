#include <stdio.h>
#include <locale.h>


int main()
{
	setlocale(LC_ALL, "rus");
	const char *product[] = {"����","��������","���������� ��������","������� �������"};
	int quantity[4] = { 10, 10, 10, 10 };
	const int cost[4] = { 40, 35, 10, 15};
	int SelectionProduct, SelectionQantity;
	int allCost=0, TotaRevenues=0;
	int choise;
	printf_s("			���������� ������. \n \n");
	while (quantity[0] > 0 && quantity[1] > 0 && quantity[2] > 0, quantity[3] > 0) {
		
		do {
			for (int i = 1; i < 5; ++i) {
				printf_s("\n %d) %s � ���������� %d ���� �� ��������� %d ������. \n ", i, product[i-1], quantity[i-1], cost[i-1]);
			}
			printf_s("\n �������� ����� : ");
			scanf_s("%d", &SelectionProduct);
		} while (SelectionProduct < 1 || SelectionProduct > 4);
		switch (SelectionProduct) {
		case 1:
			if (quantity[0] > 0) {
				do {
					printf_s("\n ���������� ������ : ");
					scanf_s("%d", &SelectionQantity);
				} while (SelectionQantity < 1 || SelectionQantity > quantity[0]);
				quantity[0] = quantity[0] - SelectionQantity;
				allCost = allCost + SelectionQantity*cost[0];	
			}
			else {
				printf_s("\n%s ������ ��� � ������� :-( \n", product[0]);
			}
			break;
		case 2:
			if (quantity[1] > 0) {
			do {
				printf_s("\n���������� ������ : ");
				scanf_s("%d", &SelectionQantity);
			} while (SelectionQantity < 1 || SelectionQantity > quantity[1]);
			quantity[1] = quantity[1] - SelectionQantity;
			allCost = allCost + SelectionQantity*cost[1];
			}
			else {
				printf_s("\n%s ������ ��� � ������� :-( \n", product[1]);
			}
			break;
		case 3:
			if (quantity[2] > 0) {
			do {
				printf_s("\n���������� ������ : ");
				scanf_s("%d", &SelectionQantity);
			} while (SelectionQantity < 1 || SelectionQantity > quantity[2]);
			quantity[2] = quantity[2] - SelectionQantity;
			allCost = allCost + SelectionQantity*cost[2];
			}
			else {
				printf_s("\n%s ������ ��� � ������� :-( \n", product[2]);
			}
			break;
		case 4:
			if (quantity[3] > 0) {
				do {
					printf_s("\n���������� ������ : ");
					scanf_s("%d", &SelectionQantity);
				} while (SelectionQantity < 1 || SelectionQantity > quantity[3]);
				quantity[3] = quantity[3] - SelectionQantity;
				allCost = allCost + SelectionQantity*cost[3];
			}
			else {
				printf_s("\n%s ������ ��� � ������� :-( \n", product[3]);
			}
			break;
		}
		printf_s("\n 1) ��� �����?\n");
		printf_s("\n 2) ����� �������?\n");
		do {
			printf_s("\n ��� ����� : ");
			scanf_s("%d", &choise);
		} while (choise < 1 || choise>2);
		if (choise == 2) {
			printf_s("\n ����� ������ ���� = %d ������.\n", allCost);
			allCost = 0;
		}
	}
	printf_s("\n �� ��� ������� � ���� ����� %d\n", allCost);
	return 0;
}