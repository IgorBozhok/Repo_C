#include <iostream>
#include <cassert>
#include <string>
#include <ctime>

using namespace std;

template<typename dataType>
class queueList
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

public:
	queueList();
	queueList(dataType *mas, unsigned sizeMas);
	~queueList();
	bool pushBack(dataType var);
	bool popFront(dataType &var);
	bool Back(dataType &var) const;
	bool Front(dataType &var) const;
	bool printQueue()const;
	bool printRevers()const;
	bool queue(queueList &from);
	
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
	node * temp = new node(var,tail);
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
		temp = temp->right;
	}
	cout << endl << "end queue" << endl;
	return true;
}
template<typename dataType>
bool queueList<dataType>::printRevers()const
{
	node * temp = tail;
	while (temp)
	{
		cout << temp->data << " ";
		temp = temp->left;
	}
	cout << endl << "end queue" << endl;
	return true;
}
template<typename dataType>
bool queueList<dataType>::queue(queueList &from)
{
	dataType varInt = 100500;
	unsigned int RandTem = 0;
	unsigned int randNum = 0;
	printQueue();
	while (true)
	{
		RandTem = rand() % 3;
		randNum = rand() % 10;
		if (RandTem==0)
		{
			popFront(varInt);
			cout << "1 stack: ";
			printQueue();
			cout << endl;
			cout << "2 stack: ";
			from.pushBack(varInt);
			from.printQueue();
		}
		else if (RandTem == 1)
		{
			pushBack(randNum);
			cout << "1 stack: ";
			printQueue();
			cout << endl;
			cout << "2 stack: ";
			from.pushBack(varInt);
			from.printQueue();
		}
		system("pause");
	}
	return true;
}
void main(void)
{
	srand(time(NULL));
	//---- int
	const int sizeInt = 4;
	int masInt[sizeInt] = { 1,3,5,7 };
	queueList<int> queueInt(masInt, sizeInt);
	queueList<int> queueInt1;

	queueInt.queue(queueInt1);






	/*queueInt.printQueue();
	queueInt.printRevers();

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
	queueInt.printRevers();

	queueInt.Back(varInt);
	cout << "Back = " << varInt << endl;
	queueInt.Front(varInt);
	cout << "From = " << varInt << endl;
	
	*/

	system("pause");
	return;
}