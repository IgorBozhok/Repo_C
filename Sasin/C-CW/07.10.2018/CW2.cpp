#include <iostream>
#include <cassert>
#include <string>


using namespace std;

template <typename dataType>

class spisok
{
protected:
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
	spisok()
	{
		size = 0;
		curTop = nullptr;
	}
	spisok(dataType *mas, unsigned int SizeMas)
	{
		for (unsigned int i = 0; i < SizeMas; i++)
		{
			push(mas[i]);
		}
	}
	virtual bool push(dataType var)
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
	virtual bool pop(dataType &var)
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
	virtual bool print() const
	{
		node * temp = curTop;
		while (temp)
		{
			cout << temp->data << " ";
			temp = temp->next;
		}
		return true;
	}
	~spisok()
	{
		dataType i;
		while (pop(i));
	}
};

template <typename dataType>

class stack : public spisok<dataType>
{
protected:
public:
	stack() = delete;
	stack(dataType *mas, unsigned int SizeMas) :spisok(mas, SizeMas)
	{}
	virtual bool push(dataType var)
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
	virtual bool pop(dataType &var)
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
	virtual bool print() const
	{
		node * temp = curTop;
		while (temp)
		{
			cout << temp->data << " ";
			temp = temp->next;
		}
		return true;
	}
};

template<typename dataType>
class queueList : public spisok<dataType>
{
private:
	struct node
	{
		dataType data;
		node *right;
		node *left;
		node *prior;
		node(dataType newData, node* curTail)
		{
			data = newData;
			right = nullptr;
			left = curTail;

		}
		node(dataType newData, node* curTail, node *prior)
		{
			data = newData;
			right = nullptr;
			left = curTail;
			this->prior = prior;

		}
	};
	unsigned size;
	node *head;
	node *tail;
	node *prior;
protected:
public:
	queueList() = delete;
	queueList(dataType *mas, unsigned int SizeMas) 
	{
		for (unsigned i = 0; i < SizeMas; i++)
		{
			push(mas[i]);
		}
	}
	virtual bool push(dataType var)
	{
		node * temp = new node(var, tail);
		if (head == nullptr)
		{
			head = tail = temp;
			size++;
		}
		else
		{
			temp->left = tail;
			tail->right = temp;
			tail = temp;
			size++;
		}

		return true;
	}
	virtual bool pop(dataType &var)
	{
		if (head != nullptr)
		{
			var = head->data;
			node * temp = head;
			if (head == tail)
			{
				head = tail = nullptr;
				size--;
			}
			else
			{
				head = head->right;
				head->left = nullptr;
				size--;
			}
			delete temp;
			return true;
		}
		else
		{
			return false;
		}
	}
	virtual bool print() const
	{
		node * temp = head;
		while (temp)
		{
			cout << temp->data << " ";
			temp = temp->right;
		}
		cout << endl << "end queue" << endl;
		return true;
	}
};

void main(void)
{
	
	int size = 4;
	int *massInt = nullptr;
	int var = 0;
	massInt = new int[size] {1, 2, 3, 4};

	int size2 = 6;
	int *massInt1 = nullptr;
	int var1 = 0;
	massInt1 = new int[size2] {-1, 2, -3, 4,-5,6};


	stack<int> objStack(massInt, 4);
	queueList<int> objQueueList(massInt1, size2);

	objStack.print();
	cout << endl;
	objStack.pop(var);
	objStack.print();
	cout << endl;
	objStack.push(var);
	objStack.print();

	cout << "====================================" << endl;

	objQueueList.print();
	objQueueList.push(var1);
	objQueueList.print();
	system("pause");
	return;
}






