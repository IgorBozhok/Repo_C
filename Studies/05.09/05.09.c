#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <locale.h>
#include <malloc.h>
#include <stdbool.h>
#include <stdint.h>

void initArr(int[][5], uint32_t, uint32_t);
void printArr(int[][5], uint32_t, uint32_t);


int main()
{
	setlocale(LC_ALL, "rus");
	srand((uint32_t)time(NULL));
	int Arr[4][5];
	initArr(Arr, 4, 5);
	printArr(Arr, 4, 5);

	return 0;
}

void initArr(int arr[][5], uint32_t M, uint32_t N)
{
	for (int i = 0; i < M; ++i) {
		for (int j = 0; j < N; ++j) {
			arr[i][j] = 1 + rand() % 100;
		}
	}
}
void printArr(int arr[][5], uint32_t M, uint32_t N)
{
	for (int i = 0; i < M; ++i) {
		for (int j = 0; j < N; ++j) {
			printf_s(" Arr[%d][%d]=%d\n ",i,j, arr[i][j]);
		}
	}
}