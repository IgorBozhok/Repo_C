#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


using namespace std;

void main()
{
	int res;
	FILE *f;
	long long int type[8] = { CHAR_MIN , CHAR_MAX ,SHRT_MIN, SHRT_MAX, INT_MIN, INT_MAX,LONG_MAX,LONG_MIN};

	res = fopen_s(&f, "Text.txt", "w");

	if (res != 0)
	{
		cout << "Error";
		_getch();
		return;
	}
	for (int i = 0; i < 8; i++)
	{
		fprintf(f, "%lli", type[i]);
		fputc(' ', f);

	}

	res = fclose(f);

	if (res == EOF)
	{
		cout << "Error1";
		_getch();
		return;
	}
	_getch();
	return;
}




