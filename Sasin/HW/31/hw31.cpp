#include <conio.h>
#include <iostream>
#include <locale.h>
using namespace std;

void main(void)
{
	setlocale(LC_ALL, "Rus");
	char* strPtr = new char[128];
	gets_s(strPtr, 128);
	int sizeStr = 0;
	int i = 0;
	int j = 0;
	while (strPtr[i] != '\0')
	{
		sizeStr++;
		i++;
	}
	for (int i = 0; i < sizeStr / 2; i++)
	{
		if (strPtr[i] != strPtr[sizeStr - 1 - i])
		{
			cout << endl << "эта строка не является палиндромом";
			break;
		}
		else if (strPtr[i] == strPtr[sizeStr - 1 - i])
		{
			j++;
		}
	}
	if (j == sizeStr / 2)
	{
		cout << endl << "Эта строка палиндромом";
	}
	cout << endl << "Size" << sizeStr;

	_getch();
	return;
}
