#include <stdio.h>
#include <iostream>
#include <time.h>
#include <conio.h>
#include "ptrstep.h" 

using namespace std;

void main(void)
{
	srand(time(nullptr));

	double **ptr = nullptr;
	int sizeI = 3, sizeJ = 4;

	ptr = CreateMatr(sizeI, sizeJ);
	//InputMatr(ptr, sizeI, sizeJ);
	RandMatr(ptr, sizeI, sizeJ);
	OutputMatr(ptr, sizeI, sizeJ);

	for (int i = 0; i < sizeI; i++)
	{
		cout << "Sum row #" << i << " = ";
		cout << SumRow(ptr, i, sizeJ) << endl;
	}

	for (int i = 0; i < sizeI; i++)
	{
		cout << "Sum col #" << i << " = ";
		cout << SumCol(ptr, sizeI, i) << endl;
	}
	cout << endl;
	cout << " Min elem = " << MinElem(ptr, sizeI, sizeJ);
	cout << " Min elem = " << MaxElem(ptr, sizeI, sizeJ);
	cout << endl;
	cout << endl;

	ptr = AddRowEnd(ptr, sizeI, sizeJ);
	AddColEnd(ptr, sizeI, sizeJ);
	OutputMatr(ptr, sizeI, sizeJ);
	cout << endl;
	DelRowEnd(ptr, sizeI, sizeJ);
	OutputMatr(ptr, sizeI, sizeJ);
	cout << endl;
	DelColEnd(ptr, sizeI, sizeJ);
	OutputMatr(ptr, sizeI, sizeJ);

	DeleteMatr(ptr, sizeI);

	_getch();
	return;

}
