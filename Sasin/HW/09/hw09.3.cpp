#include <stdio.h>
#include <conio.h>
#include <iostream>

using namespace std;

void main(void)
{
	setlocale(LC_ALL, "Russian");
	cout << "����: ��� ������, ������� �� �� � ������� ���� ?" << endl;
	cout << endl;

	int result = 0;
	int choice;

	// 1

	cout << "������� � ��������� ��� �������� ��� ������ ��� � ������. �� � ����� ���������� �� ��������?" << endl;
	cout << endl;
	cout << "1. ���." << endl;
	cout << "2. ��." << endl;
	cout << "3. �� ����." << endl;
	cout << endl;

	do
	{
		cout << "��� ����� : ";
		cin >> choice;
	} while (choice<=0 || choice>=4);

	if (choice == 1)
	{
		result = result + 2;
	}
	else if (choice == 2)
	{
		result = result + 1;
	}
	
	// 2
	cout << endl;
	cout << "������� ������ ����� ����������� � ��� � ����� ��������� �������?" << endl;
	cout << endl;
	cout << "1. ���." << endl;
	cout << "2. ��." << endl;
	cout << "3. ������ ." << endl;
	cout << endl;

	do
	{
		cout << "��� ����� : ";
		cin >> choice;
	} while (choice <= 0 || choice >= 4);

	if (choice == 1)
	{
		result = result + 2;
	}
	else if (choice == 2)
	{
		result = result + 1;
	}

	// 3

	cout << endl;
	cout << "� ������ ����������������� ��������� ��� �������� ����� � ������� ������?" << endl;
	cout << endl;
	cout << "1. ���." << endl;
	cout << "2. ��." << endl;
	cout << "3. ������ ." << endl;
	cout << endl;

	do
	{
		cout << "��� ����� : ";
		cin >> choice;
	} while (choice <= 0 || choice >= 4);

	if (choice == 1)
	{
		result = result + 1;
	}
	else if (choice == 2)
	{
		result = result + 2;
	}
	// 4

	cout << endl;
	cout << "���� �������� ������ �� ������ ������ ���� ��������� ����� ������ �� ������ ������?" << endl;
	cout << endl;
	cout << "1. ���." << endl;
	cout << "2. ��." << endl;
	cout << "3. ����� ����." << endl;
	cout << endl;

	do
	{
		cout << "��� ����� : ";
		cin >> choice;
	} while (choice <= 0 || choice >= 4);

	if (choice == 1)
	{
		result = result + 1;
	}
	else if (choice == 2)
	{
		result = result + 2;
	}

	// 5

	cout << endl;
	cout << "�� ��������� ������� �� ��������� ��������� �� ������?" << endl;
	cout << endl;
	cout << "1. ���." << endl;
	cout << "2. ��." << endl;
	cout << "3. ������ ����." << endl;
	cout << endl;

	do
	{
		cout << "��� ����� : ";
		cin >> choice;
	} while (choice <= 0 || choice >= 4);

	if (choice == 1)
	{
		result = result + 2;
	}
	else if (choice == 2)
	{
		result = result + 1;
	}
	cout << endl;
	cout << "������������ � ��������:" << endl;
	cout << endl;

	if (result < 5)
	{
		cout << "�� �����������, �� ����� ��������� � ���� �������. ��� ������ ���������� ������� ���������� � �������� � ����� ������� �������. ���� ������ ��� ��� ���� �����, ������������ ���������� ����, �� ���� �����������. ���������, ��������, ����� ��������� ���� ������� ��������� ���������, ������� ����� ����� ��� �� �������� ��� � �������?" << endl;
	}
	else if  (result >= 5 || result <= 7)
	{
		cout << "�� ������, ��� ������� �� �����, � ������� ��� �������.������ � � ��� ��������� ������� ������������, ����� �� ��������� ���.����� ������� ������ ��� ����� � ����� � ����, ��� ��� ������ �����������!" << endl;
	}
	else if (result >= 8)
	{
		cout << " ��� � ��� �������� ������ �� �������, ��� ��� �� ������� ��� ������� ���. ������ ������������� ������� � ������� ����� ����� ����� ��������� �� ������ ������, �� � ��������. ��������� � ���, ��� ����� ����� 10�15 ���, � ���������� ����� ���� ����� � ��������� ������ �����!" << endl;
	}

	_getch();
	return;

}
