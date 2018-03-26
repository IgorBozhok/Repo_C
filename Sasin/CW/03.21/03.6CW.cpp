#include <conio.h>
#include <iostream>
#include <string.h>
using namespace std;
void main()
{

	setlocale(LC_ALL, "Rus");
	char* strPtr = new char[3000]("London is the capital of Great Britain, its political, economic and cultural centre. It's one of the largest cities in the world. Its population is more than million people. London is situated on the river Thames. The city is very old and beautiful. It was founded more than two thousand years ago.");
	int choise;
	cout << "Есть текст..................";
	cout << "London is the capital of Great Britain, its political, economic and cultural centre. It's one of the largest cities in the world. Its population is more than million people. London is situated on the river Thames. The city is very old and beautiful. It was founded more than two thousand years ago." << endl;
	cout << endl;
	cout <<"1. Коичество точек и запятых."<< endl;
	cout <<"2. Посчитайте количество предложений в тексте."<< endl;
	cout <<"3. Подсчитайте количество вхождений слова"<< endl;
	cout <<"4. "<< endl;
	cout <<"5. "<< endl;

	do {
		cout << "Ваш выбор : " << endl;
		cin >> choise;
	} while (choise <= 0 || choise > 5);

	switch (choise)
	{

	case 1:
	{
		int a = 0;
		for (int i = 0; i < strlen(strPtr); i++) {
			if (strPtr[i] == '.' || strPtr[i] == ',') {
				a++;
			}
		}
		cout << " Количество точек и запятых в тексте : " << a << endl;
		break;
	}
	case 2:
	{
		int b = 0;
		for (int i = 0; i < strlen(strPtr); i++) {
			if (strPtr[i] == '.' || strPtr[i] == '!' || strPtr[i] == '?') {
				b++;
			}
		}
		cout << " Количество предложений в тексте : " << b << endl;
		break;
	}
	case 3:
	{
		char mas[1000];
		char* res = nullptr;
		int c = 0;
		cout << "Ввидите слово : " << endl;
		cin >> mas;
		do {
			res = strstr(strPtr, mas);
			if (res == nullptr) {
				break;
			}
			c++;
			res++;
		} while (true);
		cout << c << endl;
		cout << res << endl;
	}
	}
	_getch();

	return;
}



