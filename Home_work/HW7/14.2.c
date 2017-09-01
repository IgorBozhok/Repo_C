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
	printf_s("���� = %d.  \n\n", Result);
	return Result;
}
void main() {
	setlocale(LC_ALL, "rus");
	srand(time(NULL));
	printf_s("������! ����� �������� � ������?\n\n");
	char Enter;
	int ManScore = 0;
	int CompScore = 0;
	printf_s("����� ������� ��� ������ ������ ����� !\n\n");
	do {
		printf_s("������� Enter!\n");
		scanf_s ("%c",&Enter);
	} while (Enter != '\n');
	int ManRes, CompRes;
	do {
		printf_s("��� ���! �������� �����! \n");
		ManRes = 1 + rand() % 6;
		Sleep(1000);
		Throw(ManRes);
		printf_s("��� ��������� : %d \n", ManRes);
		printf_s("\n...������ ��������� \n");
		CompRes = 1 + rand() % 6;
		Sleep(1000);
		Throw(CompRes);
		printf_s("��������� ��������� : %d \n", CompRes);
		Sleep(2000);
	} while (ManRes == CompRes);
	
	if (ManRes>CompRes) {
		printf_s("\n �� ��������� ������ !!!\n\n"); 
		for (int i = 0; i < 3; ++i) {
			printf_s("��� ���! �������� �����! ");
			do {
				printf_s("(������� Enter)\n");
				scanf_s("%c", &Enter);
			} while (Enter != '\n');
			ManScore += Res();
			Sleep(1000);
			printf_s("��� ��������� \n");
			do {
				printf_s("(������� Enter)\n");
				scanf_s("%c", &Enter);
			} while (Enter != '\n');
			CompScore += Res();
			Sleep(1000);


		}
		printf_s("��� ����� ���� : %d \n", ManScore);
		printf_s("����� ���� ��������� : %d \n",CompScore);
	}
	else if (ManRes < CompRes) {
		printf_s("\n �������� �������� ������ !!!\n\n");
		for (int i = 0; i < 3; ++i) {
			printf_s("��� ��������� \n");
			do {
				printf_s("(������� Enter)\n");
				scanf_s("%c", &Enter);
			} while (Enter != '\n');
			CompScore += Res();
			Sleep(1000);
			printf_s("��� ���! �������� �����! ");
			do {
				printf_s("(������� Enter)\n");
				scanf_s("%c", &Enter);
			} while (Enter != '\n');
			ManScore += Res();
			Sleep(1000);
		}
		printf_s("��� ����� ���� : %d \n", ManScore);
		printf_s("����� ���� ��������� : %d \n", CompScore);

	}
	if (ManScore == CompScore) {
		printf_s("\n\n �����! \n\n");
	}
	else if (ManScore>CompScore) {
		printf_s("\n\n �� �������� !\n\n");
		}
		else if (ManScore<CompScore) {
			printf_s("\n\n �������� ������� !\n\n");
		}
	}

