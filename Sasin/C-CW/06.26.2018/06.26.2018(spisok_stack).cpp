
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
	bool printStack() const
	{
		node * temp = curTop;
		while (temp)
		{
			cout << temp->data << " ";
			temp = temp->next;
		}
		cout << endl << "end stack" << endl;
		return true;
	}

	~stacList()
	{
		dataType i;
		while (pop(i));
	}
};


class  Str
{
private:
	string str;
	stacList<char> test;
	int size;
public:
	Str()
	{
		str = nullptr;
		size = 0;
	}
	
	Str(string str)
	{
		this->str = str;
		for (int i = 0; i < str.length(); i++)
		{
			if (str[i] == '[' || str[i] == ']' || str[i] == '{' || str[i] == '}' || str[i] == '(' || str[i] == ')')
			{
				this->test.push(str[i]);
				size++;
			}
		}
	}
	void printStack()
	{
		test.printStack();
	}
	
	void find()
	{
		char temp;
		char temp1;
		test.pop(temp);
		if (temp == ']' || temp == '}' || temp == ')')
		{
			cout << "false" << endl;
		}
		
		
	}
};

void main()
{
	string tes = "[454]{43234}2423((()))";

	Str TEST(tes);
	TEST.printStack();
	TEST.find();



	/*
	const int sizeMas = 8;
	int mas[sizeMas] = { 1,-3,5,-7,9,-11,13,-15 };
	stacList stack(mas, sizeMas);
	stack.printStack();
	stack.push(0);
	stack.push(17);


	int var = 100500;
	stack.top(var);
	cout << "Top = " << var << endl;
	cout << "-------------------" << endl;
	while (stack.pop(var))
	{
		cout << var << endl;
	}
	*/
	system("pause");
	return;
}