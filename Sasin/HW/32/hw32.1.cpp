#include <conio.h>
#include <iostream>
#include <locale.h>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Rus");
	char* strPtr = new char[128];
	char sim;
	cout << "������� ������ : ";
	gets_s(strPtr, 128);
	cout << endl<<endl;
	cout << "������� ������� ������, ��� �������� ������� ��� �� ����������� � ������." << endl;
	cin >> sim;
	int sizeStr = 0;
	int i = 0;
	int j = 0;
	while (strPtr[i] != '\0')
	{
		sizeStr++;
		i++;
	}
	for (int i = 0; i < sizeStr; i++)
	{
		if (strPtr[i] == sim)
		{
			j++;
		}
	}
	cout << "C����� <" << sim <<"> "<< j << " ��� ����������� � ������ : " << endl;

	
	_getch();
	return;
}
