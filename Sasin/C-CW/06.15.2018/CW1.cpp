#include <iostream>
#include <cstring>

using namespace std;

class MyString
{

private:
	char * myStr;
public:
	MyString(): myStr(nullptr) {}
	MyString(char *myStr)
	{
		int temp = strlen(myStr) + 1;
		this->myStr = new char[temp];
		strcpy_s(this->myStr, temp, myStr);
	}
	MyString(const MyString & from)
	{
		int temp = strlen(from.myStr)+1;
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
		for (int i = 0; i < tempSize1-1; i++)
		{
			for (int j= 0; j < tempSize2-1; j++)
			{
				if (this->myStr[i]==from.myStr[j])
				{
					a++;
				}
			}
		}
		char * newstr = nullptr;
		newstr = new char[a+1];
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
		int tempSize3 = (tempSize1 + tempSize2) +1;
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
		if ((index >= 0) && (index < strlen(this->myStr)))
		{
			return this->myStr[index];
		}
	}

	char operator()(int index1,int index2)
	{
		int size = 0;
		char * newStr = nullptr;
		if (index1 == 0)
		{
			size = index2 - index1 + 1;
			newStr = new char[];
		}
		else if ((index2 - index1) > 1)
		{
			size = index2 - index1 + 2;
		}
		else
		{
			return;
		}
		

		return ;
	}

	void print() const
	{
		cout << this->myStr;
	}
};
void main(void)
{
	MyString res,res1, Str1("Asd12"), Str2("asd12");
	Str1.print();
	cout << endl;
	Str2.print();
	cout << endl;
	res = Str1*Str2;
	res.print();
	cout << endl;
	res1 = Str1 + Str2;
	res1.print();
	cout << endl;

	if (Str1 == Str2)
	{
		cout << "Str1 = Str2";
		cout << endl;
	}
	else if (Str1>Str2)
	{
		cout << "Str1 > Str2";
		cout << endl;
	}

	else if (Str1<Str2)
	{
		cout << "Str1 < Str2";
		cout << endl;
	}

	cout << endl;
	cout << Str1[2];
	cout << endl;


	
	//res = Str1*Str2;
	//res.print();
	system("pause");
	return;
}


