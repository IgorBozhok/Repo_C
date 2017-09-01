#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>


void Throw(int Dice) {
	switch (Dice)  {
	case 1:
		printf_s("===========\n");
		printf_s("|         |\n");
		printf_s("|         |\n");
		printf_s("|    *    |\n");
		printf_s("|         |\n");
		printf_s("|         |\n");
		printf_s("===========\n");
		break;
	case 2:
		printf_s("===========\n");
		printf_s("|         |\n");
		printf_s("|    *    |\n");
		printf_s("|         |\n");
		printf_s("|    *    |\n");
		printf_s("|         |\n");
		printf_s("===========\n");
		break;
	case 3:
		printf_s("===========\n");
		printf_s("|         |\n");
		printf_s("|   *     |\n");
		printf_s("|    *    |\n");
		printf_s("|     *   |\n");
		printf_s("|         |\n");
		printf_s("===========\n");
		break;
	case 4:
		printf_s("===========\n");
		printf_s("|         |\n");
		printf_s("|  *   *  |\n");
		printf_s("|         |\n");
		printf_s("|  *   *  |\n");
		printf_s("|         |\n");
		printf_s("===========\n");
		break;
	case 5:
		printf_s("===========\n");
		printf_s("|         |\n");
		printf_s("|  *   *  |\n");
		printf_s("|    *    |\n");
		printf_s("|  *   *  |\n");
		printf_s("|         |\n");
		printf_s("===========\n");
		break;
	case 6:
		printf_s("===========\n");
		printf_s("|         |\n");
		printf_s("|  *   *  |\n");
		printf_s("|  *   *  |\n");
		printf_s("|  *   *  |\n");
		printf_s("|         |\n");
		printf_s("===========\n");
		break;
	}
}


int Res() {
	srand(time(NULL));
	int Dice_1 = 1 + rand() % 6;
	Throw(Dice_1);
	int Dice_2 = 1 + rand() % 6;
	Throw(Dice_2);
	int Result = Dice_1 + Dice_2;
	printf_s("Счет = %d.  \n\n", Result);
	return Result;
}
void main() {
	setlocale(LC_ALL, "rus");
	srand(time(NULL));
	printf_s("Привет! Давай поиграем в кубики?\n\n");
	char Enter;
	int ManScore = 0;
	int CompScore = 0;
	printf_s("Давай выберем кто первый кидает кости !\n\n");
	do {
		printf_s("Нажмите Enter!\n");
		scanf_s ("%c",&Enter);
	} while (Enter != '\n');
	int ManRes, CompRes;
	do {
		printf_s("Ваш ход! Бросайте кубик! \n");
		ManRes = 1 + rand() % 6;
		Sleep(1000);
		Throw(ManRes);
		printf_s("Ваш результат : %d \n", ManRes);
		printf_s("\n...Теперь компьютер \n");
		CompRes = 1 + rand() % 6;
		Sleep(1000);
		Throw(CompRes);
		printf_s("Результат комьютера : %d \n", CompRes);
		Sleep(2000);
	} while (ManRes == CompRes);
	
	if (ManRes>CompRes) {
		printf_s("\n Вы начинаете первым !!!\n\n"); 
		for (int i = 0; i < 3; ++i) {
			printf_s("Ваш ход! Бросайте кубик! ");
			do {
				printf_s("(нажмите Enter)\n");
				scanf_s("%c", &Enter);
			} while (Enter != '\n');
			ManScore += Res();
			Sleep(1000);
			printf_s("Ход комьютера \n");
			do {
				printf_s("(нажмите Enter)\n");
				scanf_s("%c", &Enter);
			} while (Enter != '\n');
			CompScore += Res();
			Sleep(1000);


		}
		printf_s("Ваш общий счет : %d \n", ManScore);
		printf_s("Общий счет комьютера : %d \n",CompScore);
	}
	else if (ManRes < CompRes) {
		printf_s("\n Комьютер начинает первым !!!\n\n");
		for (int i = 0; i < 3; ++i) {
			printf_s("Ход комьютера \n");
			do {
				printf_s("(нажмите Enter)\n");
				scanf_s("%c", &Enter);
			} while (Enter != '\n');
			CompScore += Res();
			Sleep(1000);
			printf_s("Ваш ход! Бросайте кубик! ");
			do {
				printf_s("(нажмите Enter)\n");
				scanf_s("%c", &Enter);
			} while (Enter != '\n');
			ManScore += Res();
			Sleep(1000);
		}
		printf_s("Ваш общий счет : %d \n", ManScore);
		printf_s("Общий счет комьютера : %d \n", CompScore);

	}
	if (ManScore == CompScore) {
		printf_s("\n\n Ничья! \n\n");
	}
	else if (ManScore>CompScore) {
		printf_s("\n\n Вы выйграли !\n\n");
		}
		else if (ManScore<CompScore) {
			printf_s("\n\n Комьютер выйграл !\n\n");
		}
	}

