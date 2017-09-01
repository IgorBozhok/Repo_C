#include <stdio.h>
#include <math.h>
#include <cstdbool>
#include <locale.h>
#include <conio.h>

int main()
{
	setlocale(LC_ALL, "rus");
	char sign;
	sign = 'sign';
	printf_s("Введите символ : ");
	scanf_s("%c", &sign);
	//printf("%c = %d\n", sign, sign);
	if (sign >= 65 && sign <= 90 || sign >= 97 && sign <= 122) {
	printf_s("%c - Буква \n",sign);
	}
	else if (sign >= 48 && sign <= 57 )
	{
	printf_s("%c - Цифра \n", sign);
	}
	else if (sign>=33 && sign<=36 || sign>=38 && sign<=41 || sign==44 || sign==46 || sign==58 || sign==59 || sign==63 || sign==64 || sign>=91 && sign<=96 || sign>=123 && sign<=126)
	{
	printf_s("%c - Знак препинания и другое..... \n ",sign);
	}
	else if (sign == 47 || sign >= 60 && sign <= 62 || sign == 42 || sign == 43 || sign == 45 || sign == 37)
	{
		printf_s("%c - Арифметический знак..... \n ", sign);
	}
	else if (sign < 0)
	{
		printf_s("Русская буква \n");
	}
	
	return 0;
}