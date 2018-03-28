#include <stdio.h>
#include <iostream>
#include <time.h>
#include <conio.h>

using namespace std;

// -захват памяти;
double**CreateMatr(int sizeI, int sizeJ)
{
	double **ptr = nullptr;
	ptr = new double*[sizeI];

	for (int i = 0; i < sizeI; i++)
	
	{
		ptr[i] = new double[sizeJ];
	}

	return ptr;
}
// - освобождение памяти;

void DeleteMatr(double **ptr,int  sizeI)
{
	for(int i=0; i < sizeI; i++)
	{
		delete[]ptr[i];
	}
	delete[]ptr;
}

//- Ввод

void InputMatr(double **ptr, int sizeI, int sizeJ)
{
	for (int i = 0; i < sizeI; i++)
	{
		for (int j = 0; j < sizeJ; j++)
		{
			cout << "ptr[" << i << "][" << j << "] = ";
			cin >> ptr[i][j];
			cout << endl;
		}
	}
}
//- ввывода 
void OutputMatr(double **ptr, int sizeI, int sizeJ)
{
	for (int i = 0; i < sizeI; i++)
	{
		for (int j = 0; j < sizeJ; j++)
		{
			cout << ptr[i][j]<<" ";
		}
		cout << endl;
	}
}

// - random;
void RandMatr(double **ptr, int sizeI, int sizeJ)
{
	for (int i = 0; i < sizeI; i++)
	{
		for (int j = 0; j < sizeJ; j++)
		{
			ptr[i][j] = rand() % 10;
		}
	}
}
// сумма элементов страки;
double SumRow(double **ptr, int NowRow, int sizeJ)
{
	double result = 0.0;
	for (int i = 0; i < sizeJ; i++)
	{
		result += ptr[NowRow][i];
	}
	return result;
}

// сумма по столбцам ;

double SumCol(double **ptr, int sizeI, int NumCol)
{
	double result = 0.0;
	for (int i = 0; i < sizeI; i++)
	{
		result += ptr[i][NumCol];
	}
	return result;
}

// поиск min

double MinElem(double**ptr, int sizeI, int sizeJ)
{
	double min = ptr[0][0];
	for (int i = 0; i < sizeI; i++)
	{
		for (int j = 0; j < sizeJ; j++)
		{
			if (min > ptr[i][j])
			{
				min = ptr[i][j];
			}
		}
	}
	return min;
}
// поиск max

double MaxElem(double**ptr, int sizeI, int sizeJ)
{
	double max = ptr[0][0];
	for (int i = 0; i < sizeI; i++)
	{
		for (int j = 0; j < sizeJ; j++)
		{
			if (max < ptr[i][j])
			{
				max = ptr[i][j];
			}
		}
	}
	return max;
}




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

	cout << " Min elem = " << MinElem(ptr, sizeI, sizeJ);
	cout << " Min elem = " << MaxElem(ptr, sizeI, sizeJ);

	DeleteMatr(ptr, sizeI);

	_getch();
	return;

}
