#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "rus");
	int y[12];
	int a1=1;
	int b;
	for (int i = 0; i < 12; ++i) {
		printf_s("\n������� �������� �� %d ����� : ", a1);
		scanf_s("%d", &y[i]);
		++a1;
	}
	for (int j = 0; j < 11; j++) {
		for (int i = 0; i < 11; i++) {
			if (y[i] > y[i + 1]) { //���� ������� ������� ������ ����������, ��
				b = y[i]; //��������� �������� �������� ��������;
				y[i] = y[i + 1]; //�������� ������� ������� ���������;
				y[i + 1] = b; //�������� ��������� ������� �������.
			}

		}
	}
	for (int i = 0; i < 12; i++) {
		printf("%d \n", y[i]); //����� �������������� �������
	}
	double res = (y[5] + y[6]) / 2.0;
	printf("������� ����� %.2lf \n", res);

	return 0;
}