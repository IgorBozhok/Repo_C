#include <stdio.h>
#include <locale.h>
#include <time.h>
#include <stdlib.h>

int main()
{
	setlocale(LC_ALL, "rus");
	srand(time(NULL));
	int size;
	int *arr;
	printf_s("¬ведите размер массива : ");
	scanf_s("%d", &size);
	arr = (int*)malloc(sizeof(int)*size);
	for (int i = 0; i < size; ++i) {
		arr[i] = rand() % 4;
		printf_s("%d - %d \n", i, arr[i]);
	}
	int a = 0;
	for (int i = 0; i < size; ++i) {
		if (arr[i] == 0) {
			++a;
		}
	}
	for (int i = 0; i < size; ++i) {
		if (arr[i] == 0) {
			while (arr[i] == 0) {
				for (int j = i; j < size ;++j) {
					arr[j] = arr[j + 1];
				}
			}
		}	
	}
	printf_s("%d\n", a);
	for (int i = 0; i < a; ++i) {
		arr[size - 1 - i] = -1;
	}
	for (int i = 0; i < size; ++i) {
		printf_s("%d - %d \n", i, arr[i]);
	}
	return 0;
}