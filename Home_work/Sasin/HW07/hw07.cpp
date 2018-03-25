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
	
	cout << "Введите уровень продаж 1 менеджера :" << endl;
	cin >> sale1;
	cout << "Введите уровень продаж 1 менеджера :" << endl;
	cin >> sale2;
	cout << "Введите уровень продаж 1 менеджера :" << endl;
	cin >> sale3;
	
	// Определение зарплаты 1 менеджера

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

	// Определение зарплаты 2 менеджера

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

	// Определение зарплаты 2 менеджера

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
	
	// Определение лучшего менеджера и вывод результата  

	if (salary1 > salary2 && salary1 > salary3)
	{
		salary1 = salary1 + 200;
		cout << endl;
		cout << "Лучший 1 менеджер и его зарплата с премияй 200$ = "<< salary1 << "$" << endl;
		cout << "Зарплата 2 менеджер = " << salary2 << "$" << endl;
		cout << "Зарплата 3 менеджер = " << salary3 << "$" << endl;
	}
	
	if (salary2 > salary1 && salary2 > salary3)
	{
		salary2 = salary2 + 200;
		cout << endl;
		cout << "Лучший 2 менеджер и его зарплата с премияй 200$ = " << salary2 << "$" << endl;
		cout << "Зарплата 1 менеджер = " << salary1 << "$" << endl;
		cout << "Зарплата 3 менеджер = " << salary3 << "$" << endl;
	}
	
	if (salary3 > salary1 && salary3 > salary2)
	{
		salary3 = salary3 + 200;
		cout << endl;
		cout << "Лучший 3 менеджер и его зарплата с премияй 200$ = " << salary3 << "$" << endl;
		cout << "Зарплата 1 менеджер = " << salary1 << "$" << endl;
		cout << "Зарплата 2 менеджер = " << salary2 << "$" << endl;
	}
	
	_getch();
	return;
}
