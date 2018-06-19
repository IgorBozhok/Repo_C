#include <iostream>
#include <ctime>
#include <algorithm>

using namespace std;

template <typename tempType>
void initMass(tempType &mass, int size)
{
	for (int i = 0; i < size; i++)
	{
		mass[i] = (rand() % 1000)/10.0;
	}
}

template <typename tempType>
void print(tempType mass, int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << mass[i] << " ";
	}
	cout << endl;
}

template <typename tempType>
void sortMass(tempType &mass, int size)
{
	sort(mass, mass + size);
}

template <typename tempType, typename tempkey >
int Search_Binary(tempType arr,  int left, int right, tempkey key)
{
	int midd = 0;
	while (true)
	{
		midd = (left + right) / 2;

		if (key < arr[midd])       
			right = midd - 1;     
		else if (key > arr[midd])  
			left = midd + 1;    
		else                      
			return midd;          

		if (left > right)         
			return -1;
	}
}

template <typename tempType, typename tempNewElem>
void newElem(tempType &mass, int index, tempNewElem elem)
{
	mass[index] = elem;
}

void main()
{	
	setlocale(LC_ALL, "RUS");
	srand(time(nullptr));
	int* massI = nullptr;
	double* massF = nullptr;
	
	
	int index = 0;

	massI = new int[10];
	cout << "������� ������: ";
	initMass(massI, 10);
	print(massI, 10);

	cout << "C��������� �������: ";
	sortMass(massI, 10);
	print(massI, 10);

	cout << "��������� ������ � ������� ����� 10: ";
	int keyI = 10;
	index = Search_Binary(massI, 0, 10, keyI);
	if (index >= 0)
		cout << "��������� ����� ��������� � ������ � ��������: " << index;
	else
		cout << "� ������� ��� ������ �����!";

	cout << endl;

	cout << "������ 0 �������� ������� �� �������� 20: " << endl;
	int _newElemI = 20;
	newElem(massI, 0, _newElemI);
	print(massI, 10);

	cout << endl << endl;

	massF = new double[10];
	cout << "������� ������: ";
	initMass(massF, 10);
	print(massF, 10);

	cout << "C��������� �������: ";
	sortMass(massF, 10);
	print(massF, 10);

	cout << "��������� ������ � ������� ����� 1.1: ";
	double keyF = 1.1;
	index = Search_Binary(massF, 0, 10, keyF);
	if (index >= 0)
		cout << "��������� ����� ��������� � ������ � ��������: " << index ;
	else
		cout << "� ������� ��� ������ �����!";

	cout << endl;

	cout << "������ 0 �������� ������� �� �������� 10.1: " << endl;
	double _newElemD = 10.1;
	newElem(massF, 0, _newElemD);
	print(massF, 10);

	system("pause");
	return;
}