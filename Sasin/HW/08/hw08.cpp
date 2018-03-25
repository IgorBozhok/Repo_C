#include <stdio.h>
#include <conio.h>
#include <iostream>
using namespace std;

void main(void)
{
	setlocale(LC_ALL, "Russian");

	
	int Jan = 31;  
	int Feb = 28;
	int Mar = 31;
	int Apr = 30;
	int M = 31;
	int Jun = 30;
	int Jul = 31;
	int Aug = 31;
	int Sep = 30;
	int Oct = 31;
	int Nov= 30;
	int Dec= 31;
	int day;

	// Выюор месяца и дня

	cout << "1)  January   (31) " << endl;
	cout << "2)  February  (28) " << endl;
	cout << "3)  March     (31) " << endl;
	cout << "4)  April     (30) " << endl;
	cout << "5)  May       (31) " << endl;
	cout << "6)  June      (30) " << endl;
	cout << "7)  Jule      (31) " << endl;
	cout << "8)  August    (31) " << endl;
	cout << "9)  September (30) " << endl;
	cout << "10) October   (31) " << endl;
	cout << "11) November  (30) " << endl;
	cout << "12) December  (31) " << endl;
	cout << endl;
	cout << " Выберите месяц  " << endl;
	cout << endl;
	enum months { January = 1, February, March, April, May, June, Jule, August, September, October, November, December };
	int months;
	cin >> months;
	cout << endl;
	cout << "Выберите день  " << endl;
	cout << endl;
	cin >> day;

	// начало оператора switch

	switch (months)
	{
		case January:
		{
			cout << Jan -day + Feb + Mar + Apr + M + Jun + Jul + Aug + Sep + Oct + Nov + Dec << " дней осталось до нового года " << endl;
			break;
		}
		case February:
		{
			cout << Feb - day + Mar + Apr + M + Jun + Jul + Aug + Sep + Oct + Nov + Dec << " дней осталось до нового года " << endl;
			break;
		}
		case March:
		{
			cout << Mar - day + Apr + M + Jun + Jul + Aug + Sep + Oct + Nov + Dec << " дней осталось до нового года " << endl;
			break;
		}
		case April:
		{
			cout << Apr - day + M + Jun + Jul + Aug + Sep + Oct + Nov + Dec << " дней осталось до нового года " << endl;
			break;
		}
		case May:
		{
			cout << M - day + Jun + Jul + Aug + Sep + Oct + Nov + Dec << " дней осталось до нового года " << endl;
			break;
		}
		case June:
		{
			cout << Jun - day + Jul + Aug + Sep + Oct + Nov + Dec << " дней осталось до нового года " << endl;
			break;
		}
		case Jule:
		{
			cout << Jul - day + Aug + Sep + Oct + Nov + Dec << " дней осталось до нового года " << endl;
			break;
		}
		case August:
		{
			cout << Aug - day + Sep + Oct + Nov + Dec << " дней осталось до нового года " << endl;
			break;
		}
		case September:
		{
			cout << Sep - day + Oct + Nov + Dec << " дней осталось до нового года " << endl;
			break;
		}
		
		case October:
		{
			cout << Oct - day + Nov + Dec << " дней осталось до нового года " << endl;
			break;
		}
		case November:
		{
			cout << Nov - day + Dec << " дней осталось до нового года " << endl;
			break;
		}
		case December:
		{
			cout << Dec - day << " дней осталось до нового года " << endl;
			break;
		}
		default: // если count равно любому другому значению
			cout << "Неправильный ввод" << endl;

	}
	_getch();
	return;

}