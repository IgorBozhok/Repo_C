#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "rus");
	long long unsigned  a;
	printf_s("������� ����� �� 1 �� 20 : \n");
	scanf_s("%llu", &a);
	long long unsigned  sum = a;
	if (a >= 1 && a <= 19) {
		while (a <= 19) {
			a++;
			sum *= a;
			printf_s("%llu : \n", sum);
		}
	}
	else {
		printf_s("�� ����� ������ 1 � ������ 19\n");
	}
	
	return 0;
}