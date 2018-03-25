#include <conio.h>
#include <iostream>
using namespace std;

void del_sim(char strPtr[], char s_del)

{
	for (int i = s_del-1; strPtr[i] != '\0'; i++)
	{
		strPtr[i] = strPtr[i + 1];
	}

	for (unsigned int i = 0; i < strlen(strPtr); i++)
	{
		cout << strPtr[i];
	}
}

void main()
{
	setlocale(LC_ALL, "Rus");

	char* strPtr = new char[128];
	int s_del;
	int k = 0;

	cout << "Введите строку : ";
	gets_s(strPtr, 128);
	cout << endl;
	for (unsigned int i = 0; i < strlen(strPtr); i++)
	{
		cout << strPtr[i]<<"["<<i+1<<"]"<< endl;
	}
	cout << endl;
	cout << "Введите номер символа, которай нужно удалить из строки : ";
	cin >> s_del;

	del_sim(strPtr, s_del);

	_getch();
	return;
}

