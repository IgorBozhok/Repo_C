#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <locale.h>
#include <malloc.h>
#include <stdbool.h>

void q_sort(int *Arr, unsigned N) {
	int left = 0;
	int right = N - 1;
	int mid = Arr[N / 2];
	int tmp = 0;
	int b = 0;
	do {
		while (Arr[left] < mid) {
			++left;
		}
		while (Arr[right] >= mid) {
			--right;
		}
		if (right > left) {
			tmp = Arr[left];
			Arr[left] = Arr[right];
			Arr[right] = tmp;
			++left;
			--right;
		}
		} while (right >= left);
		if (0 < right) {
			q_sort(Arr, right);
		}
		if (right > 0) {
			q_sort(Arr + left, N - left);
		}
}

	int main() {
		setlocale(LC_ALL, "rus");
		srand(time(NULL));
		int N;
		int *Arr;
		printf_s("������� ������ ������� : ");
		scanf_s("%d", &N);
		Arr = (int*)malloc(sizeof(int)*N);
		for (int i = 0; i < N; ++i) {
			Arr[i] = 1 + rand() % 200;
			printf_s("%d\n", Arr[i]);
		}
		puts("");
		q_sort(Arr, N);
		for (int i = 0; i < N; ++i) {
			printf_s("%d\n", Arr[i]);
		}
		return 0;
	}
