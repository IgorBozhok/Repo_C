#include <iostream>
#include <conio.h>
#include <clocale>
#include <ctime>

using namespace std;
#define N 10


void main()
{
	setlocale(LC_CTYPE, "Rus");
	srand(time(0));
	int mass[N] = { 0 }, temp = 0; bool flag = false;
	// ����� � ������������� ��������� �������
	cout << "�������� ������: ";
	for (int i = 0; i < N; i++)
	{
		mass[i] = rand() % 10 - rand() % 10;
		cout << mass[i] << " ";
	}
	// ���� ���������� ���������� ��������� 
	for (int i = 0; i < N; i++)
	{
		for (int j = N - 1; j > i; j--)
		{
			if (mass[j - 1] > mass[j])
			{
				flag = true;
				temp = mass[j - 1];
				mass[j - 1] = mass[j];
				mass[j] = temp;
			}
		}
		if (flag == false)
		{
			break;
		}
		flag = false;
	}
	// ����� ���������������� �������
	cout << endl << "��������������� ������: ";
	for (int i = 0; i < N; i++)
	{
		cout << mass[i] << " ";
	}
	_getch();

}