#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

int main()
{
	setlocale(LC_ALL, "rus");
	srand(time(NULL));
	int arr1[10];
	int arr2[5];
	int arr3[5];
	for (int i = 0; i < 10; ++i) {
		arr1[i] = rand() % 2000;
		printf_s("arr %d - %d\n", i , arr1[i]);
	}
	int tmp;
	tmp = 0;
	for (int i = 0; i < 5; ++i) {
		arr2[i] = arr1[tmp];
		tmp = tmp + 2;
	}
	int tmp1;
	tmp1 = 1;
	for (int i = 0; i < 5; ++i) {
		arr3[i] = arr1[tmp1];
		tmp1 = tmp1 + 2;
	}
	for (int i = 0; i < 5; ++i) {
		printf_s("\narr2 %d - %d \n", i, arr2[i]);
		printf_s("arr3 %d - %d \n", i, arr3[i]);
	}

	return 0;
}