#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

void quick_sort(int arr[], int left, int right);
void init_array1(int arr1[], int size);
void init_array2(int arr2[], int size);
void ptintarr1(int arr1[], int size);
void ptintarr2(int arr2[], int size);
void printuser(int arr1[], int arr2[], int size);

int main() {
	setlocale(LC_ALL, "rus");
	srand(time(NULL));

	int size;
	int *arr1;
	int *arr2;
	printf_s("Введите размер массива : ");
	scanf_s("%d", &size);
	arr1 = (int*)malloc(sizeof(int)*size);
	arr2 = (int*)malloc(sizeof(int)*size);
	init_array1(arr1, size);
	puts("");
	init_array2(arr2, size);
	puts("");
	int Choice;
	while (1) {
	printf_s("\nВыберите действие : \n");
	printf_s("1) Отсортировать по номерам ICQ. \n");
	printf_s("2) Отсортировать по номерам телефона. \n");
	printf_s("3) Вывести список пользователей. \n");
	printf_s("4) Выход. \n");
	puts("");
	do {
		printf_s("\n	Ваш выбор : ");
		scanf_s("%d", &Choice);
	} while (Choice < 1 || Choice > 4);

		switch (Choice)
		{
		case 1:
			quick_sort(arr1, 0, size - 1);
			ptintarr1(arr1, size);
			break;
		case 2:
			quick_sort(arr2, 0, size - 1);
			ptintarr2(arr2, size);
			break;
		case 3:
			printuser(arr1, arr2, size);
			break;
		case 4:
			return 0;
		}
	}
return 0;
}

void init_array1(int arr1[], int size)
{
	for (int i = 0; i < size; ++i) {
		arr1[i] = 100000000 + rand() * 9999;
		printf_s("UserICQ[%d] - %d \n", i, arr1[i]);
	}
}
void init_array2(int arr2[], int size)
{
	for (int i = 0; i < size; ++i) {
		arr2[i] = 1000000 + rand() * 99;
		printf_s("UserFhone[%d] - %d \n", i, arr2[i]);
	}
}
void ptintarr1(int arr1[],int size)
{
	for (int i = 0; i < size; ++i) {
		printf_s("UserICQ%d - %d \n", i+1, arr1[i]);
	}
}
void ptintarr2(int arr2[], int size)
{
	for (int i = 0; i < size; ++i) {
		printf_s("UserFhone%d - %d \n", i+1, arr2[i]);
	}
}
void printuser(int arr1[],int arr2[], int size)
{
	for (int i = 0; i < size; ++i)
	{
		printf("UserICQ%d) %d \n", i+1, arr1[i]);
	}
	puts("");
	for (int i = 0; i < size; ++i)
	{
		printf("UserFhone%d) %d \n", i+2, arr2[i]);
	}
}
void quick_sort(int arr[], int left, int right)
{
	int op = arr[left + (right - left) / 2];
	int l = left;
	int r = right;
	do
	{
		while (arr[l] < op)
			++l;

		while (arr[r] > op)
			--r;

		if (r < l)
			break;
		if (arr[l] != arr[r]) {
			int t = arr[r];
			arr[r] = arr[l];
			arr[l] = t;
		}
		++l;
		--r;
	} while (r > l);
	if (r > left)
		quick_sort(arr, left, r);
	if (l < right)
		quick_sort(arr, l, right);
}
