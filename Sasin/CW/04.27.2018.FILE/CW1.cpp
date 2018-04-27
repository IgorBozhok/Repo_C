/*
Позиционирование файлов 
  режим              начинает с...
r   rb                 начала
W   wb                 начала
a   ab                 конца

int fseek(FILE* _stream, long _Offset, int _origin);

Ф-я fseek перемещает указатель позиции в файле. Устанавливает внутренний указаель положения в файлеб в новую позицию

запимь

*/

#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 32


using namespace std;
/*
void main()
{	

№1
	FILE *S;
	FILE *D;

	char * buffer = (char*)calloc(N, sizeof(char));


	fopen_s(&S, "Text.txt", "r");
	fopen_s(&D, "Text1.txt", "w");

	while (fgets(buffer, N - 1, S) != nullptr)
	{

	printf_s("%s", buffer);
	fputs(buffer, D);
	
	
	for (size_t i = 0; i < N; i++)
	{
		buffer[i] = '\0';
	}
	
	}
	

	

	fclose(S);
	fclose(D);
*/

/*

№2

	FILE *f;
	fopen_s(&f, "Text.txt", "w");
	fputs("This is sample.", f);
	fseek(f, -6, SEEK_END);
	fputs("parta", f);

	fclose(f);
*/


//№3 Чтение / запись бинарных файлов

	struct film
	{
		char name[16];
		int year;
	};

#define N 5


void main()
{
	film* library = new film[N];
	for (size_t i = 0; i < N; i++)
	{
		cout << "Enter name: ";
		cin >> library[i].name;
		cout << "Enter year: ";
		cin >> library[i].year;
	}

	FILE *f;
	int res = 0;
	fopen_s(&f, "Text.txt", "wb");
	res = fwrite(library, sizeof(film), N, f);
	if (res == N)
	{
		cout << "OK" << endl;
	}
	else
	{
		cout << "no Ok" << endl;
	}
	fclose(f);
	freopen_s(&f, "Text.txt", "rb", f);
	film twoFilms[2];
	do
	{
		res = fread(twoFilms, sizeof(film), 2, f);
		for (size_t i = 0; i < res; i++)
		{
			cout << "NAME: " << twoFilms[i].name << endl;
			cout << "Year: " << twoFilms[i].year << endl;
		}
	} while (res == 2);

	_getch();
	return;
}