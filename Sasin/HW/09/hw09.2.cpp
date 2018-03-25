#include <stdio.h>
#include <conio.h>
#include <iostream>

using namespace std;

void main(void)
{
	setlocale(LC_ALL, "Russian");
	char a;
	while (true)
	{
		cout << "Введите строчную или прописную букву" << endl;
		cout << "Для выхода нажмите 1" << endl;
		cin >> a;
		if (a >= 'A' && a <= 'Z')
		{
			a = a + 32;
			cout << a << endl;
		}
		else if (a >= 'a' && a <= 'z')
		{
			a = a - 32;
			cout << a << endl;
		}
		else if (a == '1')
		{
			goto stop;
		}
		else
		{
			cout << "Вы ввели не букву" << endl;
		}
	}
	stop: cout << "Для закрытия нажмите Space ;-)" << endl;
	_getch();
	return;

}