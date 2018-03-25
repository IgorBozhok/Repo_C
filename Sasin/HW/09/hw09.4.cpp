#include <stdio.h>
#include <conio.h>
#include <iostream>

using namespace std;

void main(void)
{
	setlocale(LC_ALL, "Russian");
	cout << "А нынешний список планет солнечной системы, в порядке удаления от солнца, выглядит следующим образом:" << endl;
	cout << endl;
	cout << "1. Меркурий." << endl;
	cout << "2. Венера." << endl;
	cout << "3. Земля." << endl;
	cout << "4. Марс." << endl;
	cout << "5. Юпитер." << endl;
	cout << "6. Сатурн." << endl;
	cout << "7. Уран." << endl;
	cout << "8. Нептун." << endl;
	cout << endl;

	int choice;

	do
	{
		cout << "Выберете номер планеты : " ;
		cin >> choice;
		
	} while (choice<=0 || choice>=9);

	switch (choice)
	{
	case 1:
	{
		cout << endl;
		cout << "Меркурий" << endl;
		cout << endl;
		break;
	}
	case 2:
	{
		cout << endl;
		cout << "Венера" << endl;
		cout << endl;
		break;
	}
	case 3:
	{
		cout << endl;
		cout << "Земля" << endl;
		cout << endl;
		break;
	}
	case 4:
	{
		cout << endl;
		cout << "Марс" << endl;
		cout << endl;
		break;
	}
	case 5:
	{
		cout << endl;
		cout << "Юпитер" << endl;
		cout << endl;
		break;
	}
	case 6:
	{
		cout << endl;
		cout << "Сатурн" << endl;
		cout << endl;
		break;
	}
	case 7:
	{
		cout << endl;
		cout << "Уран" << endl;
		cout << endl;
		break;
	}
	case 8:
	{
		cout << endl;
		cout << "Нептун" << endl;
		cout << endl;
		break;
	}
	
	}


	_getch();
	return;

}