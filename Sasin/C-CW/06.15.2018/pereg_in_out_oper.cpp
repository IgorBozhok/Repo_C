#include <iostream>

using namespace std;

class masInt
{
private:
	int * mas = nullptr;
	unsigned size = 0;
public:
	masInt() = default;
	masInt(const masInt &from) = delete;
	masInt(int * mas, int size)
	{
		this->size = size;
		this->mas = new int[this->size];
		for (int i = 0; i < size; i++)
		{
			this->mas[i] = mas[i];
		}
	}
	masInt(const masInt &&from)
	{
		this->size = from.size;
		this->mas = new int[from.size];
		for (int i = 0; i < from.size; i++)
		{
			this->mas[i] = from.mas[i];
		}
	}
	masInt& operator=(const masInt & right)
	{
		this->mas = new int[this->size];
		for (int i = 0; i < this->size; i++)
		{
			this->mas[i] = right.mas[i];
		}
		return *this;
	}
	~masInt()
	{
		delete[]mas;
	}
	void print()
	{
		for (int i = 0; i < this->size; i++)
		{
			cout << this->mas[i] << " ";
		}
	}
	masInt& operator+(const masInt & right)
	{
		for (int i = 0; i < this->size; i++)
		{
			this->mas[i] = this->mas[i] + right.mas[i];
		}
		return masInt(mas, this->size);
	}

	friend ostream& operator<<(ostream& out, const masInt & obj);
	friend istream& operator>>(istream& in, masInt & obj);
};


ostream& operator<<(ostream& out, const masInt & obj)
{
	for (int i = 0; i < obj.size; i++)
	{
		out << obj.mas[i] << " ";
	}
	cout << endl;
	return out;
}

istream& operator >> (istream& in, masInt & obj)
{
	cout << "Enter size: ";
	in >> obj.size;
	if (obj.mas != nullptr)
	{
		delete[] obj.mas;
	}
	obj.mas = new int[obj.size];
	for (int i = 0; i < obj.size; i++)
	{
		in >> obj.mas[i];
	}
	return in;
}

void main(void)
{
	int userMas[] = { 1,2,3,4,5,6,7,8,9,0 };
	masInt testObj(userMas, 10), res, res1;

	cout << testObj;
	//cin >> testObj;
	//cout << testObj;
	
	res = testObj;
	res.print();

	res1 = testObj + res;
	cout << res;

	system("pause");
	return;
}


