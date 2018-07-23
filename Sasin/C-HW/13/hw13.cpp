#include <iostream>
#include <ctime>
using namespace std;

class exepionMyArray
{
public:
	enum exepionMyArrayType
	{
		UNKNOW_MY_ARR_EXEP = 0,
		INC_SIZE__MY_ARR_EXEP,
		INC_MEM__MY_ARR_EXEP,
		DIVISION_BY_ZERO

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
	case DIVISION_BY_ZERO:
	{
		cout << "Division by zero error" << endl;
		break;
	}
	default:
	{
		cout << "Inc code error" << endl;
		break;
	}
	}
}

namespace matrix_fun
{
	template<typename userType>
	class Matrix
	{
	private:
		userType ** arr;
		unsigned int sizeI;
		unsigned int sizeJ;
	public:
		Matrix();
		Matrix(userType ** arr, unsigned int sizeI, unsigned int sizeJ);
		Matrix(const Matrix & from);
		Matrix& operator=(const Matrix &from);
		Matrix operator+(const Matrix &from);
		Matrix operator-(const Matrix &from);
		Matrix operator*(const Matrix &from);
		Matrix operator/(const Matrix &from);
		void print();
		~Matrix();
	};
	template<typename userType>
	Matrix<userType>::Matrix()
	{
		arr = nullptr;
		sizeI = 0;
		sizeJ = 0;
	}
	template<typename userType>
	Matrix<userType>::Matrix(userType ** arr, unsigned int sizeI, unsigned int sizeJ)
	{
		if (sizeI <= 0 || sizeJ <=0 || arr == nullptr)
		{
			this->arr = nullptr;
			this->sizeI = 0;
			this->sizeJ = 0;
		}
		else
		{
			this->sizeI = sizeI;
			this->sizeJ = sizeJ;
			this->arr = new userType*[this->sizeI];
			for (int i = 0; i < sizeI; i++)
			{
				this->arr[i] = new userType[sizeJ];
			}
			for (int i = 0; i < this->sizeI; i++)
			{
				for (int j = 0; j < this->sizeJ; j++)
				{
					this->arr[i][j] = arr[i][j];
				}
			}
		}
	}
	template<typename userType>
	Matrix<userType>::Matrix(const Matrix & from)
	{
		if (from.sizeI <= 0 || from.sizeJ <= 0 || from.arr == nullptr)
		{
			this->arr = nullptr;
			this->sizeI = 0;
			this->sizeJ = 0;
		}
		else
		{
			this->sizeI = from.sizeI;
			this->sizeJ = from.sizeJ;
			this->arr = new userType*[this->sizeI];
			for (int i = 0; i < sizeI; i++)
			{
				this->arr[i] = new userType[sizeJ];
			}
			for (int i = 0; i < this->sizeI; i++)
			{
				for (int j = 0; j < this->sizeJ; j++)
				{
					this->arr[i][j] = from.arr[i][j];
				}
			}
		}	

	}
	template<typename userType>
	Matrix<userType>& Matrix<userType>::operator=(const Matrix & from)
	{
		if (this->arr != nullptr)
		{
			for (int i = 0; i < this->sizeI; i++)
			{
				delete[]arr[i];
			}
			delete[]arr;
		}
		if (from.sizeI <= 0 || from.sizeJ <= 0 || from.arr == nullptr)
		{
			this->arr = nullptr;
			this->sizeI = 0;
			this->sizeJ = 0;
		}
		else
		{
			this->sizeI = from.sizeI;
			this->sizeJ = from.sizeJ;
			this->arr = new userType*[this->sizeI];
			for (int i = 0; i < sizeI; i++)
			{
				this->arr[i] = new userType[sizeJ];
			}
			for (int i = 0; i < this->sizeI; i++)
			{
				for (int j = 0; j < this->sizeJ; j++)
				{
					this->arr[i][j] = from.arr[i][j];
				}
			}
		}
		return *this;
	}
	template<typename userType>
	Matrix<userType> Matrix<userType>::operator+(const Matrix &right)
	{
		if (this->arr == nullptr || right.arr == nullptr)
		{
			throw exepionMyArray(exepionMyArray::exepionMyArrayType::INC_MEM__MY_ARR_EXEP);
			throw;
		}
		
		if (this->sizeI != right.sizeI || this->sizeJ != right.sizeJ || this->sizeI <= 0 || this->sizeJ <= 0 || right.sizeI <= 0 || right.sizeJ<=0 )
		{
			throw exepionMyArray(exepionMyArray::exepionMyArrayType::INC_SIZE__MY_ARR_EXEP);
		}
		userType ** tmpArr = nullptr;
		tmpArr = new userType*[this->sizeI];
		for (int i = 0; i < sizeI; i++)
		{
			tmpArr[i] = new userType[this->sizeJ];
		}

		for (int i = 0; i < sizeI; i++)
		{
			for (int j = 0; j < sizeJ; j++)
			{
				tmpArr[i][j] = this->arr[i][j] + right.arr[i][j];
			}
		}
		Matrix res(tmpArr, sizeI, sizeJ);
		for (int i = 0; i < sizeJ; i++)
		{
			delete[]tmpArr[i];
		}
		delete[]tmpArr;
		return res;
	}
	template<typename userType>
	Matrix<userType> Matrix<userType>::operator-(const Matrix &right)
	{
		if (this->arr == nullptr || right.arr == nullptr)
		{
			throw exepionMyArray(exepionMyArray::exepionMyArrayType::INC_MEM__MY_ARR_EXEP);
			throw;
		}

		if (this->sizeI != right.sizeI || this->sizeJ != right.sizeJ || this->sizeI <= 0 || this->sizeJ <= 0 || right.sizeI <= 0 || right.sizeJ <= 0)
		{
			throw exepionMyArray(exepionMyArray::exepionMyArrayType::INC_SIZE__MY_ARR_EXEP);
		}
		userType ** tmpArr = nullptr;
		tmpArr = new userType*[this->sizeI];
		for (int i = 0; i < sizeI; i++)
		{
			tmpArr[i] = new userType[this->sizeJ];
		}

		for (int i = 0; i < sizeI; i++)
		{
			for (int j = 0; j < sizeJ; j++)
			{
				tmpArr[i][j] = this->arr[i][j] - right.arr[i][j];
			}
		}
		Matrix res(tmpArr, sizeI, sizeJ);
		for (int i = 0; i < sizeJ; i++)
		{
			delete[]tmpArr[i];
		}
		delete[]tmpArr;
		return res;
	}
	template<typename userType>
	Matrix<userType> Matrix<userType>::operator*(const Matrix &right)
	{
		if (this->arr == nullptr || right.arr == nullptr)
		{
			throw exepionMyArray(exepionMyArray::exepionMyArrayType::INC_MEM__MY_ARR_EXEP);
			throw;
		}

		if (this->sizeI != right.sizeI || this->sizeJ != right.sizeJ || this->sizeI <= 0 || this->sizeJ <= 0 || right.sizeI <= 0 || right.sizeJ <= 0)
		{
			throw exepionMyArray(exepionMyArray::exepionMyArrayType::INC_SIZE__MY_ARR_EXEP);
		}
		userType ** tmpArr = nullptr;
		tmpArr = new userType*[this->sizeI];
		for (int i = 0; i < sizeI; i++)
		{
			tmpArr[i] = new userType[this->sizeJ];
		}

		for (int i = 0; i < sizeI; i++)
		{
			for (int j = 0; j < sizeJ; j++)
			{
				tmpArr[i][j] = this->arr[i][j] * right.arr[i][j];
			}
		}
		Matrix res(tmpArr, sizeI, sizeJ);
		for (int i = 0; i < sizeJ; i++)
		{
			delete[]tmpArr[i];
		}
		delete[]tmpArr;
		return res;
	}
	template<typename userType>
	Matrix<userType> Matrix<userType>::operator/(const Matrix &right)
	{
		if (this->arr == nullptr || right.arr == nullptr)
		{
			throw exepionMyArray(exepionMyArray::exepionMyArrayType::INC_MEM__MY_ARR_EXEP);
			throw;
		}
		if (this->sizeI != right.sizeI || this->sizeJ != right.sizeJ || this->sizeI <= 0 || this->sizeJ <= 0 || right.sizeI <= 0 || right.sizeJ <= 0)
		{
			throw exepionMyArray(exepionMyArray::exepionMyArrayType::INC_SIZE__MY_ARR_EXEP);
		}
		for (int i = 0; i < right.sizeI; i++)
		{
			for (int j = 0; j < right.sizeJ; j++)
			{
				if (right.arr[i][j] == 0)
				{
					throw exepionMyArray(exepionMyArray::exepionMyArrayType::DIVISION_BY_ZERO);
				}
			}
		}
		userType ** tmpArr = nullptr;
		tmpArr = new userType*[this->sizeI];
		for (int i = 0; i < sizeI; i++)
		{
			tmpArr[i] = new userType[this->sizeJ];
		}

		for (int i = 0; i < sizeI; i++)
		{
			for (int j = 0; j < sizeJ; j++)
			{
				tmpArr[i][j] = this->arr[i][j] / right.arr[i][j];
			}
		}
		Matrix res(tmpArr, sizeI, sizeJ);
		for (int i = 0; i < sizeJ; i++)
		{
			delete[]tmpArr[i];
		}
		delete[]tmpArr;
		return res;
	}

