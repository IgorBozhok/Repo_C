#include <stdio.h>
#include <conio.h>
#include <iostream>

using namespace std;

void main(void)
{
	setlocale(LC_ALL, "Russian");
	cout << "� �������� ������ ������ ��������� �������, � ������� �������� �� ������, �������� ��������� �������:" << endl;
	cout << endl;
	cout << "1. ��������." << endl;
	cout << "2. ������." << endl;
	cout << "3. �����." << endl;
	cout << "4. ����." << endl;
	cout << "5. ������." << endl;
	cout << "6. ������." << endl;
	cout << "7. ����." << endl;
	cout << "8. ������." << endl;
	cout << endl;

	int choice;

	do
	{
		cout << "�������� ����� ������� : " ;
		cin >> choice;
		
	} while (choice<=0 || choice>=9);

	switch (choice)
	{
	case 1:
	{
		cout << endl;
		cout << "��������" << endl;
		cout << endl;
		break;
	}
	case 2:
	{
		cout << endl;
		cout << "������" << endl;
		cout << endl;
		break;
	}
	case 3:
	{
		cout << endl;
		cout << "�����" << endl;
		cout << endl;
		break;
	}
	case 4:
	{
		cout << endl;
		cout << "����" << endl;
		cout << endl;
		break;
	}
	case 5:
	{
		cout << endl;
		cout << "������" << endl;
		cout << endl;
		break;
	}
	case 6:
	{
		cout << endl;
		cout << "������" << endl;
		cout << endl;
		break;
	}
	case 7:
	{
		cout << endl;
		cout << "����" << endl;
		cout << endl;
		break;
	}
	case 8:
	{
		cout << endl;
		cout << "������" << endl;
		cout << endl;
		break;
	}
	
	}


	_getch();
	return;

}