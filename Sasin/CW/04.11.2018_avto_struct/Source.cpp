
#include <stdio.h>
#include <iostream>
#include <conio.h>
#include <time.h>

using namespace std;

struct Car
{
	char madeIn[15];
	char brand[15];
	char year[15];
};

void init(Car *a, int size)
{
	for (int i = 0; i < size - 1; i++)
	{

		cout << i + 1 << ". " << a->madeIn << " " << a->brand << " " << a->year << " год." << endl;
	}
}
void init1(Car *a, int size)
{
	for (int i = 0; i < size - 1; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << j + 1 << ". " << a[j].madeIn;//<< " " << a->brand << " " << a->year << " год." << endl;
		}
	}
}
void main()
{
	setlocale(LC_ALL, "RUS");
	int choice = 1;
	int size = 1;
	Car * amount = new Car[1];
	Car * amount1 = nullptr;
	while (choice)
	{
		if (size == 1)
		{
			cout << "Производитель автомобиля : ";
			cin >> amount[size - 1].madeIn;
			cout << "Марка автомобиля :";
			cin >> amount[size - 1].brand;
			cout << "Год автомобиля :";
			cin >> amount[size - 1].year;
		}
		else
		{
			Car * amount1 = new Car[size - 1];
			for (int i = 0; i < size; i++)
			{
				amount1[i].madeIn = amount[i].madeIn;
				amount1[i].brand = amount[i].brand;
				amount1[i].year = amount[i].year;
				cout << "Производитель автомобиля : ";
				cin >> amount1[size - 1].madeIn;
				cout << "Марка автомобиля :";
				cin >> amount1[size - 1].brand;
				cout << "Год автомобиля :";
				cin >> amount1[size - 1].year;

			}
		}
		size++;

	ch:cout << "Внести еще данные - 1, выход - 0: ";
		cin >> choice;

		if (choice != 0)
		{
			if (choice != 1)
			{
				goto ch;
			}
		}
	}

	init1(amount, size);

	_getch();
	return;
}