#include <iostream>
#include <string>
#include <ctime>

using namespace std;

class Test
{
	
private:
	string* question = nullptr;
	int size;
public:
	Test()
	{
		size = 3;
		question = new string[size];
		question[0] = "��* ����� ���������� �� ������������� �� ������������� �������� ��������������� ���� ��������� ��������� ��� ���������� �������?*1) �� 10 �� 15 ������.*2) �� 15 �� 40 ������.*3) �� ����� 15 ������.*4) �� ����� 40 ������.+";
		question[1] = "��*��� �� ��������� ������ ������������� ������� ������������?*1) ����������� ������ � ������������ �������.*2) ����������� ������ � ���������� �������.*3) ����������� ������ � �������� ��� ���������.*4) ����� �� ����� ����.+*5) ��� ������������� �������������.";
		question[2] = "� *����� �� ������������� ����������� ������������ ������� ��������� ���������� ����������?*1) � �������� ����������.*2) � ������ ��������� ���������� � ���������� ���������� ����� ������ ����� 3,5 �����.+*3)3. �� ��������� � ������� ��������.*4) ��������� �� ���� ������������� �������.";
	}
	Test(string* test, int size)
	{
		this->size = size;
		this->question = new string[size];
		for (int i = 0; i < size; i++)
		{
			this->question[i] = test[i];
		}
	}
	Test(const string & test)
	{
		this->size = size;
		this->question = new string[size];
		for (int i = 0; i < size; i++)
		{
			this->question[i] = test[i];
		}
	}
	~Test()
	{
		delete[]question;
	}


	void print()
	{
		int temp = rand() % 3;
		int sizeStr = this->question[temp].size();
		int n=0;
		for (int i = n; i < sizeStr; i++)
		{
			if (this->question[temp][i] == '*')
			{

				cout << question[temp].substr(n,i) << endl;
				n = i;
			}
		}
		
	}


};




void main()
{
	srand(time(NULL));
	setlocale(LC_ALL, "Rus");
	Test res;
	res.print();

	
	system("pause");
	return;

}