#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include <time.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "rus");
	srand(time(NULL));
	int size;
	int *arr;
	printf_s("Введите размер массива : ");
	scanf_s("%d", &size);
	arr = (int*)malloc(sizeof(int)*size);
	for (int i = 0; i < size; ++i) {
		arr[i] = rand() % 4001 + (-2000);
		printf_s("%d - %d \n", i , arr[i]);
	}
	int a;
	a = 0;
	int summ;
	summ = 0;
	for (int i = 0; i < size; ++i) {
		if (arr[i]<0) {
			summ = a + arr[i];
			a = summ;
		}
	}
	printf_s("\n 1) Сумму отрицательных элементов = %d\n", summ);
	
	int max_elem = arr[0];
	int min_elem = arr[0];
	int max = 0;
	int min = 0;
	for (int i = 1; i < size; ++i) {
		if (max_elem < arr[i]) {
			max_elem = arr[i];
			max = i;
		}
	}
	for (int i = 1; i < size; ++i) {
		if (min_elem> arr[i]) {
			min_elem = arr[i];
			min = i;
		}
	}
	printf_s("\n 2) Минимальный элемент %d и максимальный элемент %d \n", min, max);
	int b;
	int summ1;
	summ1 = 0;
	if (min < max) {
		for (int i = min+1; i < max; ++i) {
			summ1 = summ1 + arr[i];
			b = summ1;
		}
	}
	if (min > max) {
		for (int i = max+1; i < min; ++i) {
			summ1 = summ1 + arr[i];
			b = summ1;
		}
	}
	printf_s("    Произведение элементов, находящихся между min и max элементами = %d \n", summ1);
	
	int c;
	int summ2;
	summ2 = 0;
	for (int i = 0; i < size; ++i) {
		if (i % 2 == 0) {
			summ2 = summ2 + arr[i];
			c = summ2;
		}
	}
	printf_s("\n 3) Произведение элементов с четными номерами = %d \n", summ2);

	int elem1;
	int e1 = 0;
	int elem2;
	int e2 = 0;
	for (int i = 0; i < size; ++i) {
		if (arr[i] < 0) {
			e1 = arr[i];
			elem1 = i;
			break;
		}
	}
	
		for (int i = e1+1; i < size; ++i) {
			if (arr[i] < 0) {
				e2 = arr[i];
				elem2 = i;
			}
		} 
		printf_s("\n 4) Первый отрицательный элемент : %d\n", elem1);
		printf_s("    Последний отрицательный элемент : %d\n", elem2);
		int d;
		int summ4;
		summ4 = 0;
		for (int i = elem1+1; i < elem2; ++i) {
			summ4 = summ4 + arr[i];
			d = summ4;
		}
		printf_s("    Сумму элементов, находящихся между первым и последним отрицательными  	    элементами = %d\n", summ4);

	return 0;
}