#include <iostream>
#include <cassert>
#include <string>


using namespace std;

template<typename dataType>
class queueList
{
private:
	struct node
	{
		dataType data;
		node *next;
		node(dataType newData)
		{
			data = newData;
			next = nullptr;
		}
	};
	unsigned size;
	node *head;
	node *tail;
public:
	queueList();
	queueList(dataType *mas, unsigned sizeMas);
	~queueList();
	bool pushBack(dataType var);
	bool popFront(dataType &var);
	bool Back(dataType &var) const;
	bool Front(dataType &var) const;
	bool printQueue()const;
};

template<typename dataType>
queueList<dataType>::queueList()
{
	size = 0;
	head = nullptr;
	tail = nullptr;
}
template<typename dataType>
queueList<dataType>::~queueList()
{
	dataType i;
	while (popFront(i));
}
template<typename dataType>
queueList<dataType>::queueList(dataType *mas, unsigned sizeMas)
{
	for (unsigned i = 0; i < sizeMas; i++)
	{
		pushBack(mas[i]);
	}
}
template<typename dataType>
bool queueList<dataType>::pushBack(dataType var)
{
	node * temp = new node(var);
	if (head == nullptr)
	{
		head = tail = temp;
		size++;
	}
	else
	{
		tail->next = temp;
		tail = temp;
	}
	size++;
	return true;
}
template<typename dataType>
bool queueList<dataType>::popFront(dataType &var)
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
			head = head->next;
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
template<typename dataType>
bool queueList<dataType>::Back(dataType &var) const
{
	if (tail != nullptr)
	{
		var = tail->data;
		return true;
	}
	else
	{
		return false;
	}
}
template<typename dataType>
bool queueList<dataType>::Front(dataType &var) const
{
	if (head != nullptr)
	{
		var = head->data;
		return true;
	}
	else
	{
		return false;
	}
}
template<typename dataType>
bool queueList<dataType>::printQueue()const
{
	node * temp = head;
	while (temp)
	{
		cout << temp->data << " ";
		temp = temp->next;
	}
	cout << endl << "end queue" << endl;
	return true;
}


void main(void)
{
	//---- int
	const int sizeInt = 4;
	int masInt[sizeInt] = { 1,3,5,7 };
	queueList<int> queueInt(masInt, sizeInt);
	queueInt.printQueue();

	int varInt = 100500;
	queueInt.Back(varInt);
	cout << "Back = " << varInt << endl;
	queueInt.Front(varInt);
	cout << "Front = " << varInt << endl;

	queueInt.pushBack(9);
	queueInt.pushBack(11);
	queueInt.popFront(varInt);
	queueInt.popFront(varInt);

	cout << endl << "New: " << endl;
	queueInt.printQueue();

	queueInt.Back(varInt);
	cout << "Back = " << varInt << endl;
	queueInt.Front(varInt);
	cout << "From = " << varInt << endl;


	system("pause");
	return;
}