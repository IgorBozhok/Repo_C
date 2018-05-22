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
fopen_s(&f, "Text.txt", "w");

res = fopen_s(&f, "Text.txt", "w");

for (int i = 0; i < 26; i++)
{
	fputc('A'+i, f);
	fputc('a' + i, f);
	fputc(' ', f);
}
fputc('\n', f);

res = fclose(f);
if (res == EOF)
{
	cout << "Error";
	_getch();
	return;
}
_getch();
return;
}