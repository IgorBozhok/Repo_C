#include <iostream>
#include <conio.h>
#include <time.h>
#include <stdio.h>
#include "step1.h"

using namespace std;

void main()
{
	setlocale(LC_ALL, "RUS");
	int **mass2 = nullptr;
	int *mass1 = nullptr;
	int SizeI, SizeJ;
	int Size;
	int  k=0;
	cout << "¬ведите разиер двухмерного массива.";
	cout << endl;
	cout << "SizeI : ";
	cin >> SizeI;
	cout << "SizeJ : ";
	cin >> SizeJ;
	Size = SizeI * SizeJ;
	mass2 = CreateMass2(SizeI, SizeJ);
	mass1 = CreateMass1(Size);
	RandMass2(mass2, SizeI, SizeJ);
	OutMass2(mass2, SizeI, SizeJ);

	_getch();
	return;

}