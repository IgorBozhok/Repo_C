#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <locale.h>
#include <malloc.h>
#include <stdbool.h>
#include <stdint.h>

void initArr(int[][5], uint32_t, uint32_t);
void printArr(int[][5], uint32_t, uint32_t);
void quick_sort(int Arr[], int left, int right)
{
	int op = Arr[left + (right - left) / 2];
	int l = left;
	int r = right;
	do
	{
		while (Arr[l] < op)
			++l;

		while (Arr[r] > op)
			--r;

		if (r < l)
			break;
		if (Arr[l] != Arr[r]) {
			int t = Arr[r];
			Arr[r] = Arr[l];
			Arr[l] = t;
		}
		++l;
		--r;
	} while (r > l);
	if (r > left)
		quick_sort(Arr, left, r);
	if (l < right)
		quick_sort(Arr, l, right);
}

int main()
{
	setlocale(LC_ALL, "rus");
	srand((uint32_t)time(NULL));
	int Arr[4][5];
	initArr(Arr, 4, 5);
	for (int i = 0; i < 4; ++i) {
		quick_sort(Arr[i], 0, 4);
	}
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
			//printf_s(" Arr[%d][%d]=%d\n ",i,j, arr[i][j]);
			if (arr[i][j] < 10) {
				printf_s(" ");
			}
			printf_s("%d ", arr[i][j]);
			if (j == 4) {
				puts("");
			}
		}
	}
}