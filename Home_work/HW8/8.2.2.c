#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

int main()
{
	setlocale(LC_ALL, "rus");
	srand(time(NULL));
	int size;
	int *arr1;
	int *arr2;
	printf_s("¬ведите размер массива : ");
	scanf_s("%d",  &size);
	arr1 = (int*)malloc(sizeof(int)*size);
	arr2 = (int*)malloc(sizeof(int)*size);
	for (int i = 0; i < size; ++i) {
		arr1[i] = rand() % 4001 + (-2000);
		printf_s("arr1 %d - %d \n", i, arr1[i]);
	}
	puts("");
	for (int i = 0; i < size; ++i) {
		arr2[i] = rand() % 4001 + (-2000);
		printf_s("arr2 %d - %d \n", i, arr2[i]);
	}
	puts("");
	int *arr3;
	arr3 = (int*)malloc(sizeof(int)*size);
	int summ;
	for (int i = 0; i < size; ++i) {
		summ = arr1[i] + arr2[i];
		arr3[i] = summ;
		printf("%d %d\n", i, arr3[i]);
	}
	return 0;
}