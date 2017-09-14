#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <locale.h>
#include <malloc.h>
#include <stdbool.h>
#include <stdint.h>
#include <math.h>
#define SIZE 16


int main()
{
	srand((unsigned)time(NULL));
	int arr[SIZE];
	int a = 10;
	int b = 11;
	int*pa = &a;
	int*pb = &b;
	int arr1[4][4];

	for (int i = 0; i < SIZE; ++i) {
		arr[i] = rand()% 20;
	}
	for (int i = 0; i < 4; ++i) {
		for (int j = 0; j < 4; ++j) {
			arr1[i][j] = rand() % 20;
		}
	}

	int*parr3 = &arr[3];
	int*parr12 = &arr[12];
	printf_s("%p %p \n", *parr3, *parr12);
	int res1 = (int)abs(&arr[3] - &arr[12]);
	int res2 = (int)(res1 * sizeof(int));
	printf_s("%d  %d", res1, res2);
	
	printf_s("\n %p %p", *pa, *(pa + 3));
	
	*(*(arr1+1)+4) = 16;

	printf_s("\n %d\n", arr1[1][4]);


	return 0;
}