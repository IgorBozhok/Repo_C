#include <stdio.h>
#include <time.h>
#include <locale.h>
#include <stdlib.h>

void quick_sort(int mass[], int left, int right);

void test_1()
{
	printf_s("test1\n");
}

void test_2()
{
	printf_s("test2\n");
}

void test_3()
{
	printf_s("test3\n");
}

int main()
{
	srand(time(NULL));
	//void(*ptf)(int t);
	//ptf = test_1;
	//(*ptf)(3);
	void(*pfns[3])() = { test_1,test_2,test_3 };
	for (int i = 0; i < 10; ++i) {
		(*pfns[rand() % 3])();
	}

	/*int*mass =(int*)calloc(10, sizeof(int));
	srand(time(NULL));
	
	for (int i = 0; i < 10; ++i) {
		mass[i] = rand() % 20;
		printf_s("%d  ",mass[i]);
	}
	puts("");
	quick_sort(mass, 0, 9);
	
	for (int i = 0; i < 10; ++i) {
		printf_s("%d  ", mass[i]);
	}
	puts("");
	free(mass);*/
	return 0;
}

void quick_sort(int mass[], int left, int right)
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
