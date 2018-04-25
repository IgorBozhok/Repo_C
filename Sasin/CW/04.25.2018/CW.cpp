#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


using namespace std;

struct  Stix
{
	char * name;
	char *avtor;
	int year;
};

void main()
{
	int answer = 0, count = 0;
	Stix *stix = nullptr;
	do {
		printf_s("Next?\n 1 - yes \n 0 - no\n");
		scanf_s("%i", &answer);
		if (!answer)
		{
			break;
		}
		count++;
		stix = (Stix*)realloc(stix, count * sizeof(Stix));
		stix[count - 1].name = (char*)calloc(80, sizeof(char));
		stix[count - 1].avtor = (char*)calloc(80, sizeof(char));
		printf_s("Enter name: ");
		char* name = stix[count - 1].name;
		gets_s(stix[count - 1].name, 80);
		gets_s(stix[count - 1].name, 80);
		printf_s("Enter avora: ");
		char* avtor = stix[count - 1].avtor;
		gets_s(stix[count - 1].avtor, 80);
		printf_s("Enter year: ");
		scanf_s("%i", &stix[count - 1].year);
	} while (true);

	system("cls");
	for (size_t i = 0; i < count; i++)
	{
		printf_s("%i Stix\n", i + 1);
		printf_s("%s\n", stix[i].name);
		printf_s("%s\n", stix[i].avtor);
		printf_s("%i\n", stix[i].year);
		printf_s("\n");
	}
	for (size_t i = 0; i < count; i++)
	{
		free(stix[i].name);
		free(stix[i].avtor);
	}

	free(stix);
	_getch();
	return;
}
