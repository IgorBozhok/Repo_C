#include <iostream>
#include <string>

using namespace std;

class exepionMyArray 
{
public:
	enum exepionMyArrayType
	{
		UNKNOW_MY_ARR_EXEP = 0,
		INC_SIZE__MY_ARR_EXEP,
		INC_MEM__MY_ARR_EXEP,
		OUT_OF_INT_MY_ARR_EXEP

	};
private:
	exepionMyArrayType exepType;
public:
	exepionMyArray();
	exepionMyArray(exepionMyArrayType exepType);
	~exepionMyArray();
	exepionMyArrayType getExepType() const;
	void exepMass(void) const;

};

exepionMyArray::exepionMyArray()
{
	exepType = UNKNOW_MY_ARR_EXEP;
}
exepionMyArray::exepionMyArray(exepionMyArrayType exepType)
{
	this->exepType = exepType;
}
exepionMyArray::~exepionMyArray()
{
	cout << "Exeption finish" << endl;
}
exepionMyArray::exepionMyArrayType exepionMyArray::getExepType() const
{
	return exepType;
}
void exepionMyArray::exepMass(void) const
{
	switch (exepType)
	{
	case UNKNOW_MY_ARR_EXEP:
	{
		cout << "Unknow error" << endl;
		break;
	}
	case INC_SIZE__MY_ARR_EXEP:
	{
		cout << "Size error" << endl;
		break;
	}
	case INC_MEM__MY_ARR_EXEP:
	{
		cout << "Memorry error" << endl;
		break;
	}
	case OUT_OF_INT_MY_ARR_EXEP:
	{
		cout << "Out of range error" << endl;
		break;
	}
	default:
	{
		cout << "Inc code error" << endl;
		break;
	}
	}
}

class myArray
{
private:
	int *mas;
	int size;
public:
	myArray();
	myArray(int *userMas, int userSize);
	myArray(const myArray &from);
	myArray& operator=(const myArray &right);
	myArray operator+(const myArray &right);
	void printMass() const;
	~myArray();
};
myArray::myArray()
{
	mas = nullptr;
	size = 0;
}
myArray::~myArray()
{
	if (mas != nullptr)
	{
		delete[]mas;
	}
}
myArray::myArray(int *userMas, int userSize)
{
	if (userSize <= 0 || userMas == nullptr)
	{
		mas = nullptr;
		size = 0;
	}
	else
	{
		size = userSize;
		mas = new int[size];
		for (int i = 0; i < size; i++)
		{
			mas[i] = userMas[i];
		}
	}

}
myArray::myArray(const myArray &from)
{
	if (from.size <= 0 || from.mas == nullptr)
	{
		this->mas = nullptr;
		this->size = 0;
	}
	else
	{
		this->size = from.size;
		this->mas = new int[this->size];
		for (int i = 0; i < this->size; i++)
		{
			this->mas[i] = from.mas[i];
		}
	}
}
myArray& myArray::operator=(const myArray &right)
{
	if (this->mas !=nullptr)
	{
		delete[]this->mas;
	}
	if (right.size <= 0 || right.mas == nullptr)
	{
		this->mas = nullptr;
		this->size = 0;
	}
	else
	{
		this->size = right.size;
		this->mas = new int[this->size];
		for (int i = 0; i < this->size; i++)
		{
			this->mas[i] = right.mas[i];
		}
	}
	return *this;
}
myArray myArray::operator+(const myArray &right)
{
	if (this->mas==nullptr || right.mas == nullptr)
	{
		//throw exepionMyArray(exepionMyArray::exepionMyArrayType::INC_MEM__MY_ARR_EXEP);
		throw 1;
	}
	if (this->size != right.size || this->size <= 0 || right.size <= 0)
	{
		throw exepionMyArray(exepionMyArray::exepionMyArrayType::INC_SIZE__MY_ARR_EXEP);
	}
	int *tempMas = new int[this->size];
	for (int i = 0; i < this->size; i++)
	{

		if (this->mas[i] > 0 && right.mas[i] > 0)
		{
			if ((INT_MAX - this->mas[i]) < right.mas[i])
			{
				throw exepionMyArray(exepionMyArray::exepionMyArrayType::OUT_OF_INT_MY_ARR_EXEP);
			}
		}
		else if (this->mas[i] < 0 && right.mas[i] < 0)
		{
			if ((INT_MIN - this->mas[i]) > right.mas[i])
			{
				throw exepionMyArray(exepionMyArray::exepionMyArrayType::OUT_OF_INT_MY_ARR_EXEP);
			}
		}
		
		tempMas[i] = this->mas[i] + right.mas[i];
	}
	myArray res(tempMas, this->size);
	delete[] tempMas;
	return res;
}
void myArray::printMass() const
{
	if (this->size <= 0 || this->mas == nullptr)
	{
		cout << "Mass is empty" << endl;
	}
	else
	{
		for (int i = 0; i < this->size; i++)
		{
			cout << this->mas[i] << " ";
		}
		cout << endl;
	}
	return;
}

const int  masSize = 8;
void main()
{

	int masA[masSize] = { 2,-4,6,-8,10,-12};
	int masB[masSize] = {10,10,10,20,20,20,30,-30};
	myArray objA(masA, masSize), objB(nullptr, masSize);
	myArray res;

	cout << "MasA: " << endl;
	objA.printMass();
	cout << "MasB: " << endl;
	objB.printMass();

	try
	{
		res = objA + objB;
	}
	catch (const exepionMyArray& exep)
	{
		exep.exepMass();
	}
	catch (...)
	{
		cout << "Catch(...)" << endl;
	}

	cout << "MasA + MasB: " << endl;
	res.printMass();

	system("pause");
	return;
}