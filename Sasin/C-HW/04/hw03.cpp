#include <iostream>
#include <cstdlib>
#include <algorithm>
#include <math.h>

using namespace std;

class Matrix
{
private:
	int size;
	double ** Mass2;
public:
	Matrix();
	Matrix(int size);
	Matrix(const Matrix &obj);
	~Matrix();
	void creMatrix();
	void initMatrix();
	void outMatrix();
	void setSize();
	void _sort();
	void min();
	void max();
	void sum(Matrix &obj);
	void difference(Matrix &obj1);
	void multiplication(Matrix &obj1);
	void division(Matrix &obj1);
};

Matrix::Matrix() :size(size), Mass2(nullptr) {}
Matrix::Matrix(int size)
{
	this->size = size;
	Mass2 = new double*[this->size];
	for (int i = 0; i < this->size; i++)
	{
		Mass2[i] = new double[this->size];
	}
}
Matrix::Matrix(const Matrix &obj)
{
	size = obj.size;
	Mass2 = new double*[size];
	for (int i = 0; i < size; i++)
	{
		Mass2[i] = new double[size];
	}

	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			this->Mass2[i][j] = obj.Mass2[i][j];
		}
	}
}
Matrix::~Matrix()
{
	if (Mass2 != nullptr)
	{
		for (int i = 0; i < size; i++)
		{
			delete[]Mass2[i];
		}
		delete[]Mass2;
	}
}

void Matrix::creMatrix()
{
	Mass2 = new double*[size];
	for (int i = 0; i < size; i++)
	{
		Mass2[i] = new double[size];
	}

}
void Matrix::initMatrix()
{
	double num = 0;
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			cout << "Num [" << i << "][" << j << "]: ";
			cin >> num;
			this->Mass2[i][j] = num;
		}
	}
}
void Matrix::outMatrix()
{
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			cout << Mass2[i][j] << " ";
		}
		cout << endl;
	}
}
void Matrix::setSize()
{
	cout << "Size matrix: ";
	cin >> size;
}
void Matrix::_sort()
{
	double* masstemp = nullptr;
	masstemp = new double[size * size];
	int count = 0;
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			masstemp[count] = this->Mass2[i][j];
			count++;
		}
	}
	sort(masstemp, masstemp + (size * size));
	count = 0;
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			this->Mass2[i][j] = masstemp[count];
			count++;
		}
	}
	delete[]masstemp;
}
void Matrix::min()
{
	double min = Mass2[0][0];
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			if (min > Mass2[i][j])
			{
				min = Mass2[i][j];
			}
		}
	}
	cout << "Min elem Matrix: " << min << endl;
}
void Matrix::max()
{
	double max = Mass2[0][0];
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			if (max < Mass2[i][j])
			{
				max = Mass2[i][j];
			}
		}
	}
	cout << "Max elem Matrix: " << max << endl;
}
void Matrix::sum(Matrix &obj)
{

	if (this->size > obj.size)
	{
		for (int i = 0; i < obj.size; i++)
		{
			for (int j = 0; j < obj.size; j++)
			{
				this->Mass2[i][j] = this->Mass2[i][j] + obj.Mass2[i][j];
			}
		}
		this->outMatrix();
	}
	else if (this->size <= obj.size)
	{
		for (int i = 0; i <this->size; i++)
		{
			for (int j = 0; j < this->size; j++)
			{
				obj.Mass2[i][j] = this->Mass2[i][j] + obj.Mass2[i][j];
			}
		}
		obj.outMatrix();
	}

}
void Matrix::difference(Matrix &obj)
{
	if (this->size > obj.size)
	{
		for (int i = 0; i < obj.size; i++)
		{
			for (int j = 0; j < obj.size; j++)
			{
				this->Mass2[i][j] = this->Mass2[i][j] - obj.Mass2[i][j];
			}
		}
		this->outMatrix();
	}
	else if (this->size <= obj.size)
	{
		for (int i = 0; i <this->size; i++)
		{
			for (int j = 0; j < this->size; j++)
			{
				obj.Mass2[i][j] = this->Mass2[i][j] - obj.Mass2[i][j];
			}
		}
		obj.outMatrix();
	}
}
void Matrix::multiplication(Matrix &obj)
{
	if (this->size > obj.size)
	{
		for (int i = 0; i < obj.size; i++)
		{
			for (int j = 0; j < obj.size; j++)
			{
				this->Mass2[i][j] = this->Mass2[i][j] * obj.Mass2[i][j];
			}
		}
		this->outMatrix();
	}
	else if (this->size <= obj.size)
	{
		for (int i = 0; i <this->size; i++)
		{
			for (int j = 0; j < this->size; j++)
			{
				obj.Mass2[i][j] = this->Mass2[i][j] * obj.Mass2[i][j];
			}
		}
		obj.outMatrix();
	}
}
void Matrix::division(Matrix &obj)
{
	if (this->size > obj.size)
	{
		for (int i = 0; i < obj.size; i++)
		{
			for (int j = 0; j < obj.size; j++)
			{
				this->Mass2[i][j] = this->Mass2[i][j] / obj.Mass2[i][j];
			}
		}
		this->outMatrix();
	}
	else if (this->size <= obj.size)
	{
		for (int i = 0; i <this->size; i++)
		{
			for (int j = 0; j < this->size; j++)
			{
				obj.Mass2[i][j] = this->Mass2[i][j] / obj.Mass2[i][j];
			}
		}
		obj.outMatrix();
	}
}

void main(void)
{
	setlocale(LC_ALL, "RUS");
	Matrix obj;
	obj.setSize();
	obj.creMatrix();
	obj.initMatrix();
	cout << endl;
	obj.min();
	obj.max();
	cout << endl;
	cout << "Sort Matrix: " << endl;
	obj._sort();
	obj.outMatrix();

	cout << endl;
	cout << endl;

	int size = 0;
	cout << "Size matrix: " << endl;
	cin >> size;
	Matrix obj1(size);
	obj1.initMatrix();
	cout << endl;
	obj1.min();
	obj1.max();
	cout << endl;
	cout << "Sort Matrix: " << endl;
	obj1._sort();
	obj1.outMatrix();

	cout << endl;
	cout << endl;

	cout << "Сумма: " << endl;
	cout << "Matrix 1: " << endl;
	obj.outMatrix();
	cout << "Matrix 2: " << endl;
	obj1.outMatrix();
	cout << endl;
	Matrix objSum(obj);
	cout << "res: " << endl;
	objSum.sum(obj1);
	cout << endl;
	cout << endl;
	cout << "Разность: " << endl;
	cout << "Matrix 1: " << endl;
	obj.outMatrix();
	cout << "Matrix 2: " << endl;
	obj1.outMatrix();
	cout << endl;
	cout << "res: " << endl;
	Matrix objdif(obj);
	objdif.difference(obj1);
	cout << endl;
	cout << endl;
	cout << "Произведение: " << endl;
	cout << "Matrix 1: " << endl;
	obj.outMatrix();
	cout << "Matrix 2: " << endl;
	obj1.outMatrix();
	cout << endl;
	Matrix objMul(obj);
	cout << "res: " << endl;
	objMul.multiplication(obj1);
	cout << endl;
	cout << endl;
	cout << "Деление: " << endl;
	cout << "Matrix 1: " << endl;
	obj.outMatrix();
	cout << "Matrix 2: " << endl;
	obj1.outMatrix();
	cout << endl;
	Matrix objDiv(obj);
	cout << "res: " << endl;
	objMul.division(obj1);

	system("pause");
	return;
}