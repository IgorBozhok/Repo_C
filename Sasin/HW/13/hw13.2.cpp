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
	cout << endl << " ��������� : " << Result << "." << endl << endl;
	return Result;

}

void main() {
	setlocale(LC_ALL, "rus");
	setlocale(0, "");
	srand(time(NULL));
	cout << "������! ����� �������� � ������?" << endl << endl;
	int ManScore = 0;
	int CompScore = 0;

	cout << "����� ������� ��� ������ ������ ����� !" << endl << endl;
	cout << "<������� Enter>" << endl;
	_getch();

	int ManRes, CompRes;

	do {
		cout << endl << "��� ���! �������� �����!" << endl << endl;
		ManRes = 1 + rand() % 6;
		Sleep(1000);
		Throw(ManRes);
		cout << endl << "��� ��������� : " << ManRes << endl;
		cout << endl << "...������ ��������� " << endl << endl;
		CompRes = 1 + rand() % 6;
		Sleep(1000);
		Throw(CompRes);
		cout << endl << "��������� ��������� :" << CompRes << endl;
		Sleep(2000);
	} while (ManRes == CompRes);

	if (ManRes>CompRes) {
		cout << endl << " �� ��������� ������ !!!" << endl << endl;
		for (int i = 0; i < 3; ++i)
		{
			cout << "��� ���! �������� �����! " << endl;
			cout << "<������� Enter>" << endl;
			_getch();
			ManScore += Res();
			Sleep(1000);
			cout << "��� ���������." << endl;
			cout << "<������� Enter>" << endl;
			_getch();
			CompScore += Res();
			Sleep(1000);
			cout << "��� ���� : " << ManScore << endl;
			cout << "C��� ��������� : " << CompScore << endl << endl;
		}
	}

	else if (ManRes < CompRes) {
		cout << endl << "�������� �������� ������ !!!" << endl << endl;
		for (int i = 0; i < 3; ++i) {
			cout << "��� ���������." << endl;
			cout << "<������� Enter>" << endl;
			_getch();
			CompScore += Res();
			Sleep(1000);
			cout << "��� ���! �������� �����! " << endl;
			cout << "<������� Enter>" << endl;
			_getch();
			ManScore += Res();
			Sleep(1000);
			cout << "��� ���� : " << ManScore << endl;
			cout << "C��� ��������� : " << CompScore << endl << endl;
		}

	}

	if (ManScore == CompScore) {
		cout << endl << endl << "�����!" << endl << endl;
	}

	else if (ManScore>CompScore) {
		cout << endl << endl << "�� ��������!" << endl << endl;
	}

	else if (ManScore<CompScore) {
		cout << endl << endl << "�������� �������!" << endl << endl;
	}

	_getch();
	return;
}