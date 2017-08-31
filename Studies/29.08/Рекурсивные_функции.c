#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <locale.h>
#include <malloc.h>
#include <stdbool.h>
int a = 0;
int sum(int n) 
{

	if (1 == n) {
		return n;
	}
	return n + sum(n-1);
}

int printArr(int *Arr, unsigned N) {

	if (N) {
		printArr(Arr, --N);
		printf_s("%d ", Arr[N]);
		
	}
}
int differenceArr(int *Arr, unsigned N)
{
	if (N == 1)
	{
		return Arr[0];
	}
	return differenceArr(Arr, --N) - Arr[N];
}


int main()
{
	setlocale(LC_ALL, "rus");
	srand(time(NULL));
	int N;
	int *Arr;
	printf_s("¬âåäèòå ðàçìåð ìàññèâà : ");
	scanf_s("%d", &N);
	Arr = (int*)malloc(sizeof(int)*N);
	for (int i = 0; i < N; ++i) {
		Arr[i] = 1 + rand() % 200;
		printf_s("%d\n", Arr[i]);
	
	}
	printArr(Arr, N);
	printf_s("%d", a);

	printArr(" differenceArr =%d", differenceArr(Arr, N));

return 0;
}
		
