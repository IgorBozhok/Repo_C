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
		cout << "������� �������� ��� ��������� �����" << endl;
		cout << "��� ������ ������� 1" << endl;
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
			cout << "�� ����� �� �����" << endl;
		}
	}
	stop: cout << "��� �������� ������� Space ;-)" << endl;
	_getch();
	return;

}