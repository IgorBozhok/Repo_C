#include <stdio.h>
#include <stdbool.h>
#include <time.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL, "rus");
	srand(time(NULL));
	int *arr;
	int size;
	printf_s("¬ведите размер массива : ");
	scanf_s("%d", &size);
	puts("");
	arr = (int*)malloc(sizeof(int)*size);
	int tmp;
	_Bool swap = false;
	for (int i = 0; i < size; ++i) {
		arr[i]= rand()%100;
		printf_s("%d ", arr[i]);
	}
	puts("");
	puts("");
	for (int i = 0; i < size || swap; ++i) {
		swap = false;
		for (int j = 0; j < size - i; ++j) {
			if (arr[j] < arr[j + 1]) {
				tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
				swap = true;
			}
		}
	}
	for (int i = 0; i < size; ++i) {
		printf_s("%d ", arr[i]);
	}
	puts("");
	puts("");
	return 0;
}