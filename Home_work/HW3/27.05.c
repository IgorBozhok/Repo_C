#include <stdio.h>
#include <locale.h>
#include <time.h>
#include <stdlib.h>

int main()
{
	setlocale(LC_ALL, "rus");
	srand(time(NULL));
	int arr[16];
	arr[0] = rand() % 2000;


	for (int i = 1; i < 16; ++i) {

	}

}