#include <stdio.h>
#include <conio.h>
#include <iostream>

using namespace std;

void main(void)
{
	setlocale(LC_ALL, "Russian");
	cout << "Тест: Как понять, склонны ли вы к лишнему весу ?" << endl;
	cout << endl;

	int result = 0;
	int choice;

	// 1

	cout << "Коллега в очередной раз зазывает вас испить чай с тортом. Вы в силах отказаться от угощения?" << endl;
	cout << endl;
	cout << "1. Нет." << endl;
	cout << "2. Да." << endl;
	cout << "3. Не знаю." << endl;
	cout << endl;

	do
	{
		cout << "Ваш выбор : ";
		cin >> choice;
	} while (choice<=0 || choice>=4);

	if (choice == 1)
	{
		result = result + 2;
	}
	else if (choice == 2)
	{
		result = result + 1;
	}
	
	// 2
	cout << endl;
	cout << "Коробка конфет может проваляться у вас в шкафу несколько месяцев?" << endl;
	cout << endl;
	cout << "1. Нет." << endl;
	cout << "2. Да." << endl;
	cout << "3. Иногда ." << endl;
	cout << endl;

	do
	{
		cout << "Ваш выбор : ";
		cin >> choice;
	} while (choice <= 0 || choice >= 4);

	if (choice == 1)
	{
		result = result + 2;
	}
	else if (choice == 2)
	{
		result = result + 1;
	}

	// 3

	cout << endl;
	cout << "В разгар производственного совещания вас посещают мысли о любимых блюдах?" << endl;
	cout << endl;
	cout << "1. Нет." << endl;
	cout << "2. Да." << endl;
	cout << "3. Иногда ." << endl;
	cout << endl;

	do
	{
		cout << "Ваш выбор : ";
		cin >> choice;
	} while (choice <= 0 || choice >= 4);

	if (choice == 1)
	{
		result = result + 1;
	}
	else if (choice == 2)
	{
		result = result + 2;
	}
	// 4

	cout << endl;
	cout << "Ради красивой фигуры вы готовы каждый день проходить часть дороги на работу пешком?" << endl;
	cout << endl;
	cout << "1. Нет." << endl;
	cout << "2. Да." << endl;
	cout << "3. Может быть." << endl;
	cout << endl;

	do
	{
		cout << "Ваш выбор : ";
		cin >> choice;
	} while (choice <= 0 || choice >= 4);

	if (choice == 1)
	{
		result = result + 1;
	}
	else if (choice == 2)
	{
		result = result + 2;
	}

	// 5

	cout << endl;
	cout << "Вы регулярно читаете на этикетках продуктов их состав?" << endl;
	cout << endl;
	cout << "1. Нет." << endl;
	cout << "2. Да." << endl;
	cout << "3. Иногда быть." << endl;
	cout << endl;

	do
	{
		cout << "Ваш выбор : ";
		cin >> choice;
	} while (choice <= 0 || choice >= 4);

	if (choice == 1)
	{
		result = result + 2;
	}
	else if (choice == 2)
	{
		result = result + 1;
	}
	cout << endl;
	cout << "Ознакомьтесь с выводами:" << endl;
	cout << endl;

	if (result < 5)
	{
		cout << "Вы застенчивый, не очень уверенный в себе человек. Вам трудно преодолеть влияние коллектива и принятые в семье правила питания. Если вокруг вас все едят много, предпочитают калорийную пищу, вы тоже поправитесь. Подумайте, возможно, стоит дополнить круг общения активными подругами, которые будут звать вас на прогулки или в бассейн?" << endl;
	}
	else if  (result >= 5 || result <= 7)
	{
		cout << "Вы знаете, как следить за собой, и успешно это делаете.Однако и у вас случаются периоды расслабления, когда вы набираете вес.Самый опасный период для этого – осень и зима, так что будьте внимательны!" << endl;
	}
	else if (result >= 8)
	{
		cout << " Или у вас шикарная фигура от природы, или вас не волнует ваш внешний вид. Однако беспорядочное питание и сидячий образ жизни могут повредить не только фигуре, но и здоровью. Подумайте о том, что будет через 10–15 лет, и попробуйте стать чуть ближе к здоровому образу жизни!" << endl;
	}

	_getch();
	return;

}
