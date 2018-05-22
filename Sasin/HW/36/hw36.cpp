
#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <math.h>
#define N 5
using namespace std;

struct Struct1
{
	int x1;
	int x2;
	int y1;
	int y2;
};
void funMStruct(Struct1 mass[N])
{
	
	double res;
	for (int i = 0; i < N; i++)
	{
		cout << "Enter x1" << endl;
		cin >> mass[i].x1;
		cout << "Enter x2" << endl;
		cin >> mass[i].x2;
		cout << "Enter y1" << endl;
		cin >> mass[i].y1;
		cout << "Enter y2" << endl;
		cin >> mass[i].y2;
		res = sqrt(pow((mass[i].x1 - mass[i].x2), 2) + pow((mass[i].y1 - mass[i].y2), 2));
		cout << "Расстояние между двумя точками : " << res << endl;
	}
}
void FunUStruct(Struct1* mass)
	{
	double res = 0.0;
	for (int i = 0; i < N; i++)
	{
		cout << "Enter x1" << endl;
		cin >> mass[i].x1;
		cout << "Enter x2" << endl;
		cin >> mass[i].x2;
		cout << "Enter y1" << endl;
		cin >> mass[i].y1;
		cout << "Enter y2" << endl;
		cin >> mass[i].y2;
		res = sqrt(pow((mass[i].x1 - mass[i].x2), 2) + pow((mass[i].y1 - mass[i].y2), 2));
		cout << "Расстояние между двумя точками : " << res << endl;
	}
}
void DelMass(Struct1* mass)
{
	delete[]mass;
}
void main()
{
	setlocale(LC_ALL, "rus");
	Struct1 mass[N];
	Struct1* mass1= new Struct1[N];

	int choice;

	cout << "Программу вычисляет расстояние между двумя точками, следующими друг за другом для массива структур и для указателя на структуру)." << endl;
	cout << "1. Для массива структур " << endl;
	cout << "2. Для указателя структур " << endl;
	cho: cout << "Ваш выбор :";
	cin >> choice;
	if (choice <= 0 || choice > 2)
	{
		goto cho;
	}
	switch (choice)
	{
	case 1:
	{
		funMStruct(mass);
		break;
	}
	case 2:
	{
		FunUStruct(mass1);
		DelMass(mass1);
		break;
	}
	}
	_getch();
	return;
}