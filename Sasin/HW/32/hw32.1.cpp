#include <conio.h>
#include <iostream>
#include <locale.h>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Rus");
	char* strPtr = new char[128];
	char sim;
	cout << "¬ведите строку : ";
	gets_s(strPtr, 128);
	cout << endl<<endl;
	cout << "¬ведите искомый символ, дл€ подсчета сколько раз он встречаетс€ в строке." << endl;
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
	cout << "Cимвол <" << sim <<"> "<< j << " раз встречаетс€ в строке : " << endl;

	
	_getch();
	return;
}
