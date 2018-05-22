#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#define N 200

using namespace std;

void main()
{
	setlocale(LC_ALL, "RUS");
	int res1;
	int res2;

	FILE *f1;
	FILE *f2;

	char * buffer1 = (char*)calloc(N, sizeof(char));
	char * buffer2 = (char*)calloc(N, sizeof(char));

	res1 = fopen_s(&f1, "Text1.txt", "r");
	res2 = fopen_s(&f2, "Text2.txt", "r");

	if (res1 != 0)
	{
		cout << "Error";
		_getch();
		return;
	}
	if (res2 != 0)
	{
		cout << "Error";
		_getch();
		return;
	}
	
	int a = 1;
	while (!feof(f1) && !feof(f2))
	{
		fgets(buffer1, N, f1);
		fgets(buffer2, N, f2);
		a++;
		if (strcmp(buffer1,buffer2))
		{
			cout << "Строка №" << a << " в файлах различается" << endl;
			printf_s("Строка 1 файла: %s \n", buffer1);
			printf_s("Строка 2 файла: %s\n", buffer2);
		}
		
	}

	res1 = fclose(f1);
	if (res1 == EOF)
	{
		cout << "Error1";
		_getch();
		return;
	}

	res2 = fclose(f2);
	if (res2 == EOF)
	{
		cout << "Error1";
		_getch();
		return;
	}
	free(buffer1);
	free(buffer2);
	_getch();
	return;
}