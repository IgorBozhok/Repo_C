#include <iostream>
#include <cassert>
#include <string>


using namespace std;

template <typename dataType>

class stacList
{
private:
	struct node
	{
		dataType data;
		node* next;
		node(dataType newDAta, node * noteNote)
		{
			data = newDAta;
			next = noteNote;
		}
	};

	unsigned int size;
	node *curTop;
public:
	stacList()
	{
		size = 0;
		curTop = nullptr;
	}
	stacList(dataType *mas, unsigned int SizeMas)
	{
		for (unsigned int i = 0; i < SizeMas; i++)
		{
			push(mas[i]);
		}
	}


	bool top(dataType &var)
	{
		if (size>0)
		{
			var = curTop->data;
			return true;
		}
		else
		{
			false;
		}
	}const

	bool push(dataType var)
	{
		node *temp = new node(var, curTop);
		if (temp != nullptr)
		{
			curTop = temp;
			size++;
			return true;
		}
		else
		{
			return false;
		}
	}
	bool pop(dataType &var)
	{
		if (curTop != nullptr)
		{
			var = curTop->data;
			node *temp = curTop->next;
			delete curTop;
			curTop = temp;
			size--;
			return true;
		}
		else
		{
			return false;
		}
	}

	dataType peek(int elem)  
	{
		stacList temp;
		dataType var;
		int tempVar = 0;
		for (int i = 0; i < this->size;)
		{
			this->pop(tempVar);
			temp.push(tempVar);
		}
		int j = 0;
		for (int i = 0; i < temp.size;)
		{
			temp.pop(tempVar);
			if (elem == j)
			{
				var = tempVar;
			}
			j++;
			this->push(tempVar);
		}

		return var;
	}
	dataType get(int elem)
	{
		return peek(elem);
	}

	stacList& operator=(stacList& from)
	{
		int tmpS = from.size;
		for (int i = 0; i < tmpS; i++)
		{
			this->push(from.get(i));
		}
		return *this;
	}

	stacList& operator+(stacList& right)
	{
		int tmpS = right.size;
		for (int i = 0; i < tmpS; i++)
		{
			this->push(right.get(i));
		}
		return *this;
	}

	stacList operator*(stacList& right)
	{
		stacList* res = new stacList;
		int tmpSL = this->size;
		int tmpSR = right.size;
		dataType var = 0;
		for (int i = 0; i < tmpSL; i++)
		{
			for (int j = 0; j < tmpSR; j++)
			{
				
				if (this->get(i) == right.get(j))
				{
					res->push(this->get(i));
					if (res->size > 1)
					{
						for (int k = 0; k < res->size-1; k++)
						{
							if (res->get(k) == res->get(res->size - 1))
							{
								res->pop(var);
							}
						}
					}
				}
			}	
		}

		return *res;
	}

	bool printStack() const
	{
		node * temp = curTop;
		while (temp)
		{
			cout << temp->data << " ";
			temp = temp->next;
		}
		cout << endl;
		return true;
	}

	~stacList()
	{
		dataType i;
		while (pop(i));
	}
};


void main()
{
	setlocale(LC_ALL, "Rus");
	const int sizeMas = 8;
	const int sizeMas1 = 10;
	int mas[sizeMas] = { 1,3,5,3,9,1,15,-15 };
	int mas1[sizeMas1] = { 1,3,7,5,9,11,15,15,1,100};
	int var = 0;
	
	stacList<int> stack(mas, sizeMas);
	stacList<int> stack1(mas1, sizeMas1);
	stacList<int> res,res1,res2,res3,res4;

	cout << "1 Стэк: ";
	stack.printStack();

	cout << "2 Стэк: ";
	stack1.printStack();
	
	cout << "3 Стэк = 1 стэку (перегрузка оператор=): ";
	res = stack; 
	res.printStack();

	cout << "4 Стэк = 2 стэку (перегрузка оператор=): ";
	res1 = stack1;
	res1.printStack();

	cout << "5 Стэк = 3 стэк + 4 стэк (перегрузка оператор+): ";
	res2 = res + res1;
	res2.printStack();

	cout << "6 Стэк = 5 стэк * 4 стэк (перегрузка оператор+): ";
	
	res3 = res2*res1;
	res3.printStack();

	system("pause");
	return;
}