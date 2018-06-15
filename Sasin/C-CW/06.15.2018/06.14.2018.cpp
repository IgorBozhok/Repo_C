#include <iostream>

using namespace std;

class  masInt
{
private:
	int* mas = nullptr;
	unsigned size = 0;
public:
	masInt() = default;
	masInt(const masInt & from) = delete;
	masInt(int* mas, int size)
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
	~masInt()
	{
		delete[]mas;
	}

	int& operator[](int index)
	{
		if ((index >= 0) && (index < size))
		{
			return mas[index];
		}
		return index;
	}
	int operator()(int index)
	{
		int sum = 0;
		if ((index >= 0) && (index < size))
		{
			for (int i = 0; i < index; i++)
			{
				sum += mas[i];
			}
		}
		return sum;
	}
};

void main(void)
{
	int userMas[] = { 1,2,3,4,5,6,7,8,9,0 };
	masInt testObj(userMas, 10);
	for (int i = 0; i < 10; i++)
	{
		cout << testObj[i] << " ";
	}
	cout << endl;
	cout << testObj(3) << " " << testObj(5) << endl;
	testObj[9] = 10;
	cout << testObj[9];
	cout << endl;
	system("pause");
	return;
}
