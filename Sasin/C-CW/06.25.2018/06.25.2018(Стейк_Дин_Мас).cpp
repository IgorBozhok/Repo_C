//#define NDEBUG
#include <iostream>
#include <cassert>


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

	unsigned int getCurSize(void) const
	{
		return curSize;
	}
	unsigned int gemaxSize(void) const
	{
		return maxSize;
	}
	bool peek(unsigned int index,double &var) const
	{
		if (index < curSize)
		{
			var = mas[index];
			return true;
		}
		else
		{
			return false;
		}
	}

};

class stackMasTest
{
private:
	static stacMas *stack;
public:
	stackMasTest() = delete;

	static bool top_test_in123456_ret5()
	{
		double res = 0.0;
		bool ret = false;
		const int size = 10;
		double mas[size] = { 1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7, 8.8, 9.9, 0.0 };
		stack = new stacMas(mas, size);

		//--- full
		ret = stack->top(res);
		assert(res == mas[size-1]);
		assert(ret == true);
		delete stack;

		//--- empty
		stack = new stacMas(10);
		ret = stack->top(res);
		assert(ret == false);

		//--- test result
		cout << "Top-test is complete" << endl;
		delete stack;
		return true;
	}

	static bool push_test_ret5_6_8()
	{
		double res = 0.0;
		bool ret = false;
		const int size = 10;
		const int indexSize = size - 6; // --- TODO:
		int index = indexSize;// TODO;
		

		double mas[size] = { 1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7, 8.8, 9.9, 0.0 };
		stack = new stacMas(mas, size - 6);
		
		//--- push 5.5
		ret = stack->push(mas[index]);
		assert(ret == true);
		ret = stack->top(res);
		assert(res == mas[index]);

		//--- push 6.6
		index ++;
		ret = stack->push(mas[index]);
		assert(ret == true);
		ret = stack->top(res);
		assert(res == mas[index]);
		//--- push 8.8
		index++;
		ret = stack->push(mas[index]);
		index++;
		ret = stack->push(mas[index]);
		ret = stack->top(res);
		assert(res == mas[index]);

		//--- curSize 8
		unsigned int curSize = stack->getCurSize();
		assert(curSize == (index + 1));

		//--- test result
		cout << "Push-test is complete" << endl;
		delete stack;
		return true;

	}

	static bool pop_test_4_4()
	{
		double res = 0.0;
		bool ret = false;
		const int size = 10;
		int index = size-1;// TODO;
		int curSizeT = 0;
		double mas[size] = { 1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7, 8.8, 9.9, 0.0 };
		stack = new stacMas(mas, size);

		//--- pop 0.0
		curSizeT = stack->getCurSize();
		ret = stack->pop(res);
		assert(ret == true);
		assert(res == mas[index]);
		curSizeT--;
		index--;
		assert(curSizeT == stack->getCurSize());
		stack->top(res);
		assert(res = mas[index]);

		//--- pop 9.9
		curSizeT = stack->getCurSize();
		ret = stack->pop(res);
		assert(ret == true);
		assert(res == mas[index]);
		curSizeT--;
		index--;
		assert(curSizeT == stack->getCurSize());
		stack->top(res);
		assert(res = mas[index]);

		//--- pop 8.8
		curSizeT = stack->getCurSize();
		ret = stack->pop(res);
		assert(ret == true);
		assert(res == mas[index]);
		curSizeT--;
		index--;
		assert(curSizeT == stack->getCurSize());
		stack->top(res);
		assert(res = mas[index]);

		//--- empty 

		stack = new stacMas(10);
		ret = stack->pop(res);
		assert(ret == false);

		//--- test result
		cout << "Pop-test is complete" << endl;
		delete stack;
		return true;

	}

	static bool peek_test_5_()
	{
		double res = 0.0;
		bool ret = false;
		const int size = 10;
		double mas[size] = { 1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7, 8.8, 9.9, 0.0 };
		stack = new stacMas(mas, size);
		ret = stack->peek(5, res);
		assert(ret == true);
		assert(res == mas[5]);
		ret = stack->peek(20, res);
		assert(ret == false);

		//--- test result
		cout << "peek-test is complete" << endl;
		delete stack;
		return true;
		
	}

};


stacMas * stackMasTest::stack = nullptr;


void main()
{
	
	stackMasTest::top_test_in123456_ret5();
	stackMasTest::push_test_ret5_6_8();
	stackMasTest::pop_test_4_4();
	stackMasTest::peek_test_5_();
	system("pause");
	return;
}