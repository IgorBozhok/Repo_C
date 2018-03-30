#include <conio.h>
#include <iostream>
#include <string.h>
#include <time.h>
using namespace std;
double sum(double *mas, int size)
{
	double res=0.0;
	for (int i = 0; i < size; i++)
	{
		res += mas[i];
		mas[i]++;
	}
	return res;
}

double sum1(double *a, double &b, double c)
{
	double res = 0.0;
	res = c + *a + b;
	(*a)++;
	b++;
	return res;
}



int ** create(int sizeI,int sizeJ)
{
	int**ptr;
	ptr = new int*[sizeI];
	for (int i = 0; i < sizeI; i++)
	{
		ptr[i] = new int[sizeJ];
	}
	return ptr;

}

void random(int ** ptr, int sizeI, int sizeJ)
{
	for (int i = 0; i < sizeI; i++)
	{
		for (int j = 0; j < sizeJ; j++)
		{
			ptr[i][j] = rand() % 10;
		}
	}
}

void init(int ** ptr, int sizeI, int sizeJ)
{
	for (int i = 0; i < sizeI; i++)
	{
		for (int j = 0; j < sizeJ; j++)
		{
			cout << ptr[i][j]<< " ";
		}
		cout << endl;
	}
}

void main()
{
	/*
	int i = 15;
	int *ptr = &i;
	int &ref = i;
	cout << ptr << endl;
	cout << ref << endl;
	
	double *mas = new double[5];
	for (int i = 0; i < 5; i++)
	{
		mas[i] = rand() % 10;
		double res = 0.0;
		for (int i = 0; i < 5; i++)
		{
			cout << mas[i] << " ";
			res = sum(mas, 5);
			cout << endl<< res << endl;
			for (int i = 0; i < 5; i++)
			{
				cout << mas[i] << " ";
			}

		}
	}
	*/
	/*
	int ** ptr;
	ptr = create(3, 5);
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			cout << ptr[i][j] <<" ";
		}
		cout << endl;
	}
	*/
	/*
	double aM = 1.0, bM = 2.0, cM = 3.0;
	double res = 0.0;
	res = sum1(&aM, bM, cM);
	cout << res << endl;
	cout << aM << endl;
	cout << bM << endl;
	cout << cM << endl;
	*/
	int **ptr = create(5,5);

	random(ptr, 5, 5);
	init(ptr, 5, 5);



	_getch();
	return;
}