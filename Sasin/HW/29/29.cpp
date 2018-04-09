#include "conio.h"
#include "iostream"
#include "time.h"

using namespace std;

void OutArr(int *ptr, int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << ptr[i] << " ";
	}
	cout << endl;
}

int* Fun(int *ptr, int size)
{
	int *ptrNew = nullptr;
	int flag = 0;
	int count = 0;
	for (int i = 0; i < size; i++)
	{
		for (int j = 2; j < ptr[i]; j++)
		{
			if (ptr[i] % j == 0)
			{
				flag = 1;
				break;
			}
		}
		if (flag != 1)
		{
			ptr[i] = 1;
		}
		flag = 0;
	}

	for (int i = 0; i < size; i++)
	{
		if (ptr[i] != 1)
		{
			count++;
		}
	}

	cout << count << endl;

	ptrNew = new int[count];

	for (int i = 0, j = 0; i < size; i++)
	{
		if (ptr[i] != 1)
		{
			ptrNew[j] = ptr[i];
			j++;
		}
	}
	OutArr(ptrNew, count);
	delete[] ptr;
	return ptrNew;
}

void InArr(int *ptr, int size)
{
	for (int i = 0; i < size; i++)
	{
		ptr[i] = rand() % 100;
	}
}



void main()
{
	srand(time(0));
	int size = 5;
	int *ptr = new int[size];

	InArr(ptr, size);
	OutArr(ptr, size);

	ptr = Fun(ptr, size);
	_getch();
}