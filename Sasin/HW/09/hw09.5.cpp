#include <stdio.h>
#include <conio.h>
#include <iostream>

using namespace std;

void main(void)
{
	setlocale(LC_ALL, "Russian");

	int oper1, oper2;
	double cost1min, cost, min;

	cout << " ������ ���������� :" << endl;
	cout << endl;
	cout << "1)Velcom " << endl;
	cout << "2)MTS" << endl;
	cout << "3)LIVE" << endl;
	cout << "4)BELTELECOM" << endl;
	cout << endl;

	do
	{
		cout << "�������� � ������ ��������� ������ ������� : " ;
		cin >> oper1;
	} while (oper1 <= 0 || oper1 >= 4);

	do
	{
		cout << "�������� �� ����� �������� ������ ������� : " ;
		cin >> oper2;
	} while (oper2 <= 0 || oper2 >= 5);

	do
	{
		cout << "�������� ���������� ����� ��������� : " ;
		cin >> min;
	} while (min <= 0);

	if (oper1 == 1 && oper2 == 1)
	{
		cost1min = 0.1;
		cost = cost1min*min;
		cout << endl;
		cout << "��������� 1 ������ � Velcom �� Velcom : " << cost1min << " �." << endl;
		cout << "��������� " << min << " ����� = " << cost << " �." << endl;
	}
	else if (oper1 == 1 && oper2 == 2) 
	{
		cost1min = 0.4;
		cost = cost1min*min;
		cout << endl;
		cout << "��������� 1 ������ � Velcom �� MTS : "<< cost1min << " �." << endl;
		cout << "��������� "<< min <<" ����� = "<< cost<< " �."<< endl;
	}
	else if (oper1 == 1 && oper2 == 3) {
		cost1min = 0.4;
		cost = cost1min*min;
		cout << endl;
		cout << "��������� 1 ������ � Velcom �� LIVE : " << cost1min << " �." << endl;
		cout << "��������� " << min << " ����� = " << cost << " �." << endl;
	}
	else if (oper1 == 1 && oper2 == 4) {
		cost1min = 0.85;
		cost = cost1min*min;
		cout << endl;
		cout << "��������� 1 ������ � Velcom �� BELTELECON : " << cost1min << " �." << endl;
		cout << "��������� " << min << " ����� = " << cost << " �." << endl;
	}
	else if (oper1 == 2 && oper2 == 1) {
		cost1min = 0.38;
		cost = cost1min*min;
		cout << endl;
		cout << "��������� 1 ������ � MTS �� VELCOM : " << cost1min << " �." << endl;
		cout << "��������� " << min << " ����� = " << cost << " �." << endl;
	}
	else if (oper1 == 2 && oper2 == 2) {
		cost1min = 0.05;
		cost = cost1min*min;
		cout << endl;
		cout << "��������� 1 ������ � MTS �� MTS : " << cost1min << " �." << endl;
		cout << "��������� " << min << " ����� = " << cost << " �." << endl;
	}
	else if (oper1 == 2 && oper2 == 3) {
		cost1min = 0.36;
		cost = cost1min*min;
		cout << endl;
		cout << "��������� 1 ������ � MTS �� LIVE : " << cost1min << " �." << endl;
		cout << "��������� " << min << " ����� = " << cost << " �." << endl;	
	}
	else if (oper1 == 2 && oper2 == 4) {
		cost1min = 0.83;
		cost = cost1min*min;
		cout << endl;
		cout << "��������� 1 ������ � MTS �� BELTELECOM : " << cost1min << " �." << endl;
		cout << "��������� " << min << " ����� = " << cost << " �." << endl;
	}
	else if (oper1 == 3 && oper2 == 1) {
		cost1min = 0.38;
		cost = cost1min*min;
		cout << endl;
		cout << "��������� 1 ������ � LIVE �� VELCOM : " << cost1min << " �." << endl;
		cout << "��������� " << min << " ����� = " << cost << " �." << endl;
	}
	else if (oper1 == 3 && oper2 == 2) {
		cost1min = 0.38;
		cost = cost1min*min;
		cout << endl;
		cout << "��������� 1 ������ � LIVE �� MTS : " << cost1min << " �." << endl;
		cout << "��������� " << min << " ����� = " << cost << " �." << endl;
	}
	else if (oper1 == 3 && oper2 == 3)
	{
		cost1min = 0;
		cost = cost1min*min;
		cout << endl;
		cout << "��������� 1 ������ � LIVE �� LIVE : " << cost1min << " �." << endl;
		cout << "��������� " << min << " ����� = " << cost << " �." << endl;
	}
	else if (oper1 == 3 && oper2 == 4) {
		cost1min = 0.38;
		cost = cost1min*min;
		cout << endl;
		cout << "��������� 1 ������ � LIVE �� BELTELECOM : " << cost1min << " �." << endl;
		cout << "��������� " << min << " ����� = " << cost << " �." << endl;
	}
	else if (oper1 == 4 && oper2 == 1) {
		cost1min = 0.55;
		cost = cost1min*min;
		cout << endl;
		cout << "��������� 1 ������ � BELTELECOM �� VELCOM : " << cost1min << " �." << endl;
		cout << "��������� " << min << " ����� = " << cost << " �." << endl;
	}
	else if (oper1 == 4 && oper2 == 2) {
		cost1min = 0.6;
		cost = cost1min*min;
		cout << endl;
		cout << "��������� 1 ������ �  BELTELECOM �� MTS : " << cost1min << " �." << endl;
		cout << "��������� " << min << " ����� = " << cost << " �." << endl;
	}
	else if (oper1 == 4 && oper2 == 3) {
		cost1min = 0.65;
		cost = cost1min*min;
		cout << endl;
		cout << "��������� 1 ������ �  BELTELECOM �� LIVE : " << cost1min << " �." << endl;
		cout << "��������� " << min << " ����� = " << cost << " �." << endl;
	}
	else if (oper1 == 4 && oper2 == 4) {
		cost1min = 0.87;
		cost = cost1min*min;
		cout << endl;
		cout << "��������� 1 ������ �  BELTELECOM �� BELTELECOM : " << cost1min << " �." << endl;
		cout << "��������� " << min << " ����� = " << cost << " �." << endl;
	}

	_getch();
	return;

}