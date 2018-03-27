#include <conio.h>
#include <iostream>
#include <string.h>
using namespace std;
void main()
{

	setlocale(LC_ALL, "Rus");

	char* strPtr = new char[3000]("London is the capital of Great Britain, its political, economic and cultural centre. It's one of the largest cities in the world. Its population is more than million people. London is situated on the river Thames. The city is very old and beautiful. It was founded more than two thousand years ago.");
	cout << "London is the capital of Great Britain, its political, economic and cultural centre. It's one of the largest cities in the world. Its population is more than million people. London is situated on the river Thames. The city is very old and beautiful. It was founded more than two thousand years ago." << endl;
	cout << endl;
	int size_strPtr;
	size_strPtr = strlen(strPtr);
	cout << size_strPtr;
	char* res = nullptr;
	char* strfide = new char[128];

	int size_new = 0;

	cout << endl << "strFide : " << endl;
	cin >> strfide;
	res = strPtr;
	res = strstr(strPtr, strfide);
	cout << res << endl;
	size_new = strlen(res);
	int size_strnew = size_strPtr - size_new;
	cout << size_strnew << endl;

	char* strnew= new char[3000];
	for (int i = 0; i < size_strnew; i++) {
	strnew[i] = strPtr[i];
	}
	for (int i = 0; i < size_strnew; i++) {
	cout << strnew[i];
	}

	char* str_enter = new char[128];
	char* res1 = nullptr;
	cin >> str_enter;
	/*
	res1 = res;
	res1 = strstr(res, ' ');
	cout << res1;*/
	
	_getch();

	return;
}
