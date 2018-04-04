#include <iostream>
#include <conio.h>
#include <stdio.h>
using namespace std;

void main()
{
	int a = 1;
	int b = 2;
	int tmp;
	int *ptrtmp;
	tmp = a;
	ptrtmp = &b;
	a = *ptrtmp;
	ptrtmp = &tmp;
	b = *ptrtmp;
	cout << a << " "<< b;
	cout << &a << " " << &b;


	_getch();
	return;
}