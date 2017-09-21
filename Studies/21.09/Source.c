#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
	
	int N;
	scanf_s("%d", &N);
	do
	{
		scanf_s("%d", &N);
	} while (N <= 0);
	char*mass = (char*)calloc(N, sizeof(char));
	gets(mass);
	printf_s("%s\n",mass);
	for (int i = 0; mass[i] != '\0'; ++i) {
		if (mass[i] == ' ')
		continue;
		mass[i]=mass[i]-32;
	}
	printf_s("%s", mass);
	free(mass);


	/*
	for (int i = 0; i < 5; ++i) {
		fflush(stdin);
		gets_s(str,10);
		//int res = scanf_s("%s",str, 10);
		int len = 0;
		for (int i = 0; str[i] != '\0'; ++i)
		{
			++len;
		}

		for (int i = 0; i < len / 2; ++i)
		{
			int tmp = str[i];
			str[i] = str[len - 1 - i];
			str[len - 1 - i] = tmp;
		}
		
		printf_s("%s\n", str);
	}*/
	
	
	return 0;
}