#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

void quick_sort(int arr2[], int left, int right);
void init_arr(int arr1[], int size);
void swap_arr(int arr1[],int arr2[], int size);
void print_arr2(int arr2[], int choice);
int main() {
	setlocale(LC_ALL, "rus");
	srand(time(NULL));

	int size;
	int *arr1;
	int *arr2;
	printf_s("Введите количество дисков : ");
	scanf_s("%d", &size);
	puts("");
	arr1 = (int*)malloc(sizeof(int)*size);
	init_arr(arr1, size);
	int choice;
	do {
		printf_s("\n \nВыберите после какого диска вставим лопатку : ");
		scanf_s("%d", &choice);
		puts("");
	} while (choice < 1 || choice > size - 1);
	arr2 = (int*)malloc(sizeof(int)*choice);
	printf_s("Меняем порядок оладий над лопаткой на обратный : ");
	puts("");
	swap_arr(arr1, arr2, choice);
	puts("");
	quick_sort(arr2, 0, choice-1);
	puts("");
	printf_s("Cортирум снизу вверх по убыванию радиуса : \n");
	print_arr2(arr2, choice);
	puts("");
	puts("");
	return 0;
}
void init_arr(int arr1[],int size)
{
	for (int i = 0; i < size; ++i) {
		arr1[i] = rand() % 100;
		printf_s("%d ", arr1[i]);
	}
}
void swap_arr(int arr1[],int arr2[],int choice)
{
	int tmp;
	int j = choice -1;
	for (int i = 0; i < choice; ++i) {
		tmp = arr1[i];
		arr2[j] = tmp;
		--j;
	}
	for (int i = 0; i < choice; ++i) {
		printf_s("%d ", arr2[i]);
	}
}
void quick_sort(int arr2[], int left, int right)
{
	int op = arr2[left + (right - left) / 2];
	int l = left;
	int r = right;
	do
	{
		while (arr2[l] < op)
			++l;

		while (arr2[r] > op)
			--r;

		if (r < l)
			break;
		if (arr2[l] != arr2[r]) {
			int t = arr2[r];
			arr2[r] = arr2[l];
			arr2[l] = t;
		}
		++l;
		--r;
	} while (r > l);
	if (r > left)
		quick_sort(arr2, left, r);
	if (l < right)
		quick_sort(arr2, l, right);
}
void print_arr2(int arr2[], int choice)
{
	for (int i = 0; i < choice; ++i) {
		printf_s("%d ", arr2[i]);
	}
}
