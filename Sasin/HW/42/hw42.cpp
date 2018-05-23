#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <iostream>
#include <time.h>
#include <stdlib.h>
#define SIZE 100
using namespace std;

struct Employees
{
	char* surname = nullptr;
	char* post = nullptr;
	int salary;
};

void init(Employees& employees);
void Out(Employees* employees, int count);
void edit(Employees* employees,int i);
void Delet(Employees* employees, int& count);
void FineEmplSurname(Employees* employees, int count);
void _switch(int choice, Employees* employees, int& count, int &i);

void main()
{
	setlocale(LC_ALL, "rus");
	int count = 0;
	int i = 0;
	int Choice = 1;
	int res;
	Employees* employees = new Employees[SIZE];
	FILE* f1;
	FILE* f2;
	res = fopen_s(&f1, "Text.txt", "ab");
	if (res == EOF)
	{
		cout << "Error";
		_getch();
		return;
	}
	res = fopen_s(&f2, "Text1.txt", "r+");
	if (res == EOF)
	{
		cout << "Error";
		_getch();
		return;
	}

	while (Choice == 1)
	{
		cout << endl;
		cout << "                                 МЕНЮ " << endl;
		cout << "1. Добовляем сотрудников." << endl;
		cout << "2. Ввыводим список сотрудников." << endl;
		cout << "3. Редактирование данных сотрудника." << endl;
		cout << "4. Удаление сотрудника." << endl;
		cout << "5. Поиск сотрудника по фамилии." << endl;
		cout << endl;
		cho:cout << "Ваш выбор : ";
		cin >> Choice;
		if (Choice < 1 || Choice>5)
		{
			goto cho;
		}
		_switch(Choice, employees, count,i);
		cout << endl;
		cout << "Продолжим работу со списком ? Да - 1, Нет - 0" << endl;
		ch:cout << "Ваш выбор :";
		cin >> Choice;
		if (Choice != 0)
		{
			if (Choice != 1)
			{
				goto ch;
			}
		}
	}
	res = fwrite(employees, sizeof(Employees), count, f1);
	if (res == count)
	{
		cout << "OK" << endl;
	}
	else
	{
		cout << "no Ok" << endl;
	}
	fprintf(f2, "%d \n%d", count, i);
	fclose(f1);
	fclose(f2);
	_getch();
	return;
}

void init(Employees& employees)
{
	employees.surname = new char[50];
	employees.post = new char[50];

	cout << "Enter surname: ";
	gets_s(employees.surname, 50);
	gets_s(employees.surname, 50);
	cout << "Enter post: ";
	gets_s(employees.post, 50);

	cout << "Enter salary: ";
	cin >> employees.salary;
	cout << endl;
	return;
}
void edit(Employees* employees,int count)
{
	int i = 0;
	Out(employees, count);
	cout << "Выберете сотрудника: " << endl;
	cin >> i;
	i = i - 1;
	char c;
	cout << "surname Y/N: ";
	cin >> c;
	if (c == 'Y' || c == 'y')
	{
		cout << "Old inform: " << endl;
		puts(employees[i].surname);
		cout << "Enter new inform: " << endl;
		gets_s(employees[i].surname, 50);
		gets_s(employees[i].surname, 50);
	}

	cout << "post Y/N: ";
	cin >> c;
	if (c == 'Y' || c == 'y')
	{
		cout << "Old inform: " << endl;
		puts(employees[i].post); 
		cout << "Enter new inform: " << endl;
		gets_s(employees[i].post, 50);
		gets_s(employees[i].post, 50);
	}

	cout << "salary Y/N: ";
	cin >> c;
	if (c == 'Y' || c == 'y')
	{
		cout << "Old inform: " << employees[i].salary << "$" <<  endl;
		cout << "Enter new inform: " << endl;
		cin >> employees[i].salary;

	}
	return;
}
void Out(Employees* employees, int count)
{
	for (int i = 0; i < count; i++)
	{
		cout << i + 1 << ") surname : " << employees[i].surname << ". post : " << employees[i].post << ". salary : " << employees[i].salary << endl;
	}
	return;
}
void FineEmplSurname(Employees* employees, int count)
{
	Out(employees, count);
	int k = 0;
	char FineES[100];
	cout << "Введите интересующего сотрудника : ";
	cin >> FineES;
	for (int i = 0; i < count; i++)
	{
		if (strcmp(employees[i].surname, FineES) == 0)
		{
			cout << "Вот сотрудник '" << employees[i].surname <<" "<< employees[i].post<<" "<< employees[i].salary << endl;
			k = 1;
			break;
		}
	}
	if (k == 0)
	{
		cout << "Cотрудника " << FineES << " у нас нет в списке." << endl << endl;
	}
	return;
}
void Delet(Employees* employees, int& count)
{
	int i = 0;
	int k = 0;
	Out(employees, count);
	cout << "Выберете сотрудника: " << endl;
	cin >> i;
	i = i - 1;
	k = i;
	for (int i=k; k < count-k; k++)
	{
			employees[i].surname = employees[i + 1].surname;
			employees[i].post = employees[i + 1].post;
			employees[i].salary = employees[i + 1].salary;
	}
	count--;
	return;
}
void _switch(int choice, Employees* employees, int& count, int & i)
{
	switch (choice)
	{
	case 1:
	{
		int Choice1 = 1;
		while (Choice1 == 1)
		{
			init(employees[i]);
			count++;
			i++;
			cout << "Продолжим дальше ? Да - 1, Нет - 0" << endl;
		ch:cout << "Ваш выбор :";
			cin >> Choice1;
			if (Choice1 != 0)
			{
				if (Choice1 != 1)
				{
					goto ch;
				}
			}
		}
		break;
	}
	case 2:
	{
		Out(employees, count);
		break;
	}
	case 3:
	{
		edit(employees, i);
		break;
	}
	case 4:
	{
		Delet(employees, count);
		break;
	}
	case 5:
	{
		FineEmplSurname(employees, count);
		break;
	}
	}
	return;
}