#include <iostream>
#include <conio.h>
#include <stdio.h>
using namespace std;

void main()
{
	int A = 1, B = 5, C = 6;
	int D;
	int sum;
	sum = A + B + C;
	int *ptrD;
	ptrD = &sum;
	D = *ptrD;
	cout << D;

	_getch();
	return;
}