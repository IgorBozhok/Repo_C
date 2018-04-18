#include "Function.h"
#include <stdio.h>
#include <iostream>
#include <conio.h>

using namespace std;

#define Size 5
void main()
{
	//int * mass = new int[Size];
	//int min, max;
	double * mass = new double[Size];
	double min, max;
	
	IniTmass(mass, Size);
	OuTmass(mass, Size);
	cout << endl;
	min = MiN(mass, Size);
	cout << min << endl;
	max = Max(mass, Size);
	cout << max << endl;
	_getch();
	return;
}