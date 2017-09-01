#include <stdio.h>
#include <time.h>
#include <locale.h>
#include <stdlib.h>

int main() {
	setlocale(LC_ALL, "rus");
	srand(time(NULL));
	int arr[10];
	for (int i = 0; i < 10; ++i) {
		arr[i] = rand() % 2000;
		printf_s("%d - %d \n",i+1, arr[i]);
	}
	
	int max_elem = arr[0];
	int min_elem = arr[0];
	int max = 0;
	int min = 0;
	for (int i = 1; i < 10; ++i) {
		if (max_elem < arr[i]) {
			max_elem = arr[i];
			max = i+1;
		}
	}
	for (int i = 1; i < 10; ++i) {
		if (min_elem> arr[i]) {
			min_elem = arr[i];
			min = i+1;
			}
		}
	printf_s("Минимальный элемент %d и максимальный элемент %d \n", min, max);
	return 0;
}

