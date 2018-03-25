#include <stdlib.h>
#include <time.h>
#include <windows.h>
#include <stdio.h>
#include <conio.h>
#include <iostream>

using namespace std;

void Throw(int Dice) {
	switch (Dice) {
	case 1:
		cout << "===========" << endl;
		cout << "|         |" << endl;
		cout << "|         |" << endl;
		cout << "|    *    |" << endl;
		cout << "|         |" << endl;
		cout << "|         |" << endl;
		cout << "===========" << endl;
		break;
	case 2:
		cout << "===========" << endl;
		cout << "|         |" << endl;
		cout << "|    *    |" << endl;
		cout << "|         |" << endl;
		cout << "|    *    |" << endl;
		cout << "|         |" << endl;
		cout << "===========" << endl;
		break;
	case 3:
		cout << "===========" << endl;
		cout << "|         |" << endl;
		cout << "|   *     |" << endl;
		cout << "|    *    |" << endl;
		cout << "|     *   |" << endl;
		cout << "|         |" << endl;
		cout << "===========" << endl;
		break;
	case 4:
		cout << "===========" << endl;
		cout << "|         |" << endl;
		cout << "|  *   *  |" << endl;
		cout << "|         |" << endl;
		cout << "|  *   *  |" << endl;
		cout << "|         |" << endl;
		cout << "===========" << endl;
		break;
	case 5:
		cout << "===========" << endl;
		cout << "|         |" << endl;
		cout << "|  *   *  |" << endl;
		cout << "|    *    |" << endl;
		cout << "|  *   *  |" << endl;
		cout << "|         |" << endl;
		cout << "===========" << endl;
		break;
	case 6:
		cout << "===========" << endl;
		cout << "|         |" << endl;
		cout << "|  *   *  |" << endl;
		cout << "|  *   *  |" << endl;
		cout << "|  *   *  |" << endl;
		cout << "|         |" << endl;
		cout << "===========" << endl;
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
	cout << endl << " Результат : " << Result << "." << endl << endl;
	return Result;

}

void main() {
	setlocale(LC_ALL, "rus");
	setlocale(0, "");
	srand(time(NULL));
	cout << "Привет! Давай поиграем в кубики?" << endl << endl;
	int ManScore = 0;
	int CompScore = 0;

	cout << "Давай выберем кто первый кидает кости !" << endl << endl;
	cout << "<нажмите Enter>" << endl;
	_getch();

	int ManRes, CompRes;

	do {
		cout << endl << "Ваш ход! Бросайте кубик!" << endl << endl;
		ManRes = 1 + rand() % 6;
		Sleep(1000);
		Throw(ManRes);
		cout << endl << "Ваш результат : " << ManRes << endl;
		cout << endl << "...Теперь компьютер " << endl << endl;
		CompRes = 1 + rand() % 6;
		Sleep(1000);
		Throw(CompRes);
		cout << endl << "Результат комьютера :" << CompRes << endl;
		Sleep(2000);
	} while (ManRes == CompRes);

	if (ManRes>CompRes) {
		cout << endl << " Вы начинаете первым !!!" << endl << endl;
		for (int i = 0; i < 3; ++i)
		{
			cout << "Ваш ход! Бросайте кубик! " << endl;
			cout << "<нажмите Enter>" << endl;
			_getch();
			ManScore += Res();
			Sleep(1000);
			cout << "Ход комьютера." << endl;
			cout << "<нажмите Enter>" << endl;
			_getch();
			CompScore += Res();
			Sleep(1000);
			cout << "Ваш счет : " << ManScore << endl;
			cout << "Cчет комьютера : " << CompScore << endl << endl;
		}
	}

	else if (ManRes < CompRes) {
		cout << endl << "Комьютер начинает первым !!!" << endl << endl;
		for (int i = 0; i < 3; ++i) {
			cout << "Ход комьютера." << endl;
			cout << "<нажмите Enter>" << endl;
			_getch();
			CompScore += Res();
			Sleep(1000);
			cout << "Ваш ход! Бросайте кубик! " << endl;
			cout << "<нажмите Enter>" << endl;
			_getch();
			ManScore += Res();
			Sleep(1000);
			cout << "Ваш счет : " << ManScore << endl;
			cout << "Cчет комьютера : " << CompScore << endl << endl;
		}

	}

	if (ManScore == CompScore) {
		cout << endl << endl << "Ничья!" << endl << endl;
	}

	else if (ManScore>CompScore) {
		cout << endl << endl << "Вы выйграли!" << endl << endl;
	}

	else if (ManScore<CompScore) {
		cout << endl << endl << "Комьютер выйграл!" << endl << endl;
	}

	_getch();
	return;
}