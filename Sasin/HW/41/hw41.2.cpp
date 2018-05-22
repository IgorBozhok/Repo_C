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

	char * buffer = (char*)calloc(N, sizeof(char));

	res1 = fopen_s(&f1, "Text1.txt", "r");
	res2 = fopen_s(&f2, "Text2.txt", "w");

	int len = 0;
	int str = 0;
	int book = 0;
	int num = 0;
	while (fgets(buffer, N - 1, f1) != nullptr)
	{
		str++;
		len += strlen(buffer);
		printf_s("%s", buffer);

		for (int i = 0; i < len; i++)
		{
			if ((buffer[i] >= 'a' && buffer[i] <= 'z') || (buffer[i] >= 'A' && buffer[i] <= 'Z'))
			{
				book++;
			}
			if (buffer[i] >= '0' && buffer[i] <= '9')
			{
				num++;
			}
		}
	}
	len = len - str + 1;
	
	fputs("Количество символов: ", f2);
	fprintf_s(f2,"%i", len);
	fputs("\nКоличество строк: ", f2);
	fprintf_s(f2, "%i", str);
	fputs("\nКоличество букв: ", f2);
	fprintf_s(f2, "%i", book);
	fputs("\nКоличество цифр: ", f2);
	fprintf_s(f2, "%i", num);

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

	res1 = fclose(f1);
	res1 = fclose(f2);

	if (res1 == EOF)
	{
		cout << "Error1";
		_getch();
		return;
	}
	if (res2 == EOF)
	{
		cout << "Error1";
		_getch();
		return;
	}
	free(buffer);
	_getch();
	return;
}
