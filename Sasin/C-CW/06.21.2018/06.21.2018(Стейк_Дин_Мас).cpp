#include <iostream>

using namespace std;

class stacMas
{
private:
	double * mas = nullptr;
	unsigned int curSize = 0;
	unsigned int maxSize = 0;
public:
	stacMas() = delete;
	stacMas(unsigned int maxSize)
	{
		this->maxSize = maxSize;
		mas = new double[maxSize];
	}
	stacMas(double *mas, unsigned int curSize)
	{
		this->maxSize = curSize + 10;
		this->curSize = curSize;
		this->mas = new double[maxSize];
		for (int i = 0; i < curSize; i++)
		{
			this->mas[i] = mas[i];
		}
	}
	stacMas(const stacMas & from)
	{
		this->curSize = from.curSize;
		this->maxSize = from.maxSize;
		this->mas = new double[this->maxSize];
		for (int i = 0; i < this->curSize; i++)
		{
			this->mas[i] = from.mas[i];
		}
	}
	stacMas(const stacMas && from)
	{
		this->curSize = from.curSize;
		this->maxSize = from.maxSize;
		this->mas = new double[this->maxSize];
		for (int i = 0; i < this->curSize; i++)
		{
			this->mas[i] = from.mas[i];
		}
	}
	stacMas& operator=(const stacMas &from)
	{
		this->curSize = from.curSize;
		this->maxSize = from.maxSize;
		delete[]this->mas;
		this->mas = new double[this->maxSize];
		for (int i = 0; i < this->curSize; i++)
		{
			this->mas[i] = from.mas[i];
		}
		return *this;
	}
	stacMas& operator=(const stacMas &&from)
	{
		this->curSize = from.curSize;
		this->maxSize = from.maxSize;
		delete[]this->mas;
		this->mas = new double[this->maxSize];
		for (int i = 0; i < this->curSize; i++)
		{
			this->mas[i] = from.mas[i];
		}
		return *this;
	}
	~stacMas()
	{
		delete[]mas;
	}

	bool top(double &userTop) const
	{
		if (this->curSize == 0)
		{
			return false;
		}
		else
		{
			userTop = mas[curSize - 1];
			return true;
		}
	}
	bool push(double var)
	{
		if (curSize== 100)
		{
			return false;
		}

		if (curSize == maxSize)
		{
			maxSize += 10;
			double *tempMas = new double[maxSize];
			for (int i = 0; i < curSize; i++)
			{
				tempMas[i] = mas[i];
			}
			delete[]mas;
			mas = tempMas;
		}
		mas[curSize] = var;
		curSize++;
		return true;
	}
	bool pop(double &var)
	{
		if (curSize == 0)
		{
			return false;
		}
		else
		{
			var = mas[curSize - 1];
			curSize--;
			return true;
		}
	}


};

class stackTest
{
private:
	stacMas *stack0, *stack1, *stack2;
public:
	stackTest()
	{
		double mas[10] = { 1.1,2.2,3.3,4.4,5.5,6.6,7.7 };
		stack0 = new stacMas(10);
		stack1 = new stacMas(mas, 10);
		stack2 = nullptr;
	}
	void printStack() const
	{
		stacMas temp = *stack1;
		double var = 0.0;
		//bool result = true;
		while (temp.pop(var))
		{
			//result = temp.pop(var);
			cout << var << endl;
		}
		return;
	}


};



void main()
{
	stackTest test;
	test.printStack();





	system("pause");
	return;
}