#include <conio.h>
#include <iostream>
using namespace std;

void del_sim(char strPtr[], char c_del, int sizeStr)

{
	int i = 0;
	int j = 0;
	while (strPtr[i] != '\0')
	{
		if (strPtr[i] == c_del)
		{
			int j = i;
			while (strPtr[j] != '\0')
			{
				strPtr[j] = strPtr[j + 1];
				j++;
			}
		}
		i++;
	}
	for (int j = 0; j < sizeStr - 1; j++)
	{
		cout << strPtr[j];
	}
	

}

void main()
{
	setlocale(LC_ALL, "Rus");

	char* strPtr = new char[128];
	char c_del;
	int sizeStr =0;
	int k = 0;

	cout << "Введите строку : ";
	gets_s(strPtr, 128);
	cout << endl;
	cout << "Введите символ, которая нужно удалить из строки : ";
	cout << endl;
	cin >> c_del;

	while (strPtr[k] != '\0')
	{
		sizeStr++;
		k++;
	}

	del_sim(strPtr, c_del, sizeStr);

	_getch();
	return;
}

