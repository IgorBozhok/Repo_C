#include <stdio.h>
#include <conio.h>
#include <iostream>
using namespace std;

void main(void)

{
	/*char* strPtr = new char[128];
	gets_s(strPtr, 128);
	int sizeStr = 0;
	int i = 0;
	while (strPtr[i] != '\0');
	{
	sizeStr++;
	i++;

	}
	cout << endl << "Size" << sizeStr;
	_getch();

	return;

	Kopirovanie strok


	char* strPtr1 = new char[128];
	char* strPtr2 = new char[128];
	gets_s(strPtr1, 128);
	int i = 0;
	while (strPtr1[i] != '\0')
	{
		i++;
	}
	strPtr2[2] = '\0';
	cout << strPtr1 << " " << (int*)strPtr1 << endl;
	cout << strPtr2 << " " << (int*)strPtr2 << endl;
	_getch();
	return;
	

	Skladivanie strok

	char* strPtr1 = new char[128];
	char* strPtr2 = new char[128];
	char* strPtr3 = new char[256];
	gets_s(strPtr1, 128);
	gets_s(strPtr2, 128);
	int i = 0;
	while (strPtr1[i] != '\0')
	{
		strPtr3[i] = strPtr1[i];
		i++;
	}
	int j = 0;
	while (strPtr2[j] != '\0')
	{
		strPtr3[i] = strPtr2[j];
		i++;
		j++;
	}

	strPtr3[i] = '\0';
	cout << strPtr1 << endl;
	cout << strPtr2 << endl;
	cout << strPtr3 << endl;
	_getch();
	return;
	

	ZAMENA SIMVOLA

	char* strPtr = new char[128];
	char c_old = '*';
	char c_new = '*';
	gets_s(strPtr, 128);
	cin >> c_old;
	cin >> c_new;
	int i = 0;
	while (strPtr[i] != '\0')
	{
		if (strPtr[i] == c_old)
		{
			strPtr[i] = c_new;
		}
		i++;
	}
	cout << strPtr << endl;
	_getch();
	return;*/
	
	char* strPtr = new char[128];
	gets_s(strPtr, 128);
	//cin >> c_old;
	//cin >> c_new;
	int i = 0;
	int a = 0;
	int b = 0;
	int c = 0;
	for (int i = 0; i < strPtr[i]; i++) {

		if ('0' <= strPtr[i] && '9' >= strPtr[i]) {
			a++;
		}
	}
	for (int i = 0; i < strPtr[i]; i++) {

		if ('A' <= strPtr[i] && 'z' >= strPtr[i]) {
			b++;
		}
	}
	for (int i = 0; i < strPtr[i]; i++) {

		if ('NUL' <= strPtr[i] && '/' >= strPtr[i]) {
			c++;
		}
	
	}
	cout << a << endl;
	cout << b << endl;
	cout << c << endl;
	_getch();
	return;
	/*char* strPtr = new char[128];
	char c_del = '*';
	gets_s(strPtr, 128);
	cin >> c_del;
	int i = 0;
	while (strPtr[i] != '\0')
	{
		if (strPtr[i] == c_del)
		{
			int j = i;
			while (strPtr[j] != '\0')
			{
				strPtr[j] = strPtr[j + 1];
				j++;
			}
		}
		i++;
	}
	cout << strPtr << endl;
	_getch();
	return;*/
}