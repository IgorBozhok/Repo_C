#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

void init_arr(int**mass, int size);
void print_mass(int**mass, int size);
void def_min_mass(int**mass, int size);
void sort_mass(int**mass, int size);
void quick_sort(int mass[], int left, int right);

int main ()
{
	setlocale(LC_ALL, "rus");
	srand(time(NULL));
		
	int size;
	printf("Введите размер квадратной матрицы ");
	scanf("%d", &size);

	int ** mass = (int **)malloc(size*sizeof(int *));
	for (int i = 0; i < size; ++i)
	{
		mass[i] = (int *)malloc(size*sizeof(int));
	}

	init_arr(mass, size);
	print_mass(mass, size);
	sort_mass(mass, size);
	print_mass(mass, size);
	return 0;
}

void init_arr(int**mass, int size)
{
	for (int i = 0; i < size; ++i)
	{
		for (int j = 0; j < size; ++j)
		{
			mass[i][j] = 10 + rand() % 90;
		}
	}
}
void print_mass(int**mass, int size)
{
	for (int i = 0; i < size; ++i)
	{
		for (int j = 0; j < size; ++j)
		{
			printf_s("%d ", mass[i][j]);
		}
		printf_s("\n");
	}
}
void def_min_mass(int**mass, int size)
{
	int min = mass[0][0];
	int max = mass[0][0];
	for (int i = 0, j = 0; i < size, j < size; ++i, ++j)
	{
		if (mass[i][j] > max)
		{
			max = mass[i][j];
		}
		else if (mass[i][j] < min)
		{
			min = mass[i][j];
		}
	}
	printf_s("min - %d, max - %d на главной диагонали матрицы\n", min, max);
}
void sort_mass(int**mass, int size)
{
	for (int i = 0; i < size; ++i)
	{
		quick_sort(mass[i][size], 0, size - 1);
	}
}
void quick_sort(int*mass[], int left, int right)
{
	int op = mass[left + (right - left) / 2];
	int l = left;
	int r = right;
	do
	{
		while (mass[l] < op)
			++l;

		while (mass[r] > op)
			--r;

		if (r < l)
			break;
		if (mass[l] != mass[r]) {
			int t = mass[r];
			mass[r] = mass[l];
			mass[l] = t;
		}
		++l;
		--r;
	} while (r > l);
	if (r > left)
		quick_sort(mass, left, r);
	if (l < right)
		quick_sort(mass, l, right);
}
