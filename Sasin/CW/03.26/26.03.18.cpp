#include <conio.h>
#include <iostream>
#include <string.h>

// string.h ��� ���������� , ������� ������ � �������� ����� � � �������� � ���� ���� ��� ������� (���������) �� ���������.
// strlen - ��� ������� ��������� ����� ������ ��� '\0'


using namespace std;
void main()
{
	setlocale(LC_ALL, "Rus");
	/*
	char strMass[] = "ABCD1234";
	char* strPtr = new char[32]("1234abc");
	char strMassFail[] = { 'A','B','1','2' };
	int size = 0;

	size = strlen(strMass);
	cout << "Size of mass" << size;
	cout << endl;
	size = strlen(strPtr);
	cout << "Size of ptr " << size;
	cout << endl;

	size = strlen(strMassFail);
	cout << "Size of fail mass " << size;

	delete[] strPtr;
	*/

	// strcpy_s - �������� ������ �� ������ ����� � ������
	//int strcpy_s(char* _destination, unsigned _SizeinBytes, char const* _Source);
	//_Source -������
	//_Destination - ����
	// _SizeInBy
	//strcat_s - ������������ ����� ������ � ����� ������ ������

	/*
	char* strS = new char[32]("ABCDEF");
	char* strD = new char[32]("1234");
	int res = 0;

	cout << strS << endl << strD << endl;

	res = strncpy_s(strD,32, strS,3);
	cout << "strcpy_s return " << res << endl;
	cout << strS << endl << strD << endl << endl;

	res = strncat_s(strD, 32, strS,1);
	cout << "strncat_s return " << res << endl;
	cout << strS << endl << strD << endl<< endl;

	delete[] strS;
	delete[] strD;
	*/

	//int strcmp(char const* _Str1, char const* _Str2);

	/*
	char* strS = new char[32]("ABC");
	char* strD = new char[32]("ABC");
	int res = 0;
	res = strncmp(strS, strD,2);
	cout << res;
	delete[] strS;
	delete[] strD;
	*/

	//int strncmp(char const* _Str1, char const* _Str2, _maxCount);

	//int strchr(char const* _String, char const_Ch);
	//int strrchr(char const* _String, char const_Ch);
	//1-�� ��������� ��������� �� ����� ��������� ������� _Ch � ������ _String
	//2-�� ��������� ��������� �� ��������� ��������� ������� _Ch � ������ _String
	//��� ����� �-��, ���� ������� ������ �� ������, �� ��������� nullptr

	/*
	char * strS = new char[32]("!AB*CD!EF*GH");
	char c = '*';
	char*res = nullptr;
	res = strchr(strS, c);
	cout << "Start first * - " << res << endl;

	c = '!';
	res = strrchr(strS, c);
	cout << "start last ! - " << res;
	delete[] strS;
	*/

	//char* strpbrk(char* const _String, char const* const _Control);
	//���� ������ ������ � _String, ������� ��������� � ����� �� ������� � _Control � ���������� ��������� �� ����, ���� ����� ������ �� ������ , �� ���������� nullptr.
	
	//char* strstr(char* const _String, char const* const _SubString)
	//���� ������ � ������ 

	/*
	char* strS = new char[32]("AB*CD*EF*GH*AB*");
	char* strSub1 = new char[32]("B*");
	char* strSub2 = new char[32]("CD*EF");
	char* res = nullptr;
	res = strS;
	do {
		res = strpbrk(res, "*");
		if (res == nullptr) {
			break;
		}
		cout << res << endl;
		res++;
	} while (true);

	cout << endl << "SubString" << endl;
	res = strstr(strS, strSub1);
	cout << res << endl;

	res = strstr(strS, strSub2);
	cout << res << endl;

	delete[] strS;
	delete[] strSub1;
	delete[] strSub2;
	*/

	//int strerror_s(char* _Buffer, unsigned _SizeInBytes, int _ErrorNumber);
	// �-�� �������� � _Buffer ������, ������� ������������� ������ � ����� _ErrorNumber. �.�. ���������� ��� ������ � �������� �������� �������.
	/*
	char* errorBuffer = new char[256];
	int res = 0;

	for (int i = 0; i < 50; i++) {
	res = strerror_s(errorBuffer, 256, i);
	cout << i << " - " << errorBuffer << endl;
	}
	*/

	_getch();
	return;
}