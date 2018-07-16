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
		OUT_OF_INT_MY_ARR_EXEP,
		EMPTY_ERROR,
		DIVISION_BY_ZERO

	};
	exepionMyArrayType exepType;
public:
	exepionMyArray();
	exepionMyArray(exepionMyArrayType exepType);
	~exepionMyArray();
	exepionMyArrayType getExepType() const;
	virtual void exepMass(void) const;

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

class emptyError : public exepionMyArray
{
public:
	emptyError()
	{
		this->exepType = EMPTY_ERROR;
		exepMass();
	}
	

	virtual void exepMass(void) const
	{
		cout << "empty" << endl;
	}
};


template<typename userType>
class myArray
{
private:
	userType *mas;
	int size;
public:
	myArray();
	myArray(userType *userMas, int userSize);
	myArray(const myArray &from);
	myArray& operator=(const myArray &right);
	myArray operator+(const myArray &right);
	myArray operator-(const myArray &right);
	myArray operator*(const myArray &right);
	myArray operator/(const myArray &right);
	void printMass() const;
	~myArray();
};

template<typename userType>
myArray<userType>::myArray()
{
	mas = nullptr;
	size = 0;
}
template<typename userType>
myArray<userType>::~myArray()
{
	if (mas != nullptr)
	{
		delete[]mas;
	}
}
template<typename userType>
myArray<userType>::myArray(userType *userMas, int userSize)
{
	if (userSize <= 0 || userMas == nullptr)
	{
		mas = nullptr;
		size = 0;
	}
	else
	{
		size = userSize;
		mas = new userType[size];
		for (int i = 0; i < size; i++)
		{
			mas[i] = userMas[i];
		}
	}

}
template<typename userType>
myArray<userType>::myArray(const myArray &from)
{
	if (from.size <= 0 || from.mas == nullptr)
	{
		this->mas = nullptr;
		this->size = 0;
	}
	else
	{
		this->size = from.size;
		this->mas = new userType[this->size];
		for (int i = 0; i < this->size; i++)
		{
			this->mas[i] = from.mas[i];
		}
	}
}
template<typename userType>
myArray<userType>& myArray<userType>::operator=(const myArray &right)
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
		this->mas = new userType[this->size];
		for (int i = 0; i < this->size; i++)
		{
			this->mas[i] = right.mas[i];
		}
	}
	return *this;
}
template<typename userType>
myArray<userType> myArray<userType>::operator+(const myArray &right)
{
	if (this->mas ==nullptr || right.mas == nullptr)
	{
		throw exepionMyArray(exepionMyArray::exepionMyArrayType::INC_MEM__MY_ARR_EXEP);
	}
	if (this->size != right.size || this->size <= 0 || right.size <= 0)
	{
		throw exepionMyArray(exepionMyArray::exepionMyArrayType::INC_SIZE__MY_ARR_EXEP);
	}
	userType *tempMas = new userType[this->size];
	for (int i = 0; i < this->size; i++)
	{
		if (this->mas[i] > 0 && right.mas[i] > 0)
		{
			if ((INT_MAX - this->mas[i]) < right.mas[i])
			{
				throw exepionMyArray(exepionMyArray::exepionMyArrayType::OUT_OF_INT_MY_ARR_EXEP);
			}
		}
		if (this->mas[i] < 0 && right.mas[i] < 0)
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
template<typename userType>
myArray<userType> myArray<userType>::operator-(const myArray &right)
{
	if (this->mas == nullptr || right.mas == nullptr)
	{
		throw exepionMyArray(exepionMyArray::exepionMyArrayType::INC_MEM__MY_ARR_EXEP);
	}
	if (this->size != right.size || this->size <= 0 || right.size <= 0)
	{
		throw exepionMyArray(exepionMyArray::exepionMyArrayType::INC_SIZE__MY_ARR_EXEP);
	}
	userType *tempMas = new userType[this->size];
	for (int i = 0; i < this->size; i++)
	{

		if (this->mas[i] < 0 && right.mas[i] > 0)
		{
			if ((INT_MIN + right.mas[i]) > this->mas[i])
			{
				throw exepionMyArray(exepionMyArray::exepionMyArrayType::OUT_OF_INT_MY_ARR_EXEP);
			}
		}

		tempMas[i] = this->mas[i] - right.mas[i];
	}
	myArray res(tempMas, this->size);
	delete[] tempMas;
	return res;
}
template<typename userType>
myArray<userType> myArray<userType>::operator*(const myArray &right)
{
	if (this->mas == nullptr || right.mas == nullptr)
	{
		throw exepionMyArray(exepionMyArray::exepionMyArrayType::INC_MEM__MY_ARR_EXEP);
	}
	if (this->size != right.size || this->size <= 0 || right.size <= 0)
	{
		throw exepionMyArray(exepionMyArray::exepionMyArrayType::INC_SIZE__MY_ARR_EXEP);
	}
	userType *tempMas = new userType[this->size];
	for (int i = 0; i < this->size; i++)
	{
		if (this->mas[i] > 0 && right.mas[i] > 0)
		{
			if ((INT_MAX / this->mas[i]) < right.mas[i])
			{
				throw exepionMyArray(exepionMyArray::exepionMyArrayType::OUT_OF_INT_MY_ARR_EXEP);
			}
		}
		if (this->mas[i] < 0 && right.mas[i] < 0)
		{
			if ((INT_MAX / this->mas[i]) > right.mas[i])
			{
				throw exepionMyArray(exepionMyArray::exepionMyArrayType::OUT_OF_INT_MY_ARR_EXEP);
			}
		}
		if (this->mas[i] < 0 && right.mas[i] > 0)
		{
			if ((INT_MIN / this->mas[i]) < right.mas[i])
			{
				throw exepionMyArray(exepionMyArray::exepionMyArrayType::OUT_OF_INT_MY_ARR_EXEP);
			}
		}
		if (this->mas[i] > 0 && right.mas[i] < 0)
		{
			if ((INT_MIN / right.mas[i] ) < this->mas[i])
			{
				throw exepionMyArray(exepionMyArray::exepionMyArrayType::OUT_OF_INT_MY_ARR_EXEP);
			}
		}

		tempMas[i] = this->mas[i] * right.mas[i];
	}
	myArray res(tempMas, this->size);
	delete[] tempMas;
	return res;
}
template<typename userType>
myArray<userType> myArray<userType>::operator/(const myArray &right)
{
	if (this->mas == nullptr || right.mas == nullptr)
	{
		throw exepionMyArray(exepionMyArray::exepionMyArrayType::INC_MEM__MY_ARR_EXEP);
	}
	if (this->size != right.size || this->size <= 0 || right.size <= 0)
	{
		throw exepionMyArray(exepionMyArray::exepionMyArrayType::INC_SIZE__MY_ARR_EXEP);
	}
	userType *tempMas = new userType[this->size];
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

		tempMas[i] = this->mas[i] / right.mas[i];
	}
	myArray<userType> res(tempMas, this->size);
	delete[] tempMas;
	return res;
}
template<typename userType>
void myArray<userType>::printMass() const
{
	if (this->size <= 0 || this->mas == nullptr)
	{
		throw emptyError();
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

	int masA[masSize] = { 2,-4,6,-8,10,-12,INT_MAX,INT_MIN};
	int masB[masSize] = {10,10,10,20,20,20, 1, 0};

	int masA1[masSize] = { 2,-4,6,-8,10,-12,INT_MAX,INT_MIN };
	int masB1[masSize] = { 10,10,10,20,20,20, 0, -1};

	int masA2[masSize] = { 2,-4,6,-8,10,-12,INT_MAX, 1 };
	int masB2[masSize] = { 10,10,10,20,20,20, 1, INT_MIN };

	double masDoubleA[masSize] = { 2.1, -4.2, 6.4, -8.3, 10.0, -12.0, 6.4, 6.5 };
	double masDoubleB[masSize] = { 10.0, 10.0, 10.0, 20.0, 20.0, 20.4, 30.0, -30.0};

	myArray<double> objADouble(masDoubleA, masSize);
	myArray<double> objBDouble(masDoubleB, masSize);

	myArray<int> objA(nullptr, 0);
	myArray<int> objB(masB, masSize);

	myArray<int> objA1(masA1, masSize);
	myArray<int> objB1(masB1, masSize);

	myArray<int> objA2(masA2, masSize);
	myArray<int> objB2(masB2, masSize);


	myArray<int> res, res1, res2;
	myArray<double> res3;

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
	cout << endl;

	cout << "MasA1: " << endl;
	objA1.printMass();
	cout << "MasB1: " << endl;
	objB1.printMass();

	try
	{
		res1 = objA1 - objB1;
	}
	catch (const exepionMyArray& exep)
	{
		exep.exepMass();
	}
	catch (...)
	{
		cout << "Catch(...)" << endl;
	}
	cout << "MasA1 - MasB1: " << endl;
	res1.printMass();
	cout << endl;

	cout << "MasA2: " << endl;
	objA2.printMass();
	cout << "MasB2: " << endl;
	objB2.printMass();
	try
	{
		res2 = objA2 * objB2;
	}
	catch (const exepionMyArray& exep)
	{
		exep.exepMass();
	}
	catch (...)
	{
		cout << "Catch(...)" << endl;
	}
	cout << "MasA2 * MasB2: " << endl;
	res2.printMass();
	cout << endl;

	cout << "masDoubleA: " << endl;
	objADouble.printMass();
	cout << "masDoubleB: " << endl;
	objADouble.printMass();
	try
	{
		res3 = objADouble / objBDouble;
	}
	catch (const exepionMyArray& exep)
	{
		exep.exepMass();
	}
	catch (...)
	{
		cout << "Catch(...)" << endl;
	}

	

	cout << "MasA / MasB: " << endl;
	res3.printMass();


	system("pause");
	return;
}