#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <iostream>
#include <time.h>
#include <stdlib.h>
#define Size 10

using namespace std;

struct labrary
{
	char* name = nullptr;
	char* author = nullptr;
	char* bookHome = nullptr;
	char* genre = nullptr;
};
void init(labrary& labMass)
{
	labMass.name = new char[50];
	labMass.author = new char[50];
	labMass.bookHome = new char[50];
	labMass.genre = new char[50];

	cout << "Введите название книги : ";
	gets_s(labMass.name, 50);

	cout << "Введите автора этой книги : ";
	gets_s(labMass.author, 50);

	cout << "Введите ее издательство :";
	gets_s(labMass.bookHome, 50);

	cout << "Введите жанр книги : ";
	gets_s(labMass.genre, 50);
	cout << endl;
	return;
}
void redStr(char* str)
{
	cin.clear();
	cin.ignore();
	cout << "Old inform: ";
	puts(str);
	cout << "Enter new inform: ";
	gets_s(str, 50);
	return;
}
void edit(labrary& labMass)
{
	char c;
	cout << "Name Y/N: ";
	cin >> c;
	if (c == 'Y' || c == 'y')
	{
		redStr(labMass.name);
	}

	cout << "Author Y/N: ";
	cin >> c;
	if (c == 'Y' || c == 'y')
	{
		redStr(labMass.author);
	}

	cout << "bookHome Y/N: ";
	cin >> c;
	if (c == 'Y' || c == 'y')
	{
		redStr(labMass.bookHome);

	}

	cout << "Kind Y/N: ";
	cin >> c;
	if (c == 'Y' || c == 'y')
	{
		redStr(labMass.genre);

	}
	return;
}
void Out(labrary* labMass, int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << i + 1 << ") Книга : " << labMass[i].name << ". Автора : " << labMass[i].author << ". Издательство : " << labMass[i].bookHome << ". Жанр : " << labMass[i].genre << "." << endl;
	}
}
void FineBookAuthor(labrary* LabMass, int size)
{
	int k = 0;
	char FineBA[100];
	cout << "Введите интересующего автора : ";
	cin >> FineBA;
	for (int i = 0; i < size; i++)
	{
		if (strcmp(LabMass[i].author, FineBA) == 0)
		{
			cout << "Вот книга '" << LabMass[i].name << "' автора " << LabMass[i].author << endl << endl;
			k = 1;
			break;
		}
	}
	if (k == 0)
	{
		cout << "Автора " << FineBA << " у нас нет в библиотеке." << endl << endl;
	}
}
void FineBookName(labrary* LabMass, int size)
{
	int k = 0;
	char FineBN[100];
	cout << "Введите название интересующей  книги : ";
	cin >> FineBN;
	for (int i = 0; i < size; i++)
	{
		if (strcmp(LabMass[i].name, FineBN) == 0)
		{
			cout << "Вот автор " << LabMass[i].author << " книги '" << LabMass[i].name << "'." << endl << endl;
			k = 1;
			break;
		}
	}
	if (k == 0)
	{
		cout << "Книги '" << FineBN << "' e у нас в библиотеки нет." << endl << endl;
	}
}
int cmp_by_name(const void * a, const void * b)
{
	return strcmp(((struct labrary*)a)->name, ((struct labrary*)b)->name);
}
int cmp_by_author(const void * a, const void * b)
{
	return strcmp(((struct labrary*)a)->author, ((struct labrary*)b)->author);
}
int cmp_by_genre(const void * a, const void * b)
{
	return strcmp(((struct labrary*)a)->genre, ((struct labrary*)b)->genre);
}
void _switch(int choice, labrary* labMass, int size)
{
	switch (choice)
	{
	case 1:
	{
		int choice;
		cout << "Номер книги:";
		cin >> choice;
		if (choice >= 0)
		{
			if (choice < Size+1)
			{
				edit(labMass[choice-1]);
			}
		}
		cout << endl;
		break;
	}
	case 2:
	{
		cout << endl;
		Out(labMass, size);
		break;
	}
	case 3:
	{
		cout << endl;
		FineBookAuthor(labMass, size);
		break;
	}
	case 4:
	{
		cout << endl;
		FineBookName(labMass, size);
		break;
	}
	case 5:
	{
		cout << endl;
		qsort(labMass, Size, sizeof(struct labrary), cmp_by_name);
		Out(labMass, Size);
		break;
	}
	case 6:
	{
		cout << endl;
		qsort(labMass, Size, sizeof(struct labrary), cmp_by_author);
		Out(labMass, Size);
		break;
	}
	case 7:
	{
		cout << endl;
		qsort(labMass, Size, sizeof(struct labrary), cmp_by_genre);
		Out(labMass, Size);
		break;
	}
	}
}

void main()
{
	setlocale(LC_ALL, "RUS");
	labrary* LabMass = new labrary[Size];
	cout << "			  Создайте Библиотеку «Книга»." << endl;
	cout << "		Введите 10 Книг(название, автор, издательство, жанр)." << endl;
	for (int i = 0; i < Size; i++)
	{
		init(LabMass[i]);
	}
	system("cls");
	int Choice1 = 1;
	int Choice;
	cout << endl << endl;
	while (Choice1 == 1)
	{
		cout << endl;
		cout << "                                 МЕНЮ " << endl;
		cout << "1. Редактировать книгу." << endl;
		cout << "2. Печать всех книг." << endl;
		cout << "3. Поиск книг по автору." << endl;
		cout << "4. Поиск книг по названию." << endl;
		cout << "5. Сортировка по названию книг." << endl;
		cout << "6. Сортировка по автору." << endl;
		cout << "7. Сортировка по жанру." << endl;
		cout << endl;
		cho:cout << "Ваш выбор : ";
		cin >> Choice;
		if (Choice < 1 || Choice>7)
		{
			goto cho;
		}
		_switch(Choice, LabMass , Size);
		cout << endl;
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
	_getch();
	return;
}