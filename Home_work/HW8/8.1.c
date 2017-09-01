#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>
int main()
{
	setlocale(LC_ALL, "rus");
	srand(time(NULL));
	int num[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int mark = 0;
	int choice;
	int result, result1;
	int answer, answer1;
	printf_s("		Проверим как вы знаете таблицу умножения!\n");
	printf_s("\n Выберете уровень сложности.\n");
	printf_s("1) 5 Вопросов по таблице умножения. \n");
	printf_s("2) 10 Вопросов по таблице умножения. \n");
	printf_s("3) 5 Вопросов по арифметике. \n");
	do {
		printf_s("ваш выбор : \n");
		scanf_s("%d", &choice);
	} while (choice < 1 || choice > 3);
	switch (choice) {
	case 1:
		for (int i = 0; i < 5; ++i) {
			int num2 = 0 + rand() % 9;
			int num3 = 0 + rand() % 9;
			result1 = num[num2] * num[num3];
			printf_s("\n Сколько будет %d * %d = ", num[num2], num[num3]);
			scanf_s("%d", &answer);
			if (result1 == answer) {
				printf_s("\n Ваш ответ верный \n");
				mark = mark + 2;
			}
			else
			{
				printf_s("\n Ваш ответ не верный \n");
			}
			Sleep(500);
		}
		printf_s("\n Ваша оценка : %d \n", mark);
		break;
	case 2:
		for (int i = 0; i < 10; ++i) {
			int num2 = 0 + rand() % 9;
			int num3 = 0 + rand() % 9;
			result1 = num[num2] * num[num3];
			printf_s("\n Сколько будет %d * %d = ", num[num2], num[num3]);
			scanf_s("%d", &answer);
			if (result1 == answer) {
				printf_s("\n Ваш ответ верный \n");
				++mark;
			}
			else
			{
				printf_s("\n Ваш ответ не верный \n");
			}
			Sleep(500);
		}
		printf_s("\n Ваша оценка : %d \n ", mark);
		break;
	case 3:
		for (int i = 0; i < 3; ++i) {
			int num1 = 0 + rand() % 9;
			int num2 = 0 + rand() % 9;
			int num3 = 0 + rand() % 9;
			int num4 = 0 + rand() % 9;
			result = num[num1] * num[num2] + num[num3] * num[num4];
			printf_s("\n Сколько будет (%d * %d)+(%d * %d) = ", num[num1], num[num2], num[num3], num[num4]);
			scanf_s("%d", &answer);
			if (result == answer) {
				printf_s("\n Ваш ответ верный \n");
				mark = mark + 2;
			}
			else
			{
				printf_s("\n Ваш ответ не верный \n");
			}
			Sleep(500);

		}
		for (int i = 0; i < 2; ++i) {
			int num1 = 0 + rand() % 9;
			int num2 = 0 + rand() % 9;
			int num3 = 0 + rand() % 9;
			int num4 = 0 + rand() % 9;
			result1 = num[num1] * num[num2] - num[num3] * num[num4];
			printf_s("\n Сколько будет (%d * %d)-(%d * %d) = ", num[num1], num[num2], num[num3], num[num4]);
			scanf_s("%d", &answer1);
			if (result1 == answer1) {
				printf_s("\n Ваш ответ верный \n");
				mark = mark + 2;
			}
			else
			{
				printf_s("\n Ваш ответ не верный \n");
			}
			Sleep(500);

		}

		printf_s("\n Ваша оценка : %d \n ", mark);
		break;
	}
	return 0;
}