	template<typename userType>
	void Matrix<userType>::print()
	{
		for (int i = 0; i < this->sizeI; i++)
		{
			for (int j = 0; j < this->sizeJ; j++)
			{
				cout << this->arr[i][j] << " ";
			}
			cout << endl;
		}
	}
	template<typename userType>
	Matrix<userType>::~Matrix()
	{
		for (int i = 0; i < this->sizeI; i++)
		{
			delete[]arr[i];
		}
		delete[]arr;
	}
}

using matrix_fun::Matrix;

const int  SizeIA = 5;
const int  SizeJA = 5;
const int  SizeIB = 5;
const int  SizeJB = 5;
const int  SizeDoubI = 5;
const int  SizeDoubJ = 5;
void main(void)
{
	srand(time(NULL));
	int ** MassA;
	MassA = new int*[SizeIA];
	for (int i = 0; i < SizeIA; i++)
	{
		MassA[i] = new int[SizeJA];
	}
	for (int i = 0; i < SizeIA; i++)
	{
		for (int j = 0; j < SizeJA; j++)
		{
			MassA[i][j] = rand() % 100 - 50;
		}
	}

	int ** MassB;
	MassB = new int*[SizeIB];
	for (int i = 0; i < SizeIB; i++)
	{
		MassB[i] = new int[SizeJB];
	}
	for (int i = 0; i < SizeIB; i++)
	{
		for (int j = 0; j < SizeJB; j++)
		{
			MassB[i][j] = rand() % 100 - 50;
		}
	}


	double ** MassDouble;
	MassDouble = new double*[SizeDoubI];
	for (int i = 0; i < SizeDoubI; i++)
	{
		MassDouble[i] = new double[SizeDoubJ];
	}
	for (int i = 0; i < SizeDoubI; i++)
	{
		for (int j = 0; j < SizeDoubJ; j++)
		{
			MassDouble[i][j] = 0.1 *(rand() % 11); //(double)rand() / (double)RAND_MAX * (20 - -12) + -12;
		}
	}



	Matrix<int>  objA(MassA, SizeIA, SizeJA);
	cout << "objA: " << endl;
	objA.print();
	cout << endl;

	Matrix<int> objB(MassB, SizeIB, SizeJB);
	cout << "objB: " << endl;
	objB.print();
	cout << endl;

	Matrix<int> objA1(objA);
	cout << "objA1(objA): " << endl;
	objA.print();
	cout << endl;

	Matrix<int> objB1;
	objB1 = objB;
	cout << "objB1 = objB: " << endl;
	objB1.print();
	cout << endl;

	
	cout << "objPlus = objA1 + objB2: " << endl;
	Matrix<int> objPlus;
	try
	{
		objPlus = objA1 + objB1;
	}
	catch (const exepionMyArray& exep)
	{
		exep.exepMass();
	}
	catch (...)
	{
		cout << "Catch(...)" << endl;
	}
	objPlus.print();
	cout << endl;

	cout << "objExep = objNullptr + objA1: " << endl;
	Matrix<int> objNullptr(nullptr, SizeIA, SizeJA);
	Matrix<int> objExep;
	try
	{
		objExep = objNullptr + objA1;
	}
	catch (const exepionMyArray& exep)
	{
		exep.exepMass();
	}
	catch (...)
	{
		cout << "Catch(...)" << endl;
	}
	cout << endl;

	cout << "objMinus = objA1 - objB1: " << endl;
	Matrix<int> objMinus;
	try
	{
		objMinus = objA1 - objB1;
	}
	catch (const exepionMyArray& exep)
	{
		exep.exepMass();
	}
	catch (...)
	{
		cout << "Catch(...)" << endl;
	}
	objMinus.print();
	cout << endl;

	cout << "objExep = objSize + objA1: " << endl;
	Matrix<int> objSize(MassA, SizeIA, 4);
	Matrix<int> objA1Exep;
	try
	{
		objA1Exep = objSize + objB1;
	}
	catch (const exepionMyArray& exep)
	{
		exep.exepMass();
	}
	catch (...)
	{
		cout << "Catch(...)" << endl;
	}
	cout << endl;


	cout << "objMinus = objA1 - objB1: " << endl;
	Matrix<int> objMult;
	try
	{
		objMult = objA1 * objB1;
	}
	catch (const exepionMyArray& exep)
	{
		exep.exepMass();
	}
	catch (...)
	{
		cout << "Catch(...)" << endl;
	}
	objMinus.print();
	cout << endl;
	
	cout << "obj6: " << endl;
	Matrix<double> obj6(MassDouble, SizeDoubI, SizeDoubJ);
	obj6.print();
	cout << endl;

	cout << "obj7 = obj6 + obj6: " << endl;
	Matrix<double> obj7;
	try
	{
	obj7 = obj6 + obj6;
	}
	catch (const exepionMyArray& exep)
	{
		exep.exepMass();
	}
	catch (...)
	{
		cout << "Catch(...)" << endl;
	}
	obj7.print();
	cout << endl;
	
	cout << "objDivision = obj6 / obj7: " << endl;
	Matrix<double> objDivision;
	try
	{
		objDivision = obj6 / obj7;
	}
	catch (const exepionMyArray& exep)
	{
		exep.exepMass();
	}
	catch (...)
	{
		cout << "Catch(...)" << endl;
	}
	objDivision.print();
	cout << endl;
	
	for (int i = 0; i < SizeIA; i++)
	{
		delete[]MassA[i];
	}
	delete[]MassA;

	for (int i = 0; i < SizeIB; i++)
	{
		delete[]MassB[i];
	}
	delete[]MassB;
	
	for (int i = 0; i < SizeDoubI; i++)
	{
		delete[]MassDouble[i];
	}
	delete[]MassDouble;
	
	system("pause");
	return;
}