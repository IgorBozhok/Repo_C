#include <iostream>
#include <cstring>

using namespace std;

class MyString
{

private:
	char * myStr;
public:
	MyString() : myStr(nullptr) {}
	MyString(char *myStr)
	{
		int temp = strlen(myStr) + 1;
		this->myStr = new char[temp];
		strcpy_s(this->myStr, temp, myStr);
	}
	MyString(const MyString & from)
	{
		int temp = strlen(from.myStr) + 1;
		this->myStr = new char[temp];
		strcpy_s(this->myStr, temp, from.myStr);
	}
	MyString(const MyString&& from)
	{
		int temp = strlen(from.myStr) + 1;
		this->myStr = new char[temp];
		strcpy_s(this->myStr, temp, from.myStr);
	}
	~MyString()
	{
		if (myStr != nullptr)
		{
			delete[]myStr;
		}
	}
	MyString& operator=(const MyString & right)
	{
		int temp = strlen(right.myStr) + 1;
		this->myStr = new char[temp];
		strcpy_s(this->myStr, temp, right.myStr);
		return *this;
	}
	MyString& operator=(const MyString && right)
	{
		int temp = strlen(right.myStr) + 1;
		this->myStr = new char[temp];
		strcpy_s(this->myStr, temp, right.myStr);
		return *this;
	}

	MyString operator*(const MyString &from)
	{
		int tempSize1 = strlen(this->myStr + 1);
		int tempSize2 = strlen(from.myStr + 1);
		int a = 0;
		for (int i = 0; i < tempSize1 - 1; i++)
		{
			for (int j = 0; j < tempSize2 - 1; j++)
			{
				if (this->myStr[i] == from.myStr[j])
				{
					a++;
				}
			}
		}
		char * newstr = nullptr;
		newstr = new char[a + 1];
		int b = 0;
		for (int i = 0; i < tempSize1 - 1; i++)
		{
			for (int j = 0; j < tempSize2 - 1; j++)
			{
				if (this->myStr[i] == from.myStr[j])
				{
					newstr[b] = this->myStr[i];
					b++;
				}
			}
		}
		newstr[a] = '\0';
		MyString NewStr(newstr);
		return NewStr;
	}

	MyString operator+(const MyString &from)
	{

		int tempSize1 = strlen(this->myStr);
		int tempSize2 = strlen(from.myStr);
		int tempSize3 = (tempSize1 + tempSize2) + 1;
		char * NewStr = nullptr;
		NewStr = new char[tempSize3];
		strcpy_s(NewStr, tempSize3, this->myStr);
		strcat_s(NewStr, tempSize3, from.myStr);
		MyString newStr(NewStr);
		return newStr;
	}

	bool operator==(const MyString& from)
	{
		if (strcmp(this->myStr, from.myStr) == 0)
		{

			return true;
		}
		else
		{
			return false;
		}
	}
	bool operator<(const MyString& from) const
	{
		if (strcmp(this->myStr, from.myStr) == 1)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	bool operator>(const MyString& from) const
	{
		if (strcmp(this->myStr, from.myStr) == -1)
		{
			return true;
		}
		else
		{
			return false;
		}
	}

	char& operator[](int index)
	{
		/*
		if ((index >= 0) && (index < strlen(this->myStr)))
		{	}
		*/
		return this->myStr[index];
	}

	void operator()(int index1, int index2)
	{
		int size;
		if (index1 == 0 && index2 > 1)
		{
			for (int i = 1 ; i < index2 ; i++)
			{
				cout << this->myStr[i];
			}
			cout << endl;
		}
		
		else 
		{
			size = index2 - index1 + 1;
			for (int i = index1 + 1; i < size; i++)
			{
				cout << this->myStr[i];
			}
			cout << endl;
		}
		
	}
	
	void print() const
	{
		cout << this->myStr;
	}
};
void main(void)
{
	setlocale(LC_ALL, "RUS");
	MyString res, res1, Str1("Asd12"), Str2("asd12");
	
	cout << "������ ������(Str1): ";
	Str1.print();
	cout << endl;
	cout << "������ ������(Str2): ";
	Str2.print();
	cout << endl;
	cout << endl;

	cout << "����������� ���� �����: ";
	res = Str1*Str2;
	res.print();
	cout << endl;
	cout << endl;

	cout << "������������ �����: ";
	res1 = Str1 + Str2;
	res1.print();
	cout << endl;
	cout << endl;

	cout << "������ ������(Str1): ";
	Str1.print();
	cout << endl;
	cout << "������ ������(Str2): ";
	Str2.print();
	cout << endl;
	cout << "������������������ ��������� �����( > ): "; 
	if (Str1>Str2)
	{
		cout << "Str1 > Str2";
		cout << endl;
	}
	cout << endl;

	res = Str1;
	cout << "������ ������(res): ";
	res.print();
	cout << endl;
	cout << "������ ������(Str1): ";
	Str1.print();
	cout << endl;
	cout << "������������������ ��������� �����(==): ";
	if (Str1 == res)
	{
		cout << "Str1 == res";
		cout << endl;
	}
	cout << endl;

	res = Str1;
	cout << "������ ������(Str2): ";
	Str2.print();
	cout << endl;
	cout << "������ ������(Str1): ";
	Str1.print();
	cout << endl;
	cout << "������������������ ��������� �����( < ): ";
	if (Str2 < Str1)
	{
		cout << "Str2 < Str1";
		cout << endl;
	}
	cout << endl;
	
	cout << endl;
	cout << "������ � ������� � ������:  "; 
	Str1.print();
	cout << endl;
	int index = 0;
	cout << "������� ����� ������: ";
	cin >> index;
	cout << "Str1[" << index << "]: " << Str1[index];
	cout << endl;
	char a;
	cout << "������� ������ ��� ������: ";
	cin >> a;
	Str1[index] = a;
	cout << endl;
	cout << "Str1[" << index << "]: " << Str1[index];
	cout << endl;
	cout << "����� ������ Str1: ";
	Str1.print();
	cout << endl;
	cout << endl;


	cout << "������ Str1: ";
	Str1.print();
	cout << endl;
	cout << "���������� ��������� ����� ��������� 0 � 2 � ������ Str1: "; 
	Str1(0, 2);
	cout << endl;
	cout << "���������� ��������� ����� ��������� 1 � 4 � ������ Str1: ";
	Str1(1, 4);

	system("pause");
	return;
}