#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <locale.h>
#include <malloc.h>
#include <stdbool.h>

void initArr(int[][5], unsigned, unsigned);
void printArr(int[][5], unsigned, unsigned);


int main()
{
	setlocale(LC_ALL, "rus");
	srand((unsigned)time(NULL));
	int Arr[4][5];
	initArr(Arr, 4, 5);
	printArr(Arr, 4, 5);

	return 0;
}

void initArr(int arr[][5], unsigned line, unsigned column)
{
	for (int i = 0; i < line; ++i) {
		for (int j = 0; j < column; ++j) {
			arr[i][j] = 1 + rand() % 100;
		}
	}
}
void printArr(int arr[][5], unsigned line,unsigned column)
{
	for (int i = 0; i < line; ++i) {
		for (int j = 0; j < column; ++j) {
			printf_s("Arr[%d][%d]=%d\n ",i,j, arr[i][j]);
		}
	}
}