#include <stdio.h>
#include <conio.h>
#include <iostream>

using namespace std;

void main(void)
{
	setlocale(LC_ALL, "Russian");

	int oper1, oper2;
	double cost1min, cost, min;

	cout << " Список Операторов :" << endl;
	cout << endl;
	cout << "1)Velcom " << endl;
	cout << "2)MTS" << endl;
	cout << "3)LIVE" << endl;
	cout << "4)BELTELECOM" << endl;
	cout << endl;

	do
	{
		cout << "Выбирите с какого оператора будете звонить : " ;
		cin >> oper1;
	} while (oper1 <= 0 || oper1 >= 4);

	do
	{
		cout << "Выбирите на какой оператор будете звонить : " ;
		cin >> oper2;
	} while (oper2 <= 0 || oper2 >= 5);

	do
	{
		cout << "Выбирите количество минут разговора : " ;
		cin >> min;
	} while (min <= 0);

	if (oper1 == 1 && oper2 == 1)
	{
		cost1min = 0.1;
		cost = cost1min*min;
		cout << endl;
		cout << "Стоимость 1 минуты с Velcom на Velcom : " << cost1min << " р." << endl;
		cout << "Стоимость " << min << " минут = " << cost << " р." << endl;
	}
	else if (oper1 == 1 && oper2 == 2) 
	{
		cost1min = 0.4;
		cost = cost1min*min;
		cout << endl;
		cout << "Стоимость 1 минуты с Velcom на MTS : "<< cost1min << " р." << endl;
		cout << "Стоимость "<< min <<" минут = "<< cost<< " р."<< endl;
	}
	else if (oper1 == 1 && oper2 == 3) {
		cost1min = 0.4;
		cost = cost1min*min;
		cout << endl;
		cout << "Стоимость 1 минуты с Velcom на LIVE : " << cost1min << " р." << endl;
		cout << "Стоимость " << min << " минут = " << cost << " р." << endl;
	}
	else if (oper1 == 1 && oper2 == 4) {
		cost1min = 0.85;
		cost = cost1min*min;
		cout << endl;
		cout << "Стоимость 1 минуты с Velcom на BELTELECON : " << cost1min << " р." << endl;
		cout << "Стоимость " << min << " минут = " << cost << " р." << endl;
	}
	else if (oper1 == 2 && oper2 == 1) {
		cost1min = 0.38;
		cost = cost1min*min;
		cout << endl;
		cout << "Стоимость 1 минуты с MTS на VELCOM : " << cost1min << " р." << endl;
		cout << "Стоимость " << min << " минут = " << cost << " р." << endl;
	}
	else if (oper1 == 2 && oper2 == 2) {
		cost1min = 0.05;
		cost = cost1min*min;
		cout << endl;
		cout << "Стоимость 1 минуты с MTS на MTS : " << cost1min << " р." << endl;
		cout << "Стоимость " << min << " минут = " << cost << " р." << endl;
	}
	else if (oper1 == 2 && oper2 == 3) {
		cost1min = 0.36;
		cost = cost1min*min;
		cout << endl;
		cout << "Стоимость 1 минуты с MTS на LIVE : " << cost1min << " р." << endl;
		cout << "Стоимость " << min << " минут = " << cost << " р." << endl;	
	}
	else if (oper1 == 2 && oper2 == 4) {
		cost1min = 0.83;
		cost = cost1min*min;
		cout << endl;
		cout << "Стоимость 1 минуты с MTS на BELTELECOM : " << cost1min << " р." << endl;
		cout << "Стоимость " << min << " минут = " << cost << " р." << endl;
	}
	else if (oper1 == 3 && oper2 == 1) {
		cost1min = 0.38;
		cost = cost1min*min;
		cout << endl;
		cout << "Стоимость 1 минуты с LIVE на VELCOM : " << cost1min << " р." << endl;
		cout << "Стоимость " << min << " минут = " << cost << " р." << endl;
	}
	else if (oper1 == 3 && oper2 == 2) {
		cost1min = 0.38;
		cost = cost1min*min;
		cout << endl;
		cout << "Стоимость 1 минуты с LIVE на MTS : " << cost1min << " р." << endl;
		cout << "Стоимость " << min << " минут = " << cost << " р." << endl;
	}
	else if (oper1 == 3 && oper2 == 3)
	{
		cost1min = 0;
		cost = cost1min*min;
		cout << endl;
		cout << "Стоимость 1 минуты с LIVE на LIVE : " << cost1min << " р." << endl;
		cout << "Стоимость " << min << " минут = " << cost << " р." << endl;
	}
	else if (oper1 == 3 && oper2 == 4) {
		cost1min = 0.38;
		cost = cost1min*min;
		cout << endl;
		cout << "Стоимость 1 минуты с LIVE на BELTELECOM : " << cost1min << " р." << endl;
		cout << "Стоимость " << min << " минут = " << cost << " р." << endl;
	}
	else if (oper1 == 4 && oper2 == 1) {
		cost1min = 0.55;
		cost = cost1min*min;
		cout << endl;
		cout << "Стоимость 1 минуты с BELTELECOM на VELCOM : " << cost1min << " р." << endl;
		cout << "Стоимость " << min << " минут = " << cost << " р." << endl;
	}
	else if (oper1 == 4 && oper2 == 2) {
		cost1min = 0.6;
		cost = cost1min*min;
		cout << endl;
		cout << "Стоимость 1 минуты с  BELTELECOM на MTS : " << cost1min << " р." << endl;
		cout << "Стоимость " << min << " минут = " << cost << " р." << endl;
	}
	else if (oper1 == 4 && oper2 == 3) {
		cost1min = 0.65;
		cost = cost1min*min;
		cout << endl;
		cout << "Стоимость 1 минуты с  BELTELECOM на LIVE : " << cost1min << " р." << endl;
		cout << "Стоимость " << min << " минут = " << cost << " р." << endl;
	}
	else if (oper1 == 4 && oper2 == 4) {
		cost1min = 0.87;
		cost = cost1min*min;
		cout << endl;
		cout << "Стоимость 1 минуты с  BELTELECOM на BELTELECOM : " << cost1min << " р." << endl;
		cout << "Стоимость " << min << " минут = " << cost << " р." << endl;
	}

	_getch();
	return;

}