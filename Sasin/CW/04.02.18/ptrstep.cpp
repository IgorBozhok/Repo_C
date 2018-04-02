#include <iostream>
#include <time.h>
#include "ptrstep.h"

using namespace std;

// -������ ������;

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

// - ������������ ������;

void DeleteMatr(double **ptr, int  sizeI)
{
	for (int i = 0; i < sizeI; i++)
	{
		delete[]ptr[i];
	}
	delete[]ptr;
}

//- ����

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

//- ������� 

void OutputMatr(double **ptr, int sizeI, int sizeJ)
{
	for (int i = 0; i < sizeI; i++)
	{
		for (int j = 0; j < sizeJ; j++)
		{
			cout << ptr[i][j] << " ";
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

// ����� ��������� ������;

double SumRow(double **ptr, int NowRow, int sizeJ)
{
	double result = 0.0;
	for (int i = 0; i < sizeJ; i++)
	{
		result += ptr[NowRow][i];
	}
	return result;
}

// ����� �� �������� ;

double SumCol(double **ptr, int sizeI, int NumCol)
{
	double result = 0.0;
	for (int i = 0; i < sizeI; i++)
	{
		result += ptr[i][NumCol];
	}
	return result;
}

// ����� min

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

// ����� max

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

// - ���������� ����� � ��������;

double** AddRowEnd(double**ptr, int& sizeI, int sizeJ)
{
	// ��� 1
	double ** ptrRes = new double*[sizeI + 1];
	// ��� 2
	for (int i = 0; i < sizeI; i++)
	{
		ptrRes[i] = ptr[i];
	}
	// ��� 3
	sizeI++;
	ptrRes[sizeI - 1] = new double[sizeJ];
	for (int i = 0; i < sizeJ; i++)
	{
		ptrRes[sizeI - 1][i] = rand() % 10 - rand() % 10;
	}
	//��� 4
	delete[]ptr;
	return ptrRes;
}

// - ���������� ��������;

void AddColEnd(double**ptr, int sizeI, int& sizeJ)
{
	// step 1
	double **ptrTemp = new double*[sizeI];
	for (int i = 0; i < sizeI; i++)
	{
		ptrTemp[i] = ptr[i];
	}
	//step 2
	for (int i = 0; i < sizeI; i++)
	{
		ptr[i] = new double[sizeJ + 1];
		{
			for (int j = 0; j < sizeJ; j++)
				ptr[i][j] = ptrTemp[i][j];
		}
		ptr[i][sizeJ] = rand() % 10 - rand() % 10;
		delete[]ptrTemp[i];
	}
	delete[]ptrTemp;
	sizeJ++;
	return;
}

// - �������� ����� � ��������;

void DelRowEnd(double **ptr, int& sizeI, int sizeJ)
{
	delete[]ptr[sizeI - 1];
	sizeI--;
	return;
}
// - �������� ��������;

void DelColEnd(double **ptr, int sizeI, int& sizeJ)
{
	{
		// step 1
		double **ptrTemp = new double*[sizeI];
		for (int i = 0; i < sizeI; i++)
		{
			ptrTemp[i] = ptr[i];
		}
		//step 2
		for (int i = 0; i < sizeI; i++)
		{
			ptr[i] = new double[sizeJ -1];
			{
				for (int j = 0; j < sizeJ-1; j++)
					ptr[i][j] = ptrTemp[i][j];
			}
			delete[]ptrTemp[i];
		}
		delete[]ptrTemp;
		sizeJ--;
		return;
	}
}

