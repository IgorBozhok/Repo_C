#include <iostream>
#include <ctime>
using namespace std;


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
		Matrix(userType ** arr , unsigned int sizeI, unsigned int sizeJ);
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
	template<typename userType>
	 Matrix<userType>::Matrix(const Matrix & from)
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
	template<typename userType>
	Matrix<userType>& Matrix<userType>::operator=(const Matrix & from)
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
		return *this;
	}
	template<typename userType>
	Matrix<userType> Matrix<userType>::operator+(const Matrix &from)
	{
		userType ** tmpArr =nullptr;
		tmpArr = new userType*[this->sizeI];
		for (int i = 0; i < sizeI; i++)
		{
			tmpArr[i] = new userType[this->sizeJ];
		}

		for (int i = 0; i < sizeI; i++)
		{
			for (int j = 0; j < sizeJ; j++)
			{
				tmpArr[i][j] = this->arr[i][j] + from.arr[i][j];
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
	Matrix<userType> Matrix<userType>::operator-(const Matrix &from)
	{
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
				tmpArr[i][j] = this->arr[i][j] - from.arr[i][j];
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
	Matrix<userType> Matrix<userType>::operator*(const Matrix &from)
	{
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
				tmpArr[i][j] = this->arr[i][j] * from.arr[i][j];
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
	Matrix<userType> Matrix<userType>::operator/(const Matrix &from)
	{
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
				tmpArr[i][j] = this->arr[i][j] / from.arr[i][j];
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
		for (int i = 0; i < this->sizeJ; i++)
		{
			delete[]arr[i];
		}
		delete[]arr;
	}
}

using matrix_fun::Matrix;

void main(void)
{
	srand(time(NULL));
	int ** Mass;
	Mass = new int*[5];
	for (int i = 0; i < 5; i++)
	{
		Mass[i] = new int[5];
	}
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			Mass[i][j] = rand() % 100 -50;
		}
	}

	double ** MassDouble;
	MassDouble = new double*[5];
	for (int i = 0; i < 5; i++)
	{
		MassDouble[i] = new double[5];
	}
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			MassDouble[i][j] = (double)rand() / (double)RAND_MAX * (20 - -12) + -12;
		}
	}



	Matrix<int>  obj(Mass,5,5);
	obj.print();
	cout << endl;

	Matrix<int> obj1(obj);
	obj1.print();
	cout << endl;

	Matrix<int> obj2;
	obj2 = obj;
	obj2.print();
	cout << endl;

	Matrix<int> obj3;
	obj3 = obj + obj1;
	obj3.print();
	cout << endl;

	Matrix<int> obj4;
	obj4 = obj - obj1;
	obj4.print();
	cout << endl;

	Matrix<int> obj5;
	obj5 = obj * obj1;
	obj5.print();
	cout << endl;

	Matrix<double> obj6(MassDouble,5,5);
	obj6.print();
	cout << endl;
	Matrix<double> obj7;
	obj7 = obj6;
	cout << endl;
	obj7.print();
	cout << endl;
	Matrix<double> obj8;
	obj8 = obj6 / obj7;
	obj8.print();
	cout << endl;


	for (int i = 0; i < 5; i++)
	{
		delete[]Mass[i];
	}
	delete[]Mass;

	for (int i = 0; i < 5; i++)
	{
		delete[]MassDouble[i];
	}
	delete[]MassDouble;

	system("pause");
	return;
}