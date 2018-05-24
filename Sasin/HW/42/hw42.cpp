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
	char surname[50];
	char post[50];
	int salary;
};

// если использовать это структуру, то в бинарный файл записывает чушь ((((
struct buffer
{
	char* surname = nullptr;
	char* post = nullptr;
	int salary;
};

void init(Employees& employees);
void Out(Employees* employees, int count);
void edit(Employees* employees,int count);
//void Delet(Employees* employees, int& count); // не могу понять почему она не работает, если сипользовать структуру Employeess :-((((
void FineEmplSurname(Employees* employees, int count);
void _switch(int choice, Employees* employees, int& count);

void main()
{
	setlocale(LC_ALL, "rus");
	int count = 0;
	int countbuf=0;
	int i = 0;
	int Choice = 1;
	int res;
	FILE* f1;
	FILE* f2;
	res = fopen_s(&f1, "Text.txt", "rb");
	if (res == EOF)
	{
		cout << "Error";
		_getch();
		return;
	}
	res = fopen_s(&f2, "Text1.txt", "rb");
	if (res == EOF)
	{
		cout << "Error";
		_getch();
		return;
	}
	
	Employees* employees = new Employees[SIZE];
	fread(&count, sizeof(int), 1, f2);
	cout << count << endl;
	fread(employees, sizeof(Employees), count, f1);
	fclose(f1);
	fclose(f2);
	res = freopen_s(&f1, "Text.txt", "ab", f1);
	if (res == EOF)
	{
		cout << "Error";
		_getch();
		return;
	}
	res = freopen_s(&f2, "Text1.txt", "wb", f2);
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
		_switch(Choice, employees, count);
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
	
	fwrite(employees, sizeof(Employees), count, f1);
	fwrite(&count, sizeof(int), 1, f2);
	fclose(f1);
	fclose(f2);
	_getch();
	return;
}

void init(Employees& employees  )
{
	//employees.surname = new char[50];
	//employees.post = new char[50];

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
	{/*
			employees[i].surname = employees[i + 1].surname;
			employees[i].post = employees[i + 1].post;
			employees[i].salary = employees[i + 1].salary;*/
	}
	count--;
	return;
}
void _switch(int choice, Employees* employees, int& count)
{
	switch (choice)
	{
	case 1:
	{
		int Choice1 = 1;
		while (Choice1 == 1)
		{
			init(employees[count]);
			count++;
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
		edit(employees, count);
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