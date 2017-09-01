#include <stdio.h>
#include <locale.h>
#include <time.h>
#include <stdlib.h>

int main() {
	setlocale(LC_ALL, "rus");
	srand(time(NULL));
	int arr1[5];
	int arr2[5];
	int arr[10];
	for (int i = 0; i < 5; ++i) {
		arr1[i] = -3 + rand() % 5;
		arr2[i] = -3 + rand() % 5;
		printf_s("%d %d\n", arr1[i], arr2[i]);
	}
	puts("");

	int more = 0;
	int more1= 0;
	int zero = 0;
	int zero1 = 0;
	int less = 0;
	int less1 = 0;

	for (int i = 0; i < 5; ++i) {
		if (arr1[i] > 0) {
			++more;
		}
		if (arr2[i] > 0 ) {
			++more1;
		}
		if (arr1[i] == 0) {
			++zero;
		}
		if (arr2[i] == 0) {
			++zero1;
		}
		if (arr1[i] < 0) {
			++less;
		}
		if (arr2[i] < 0) {
			++less1;
		}
	}

	int a1 = 0;
	for (int i = 0; i < 5; ++i) {
		if (arr1[i] > 0 && more > 0) {
			arr[a1] = arr1[i];
			a1 = a1 + 2;
		}
	}
	for (int i = 0; i < 5; ++i) {
		if (arr1[i] == 0 && zero > 0) {
			arr[a1] = arr1[i];
			a1 = a1 + 2;
		}
	}
	for (int i = 0; i < 5; ++i) {
		if (arr1[i] < 0 && less > 0) {
			arr[a1] = arr1[i];
			a1 = a1 + 2;
		}
	}
	
	int a2 = 1;
	for (int i = 0; i < 5; ++i) {
		if (arr2[i] > 0 && more1 > 0) {
			arr[a2] = arr2[i];
			a2 = a2 + 2;
		}
	}
	for (int i = 0; i < 5; ++i) {
		if (arr2[i] == 0 && zero1 > 0) {
			arr[a2] = arr2[i];
			a2 = a2 + 2;
		}
	}
	for (int i = 0; i < 5; ++i) {
		if (arr2[i] < 0 && less1 > 0) {
			arr[a2] = arr2[i];
			a2 = a2 + 2;
		}
	}
		
		
	printf_s("%d %d %d %d %d %d \n",more, more1, zero, zero1, less, less1 );
	puts("");
	for (int i = 0; i < 10; ++i) {
		printf_s("%d ", arr[i ]);
	}
	return 0;
}