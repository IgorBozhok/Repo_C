#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

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
		printf_s("arr %d - %d \n", i, arr[i]);
	}
	printf_s("\nМассив в обратном порядке :\n\n ");
	int *arr1;
	arr1 = (int*)malloc(sizeof(int)*size);
	int tmp;
	tmp = arr[size-1];
	for (int i = 1; i <= size; ++i) {
		arr1[i] = tmp;
		tmp = arr[size-1-i];
		printf_s("arr1 %d - %d \n",i-1, arr1[i]);
	}
	return 0;
}