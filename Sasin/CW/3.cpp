/*#include <iostream>
#include <conio.h>
#include <stdio.h>


using namespace std;
*/
/*
struct car
{
	struct wheel
	{
		int D;
		int wdth;
		int prof;
	};
	wheel wheels[4];
};
int main()

{
	car myCar;
	for (int i = 0; i < 4; i++)

	{
		myCar.wheels[i] = { 15,185,65 };
	}

	_getch();
	return 0;
}
*/
// Объединения и битовые поля

// Объединения - это структура . в которой все поля занимают один и тот же участок памяти.
// В структурах поля в памяти следуют друг за другом.
// struct:
// поле 1          поле 2          .....   поле #
//
// union:
// поле 1
// поле 2
// ......
// поле #

// Структура :
/*
struct structTest
{
	int i = 0;
	char masC[3];
	double *ptrD;
	bool b;
};
*/

// Объединения :
/*
union unionTest
{
	int i = 0;
	char masC[3];
	double *ptrD;
	bool b;
};
*/
/*
union itStep
{
	long int field1;
	short int field2;
	char field3[4];
};

void main()
{
	itStep userUnion;
	userUnion.field3[0] = 69;
	userUnion.field3[1] = 0;
	userUnion.field3[2] = 0;
	userUnion.field3[3] = 0;

	cout << "field1 = " << userUnion.field1 << endl;
	cout << "field2 = " << userUnion.field2 << endl;
	cout << "field3 = " << userUnion.field3[0] << endl;

	userUnion.field1 = 6;

	cout << "field1 = " << userUnion.field1 << endl;
	cout << "field2 = " << userUnion.field2 << endl;
	cout << "field3 = " << userUnion.field3[0] << endl;

	_getch();
	return;
	
}
*/
// преобразование типов 
/*
union itStep
{
	char c;
	int i;
};
*/
/*
void main()
{
	itStep userUnion;
	userUnion.i = 0 ;
	userUnion.c = 'A';
	cout << userUnion.i << endl;
	userUnion.i = 66;
	cout << userUnion.c << endl;
	_getch();
	return;
}
// Битовые поля 
// В языке С можно задавать полям размером в битах. Такие поля и называются битовыми полями.
// Они должны иметь тип singned int, unsigned int или int.
*/
/*
struct DateTime {
	unsigned short Day:5;
	unsigned short Mouth:4;
	unsigned short Year:7;
	unsigned short Hour:5;
	unsigned short Minute:6;
	unsigned short Second:6;
};

int main()
{
	DateTime d = { 9, 4, 18, 21, 20, 0 };
	cout << "Day: " << d.Day << endl;
	cout << "Mouth: " << d.Mouth << endl;
	cout << "Year: " << d.Year << endl;
	cout << "Hour: " << d.Hour << endl;
	cout << "Minute: " << d.Minute << endl;
	cout << "Second: " << d.Second << endl;
	cout << "Size of DataTime is: " << sizeof(d) << endl;
	_getch();
	return 0;
}*/

