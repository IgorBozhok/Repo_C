#include <stdio.h>
#include <conio.h>
#include <iostream>
using namespace std;

void main(void)
{
	setlocale(LC_ALL, "Russian");

	int salary = 200;
	int premium = 200;
	int sale1, sale2, sale3;
	int salary1, salary2, salary3;
	
	cout << "������� ������� ������ 1 ��������� :" << endl;
	cin >> sale1;
	cout << "������� ������� ������ 1 ��������� :" << endl;
	cin >> sale2;
	cout << "������� ������� ������ 1 ��������� :" << endl;
	cin >> sale3;
	
	// ����������� �������� 1 ���������

	if (sale1 < 500)
	{
		salary1 = int(sale1*0.03) + 200;
	}
	else if (sale1 >= 500 && sale1 < 1000)
	{
		salary1 = int(sale1*0.05) + 200;
	}
	else if (sale1 >= 1000)
	{
		salary1 = int(sale1*0.08) + 200;
	}

	// ����������� �������� 2 ���������

	if (sale2 < 500)
	{
		salary2 = int(sale2*0.03) + 200;
	}
	else if (sale2 >= 500 && sale2 < 1000)
	{
		salary2 = int(sale2*0.05) + 200;
	}
	else if (sale2 >= 1000)
	{
		salary2 = int(sale2*0.08) + 200;
	}

	// ����������� �������� 2 ���������

	if (sale3 < 500)
	{
		salary3 = int(sale3*0.03) + 200;
	}
	else if (sale3 >= 500 && sale3 < 1000)
	{
		salary3 = int(sale2*0.05) + 200;
	}
	else if (sale3 >= 1000)
	{
		salary3 = int(sale3*0.08) + 200;
	}
	
	// ����������� ������� ��������� � ����� ����������  

	if (salary1 > salary2 && salary1 > salary3)
	{
		salary1 = salary1 + 200;
		cout << endl;
		cout << "������ 1 �������� � ��� �������� � ������� 200$ = "<< salary1 << "$" << endl;
		cout << "�������� 2 �������� = " << salary2 << "$" << endl;
		cout << "�������� 3 �������� = " << salary3 << "$" << endl;
	}
	
	if (salary2 > salary1 && salary2 > salary3)
	{
		salary2 = salary2 + 200;
		cout << endl;
		cout << "������ 2 �������� � ��� �������� � ������� 200$ = " << salary2 << "$" << endl;
		cout << "�������� 1 �������� = " << salary1 << "$" << endl;
		cout << "�������� 3 �������� = " << salary3 << "$" << endl;
	}
	
	if (salary3 > salary1 && salary3 > salary2)
	{
		salary3 = salary3 + 200;
		cout << endl;
		cout << "������ 3 �������� � ��� �������� � ������� 200$ = " << salary3 << "$" << endl;
		cout << "�������� 1 �������� = " << salary1 << "$" << endl;
		cout << "�������� 2 �������� = " << salary2 << "$" << endl;
	}
	
	_getch();
	return;
}
