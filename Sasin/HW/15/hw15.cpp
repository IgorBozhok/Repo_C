#include <stdio.h>
#include <time.h>
#include <locale.h>
#include <stdlib.h>
#include <conio.h>
#include <iostream>

using namespace std;

void main() {
	setlocale(LC_ALL, "rus");
	srand(time(NULL)); 
	int arr[10];

	for (int i = 0; i < 10; ++i) {
		arr[i] = rand() % 2000;
		cout << i << " - " << arr[i] << endl;
	}

	int max_elem = arr[0];
	int min_elem = arr[0];
	int max = 0;
	int min = 0;
	for (int i = 1; i < 10; ++i) {
		if (max_elem < arr[i]) {
			max_elem = arr[i];
			max = i;
		}
	}
	for (int i = 1; i < 10; ++i) {
		if (min_elem> arr[i]) {
			min_elem = arr[i];
			min = i;
		}
	}
	cout << "Мин элемент и его индекс : " << min_elem << "-" << min << " и мак элемент и его индекс : " << max_elem << "-" << max << endl;
	
	_getch();
	return ;
}