#include <iostream>
#include <cstdlib>
#include <algorithm>
#include <math.h>

using namespace std;

class Matrix
{
private:
	int size;
	int ** Mass2;
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
	void sum(Matrix obj1, Matrix obj2,Matrix& obj3);
	void difference(Matrix obj1, Matrix obj2, Matrix& obj3);

	
};

Matrix::Matrix():size(size), Mass2(nullptr) {}
Matrix::Matrix(int size)
{
	this->size = size;
	Mass2 = new int*[this->size];
	for (int i = 0; i < this->size; i++)
	{
		Mass2[i] = new int[this->size];
	}
}
Matrix::Matrix(const Matrix &obj)
{
	size = obj.size;
	Mass2 = new int*[size];
	for (int i = 0; i < size; i++)
	{
		Mass2[i] = new int[size];
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
	Mass2 = new int*[size];
	for (int i = 0; i < size; i++)
	{
		Mass2[i] = new int[size];
	}

}
void Matrix::initMatrix()
{
	int num = 0;
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
	int* masstemp = nullptr;
	masstemp = new int[size * size];
	int count = 0;
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			masstemp[count] = this->Mass2[i][j];
			count++;
		}
	}
	sort(masstemp, masstemp+(size * size));
	count = 0;
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			this->Mass2[i][j]= masstemp[count];
			count++;
		}
	}
	delete[]masstemp;
}
void Matrix::min()
{
	int min = Mass2[0][0];
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
	cout <<"Min num: "<< min << endl;
}
void Matrix::max()
{
	int max = Mass2[0][0];
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
	cout << "Max num: " << max << endl;
}
void Matrix::sum(Matrix obj1, Matrix obj2, Matrix& obj3)
{
	if (obj1.size <= obj2.size)
	{
		int* masstemp = nullptr;
		masstemp = new int[obj1.size * obj1.size];
		int count = 0;
		for (int i = 0; i < obj1.size; i++)
		{
			for (int j = 0; j < obj1.size; j++)
			{
				masstemp[count] = obj1.Mass2[i][j] + obj2.Mass2[i][j];
				count++;
			}
		}
		count = 0;
		for (int i = 0; i < obj1.size; i++)
		{
			for (int j = 0; j < obj1.size; j++)
			{
				obj3.Mass2[i][j] = masstemp[count];
				count++;
			}
		}
	}
}
void Matrix::difference(Matrix obj1, Matrix obj2, Matrix& obj3)
{
	if (obj1.size <= obj2.size)
	{

		int* masstemp = nullptr;
		masstemp = new int[obj1.size*obj1.size];
		int count = 0;
		for (int i = 0; i < obj1.size; i++)
		{
			for (int j = 0; j < obj1.size; j++)
			{
				masstemp[count] = obj1.Mass2[i][j]  - obj2.Mass2[i][j];
				count++;
			}
		}
		count = 0;
		for (int i = 0; i < obj1.size; i++)
		{
			for (int j = 0; j < obj1.size; j++)
			{
				obj3.Mass2[i][j] = masstemp[count];
				count++;
			}
		}
	}
}


void main(void)
{
	
	Matrix obj;
	obj.setSize();
	obj.creMatrix();
	obj.initMatrix();
	obj.outMatrix();
	obj._sort();
	obj.outMatrix();
	obj.min();
	obj.max();

	
	int size = 0;
	cout << "Size matrix: ";
	cin >> size;
	Matrix obj1(size);
	obj1.initMatrix();
	obj1.outMatrix();
	obj1._sort();
	obj1.outMatrix();
	obj1.min();
	obj1.max();

	Matrix obj2(obj);
	obj2.outMatrix();
	cout << endl;
	Matrix obj3(obj);
	obj3.outMatrix();
	Matrix obj4(obj);
	obj.sum(obj2, obj3, obj4);
	obj4.outMatrix();
	obj.difference(obj2, obj3, obj4);
	obj4.outMatrix();



	
	
	system("pause");
	return;
}