#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "rus");
	int a, b, c, d, f;
	printf_s("������� 1 ������ �� 1 �� 10 : ");
	scanf_s("%d", &a);
	printf_s("������� 2 ������ �� 1 �� 10 :  ");
	scanf_s("%d", &b);
	printf_s("������� 3 ������ �� 1 �� 10 : ");
	scanf_s("%d", &c);
	printf_s("������� 4 ������ �� 1 �� 10 : ");
	scanf_s("%d", &d);
	printf_s("������� 5 ������ �� 1 �� 10 : ");
	scanf_s("%d", &f);
	int Score = (a + b + c + d + f) / 5;
	if (Score >= 4) {
		printf_s("������� ������� � ��������, ��� ������� ���� = %d \n", Score);
	}
	else {
		printf_s("�� ������� ������� � ��������, ��� ������� ���� = %d \n", Score);
	}
	
	return 0;
}