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
		dataType data1;
		node *right;
		node *left;
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

public:
	queueList();
	queueList(dataType *mas, unsigned sizeMas);
	~queueList();
	bool pushBack(dataType var);
	bool pushFront(dataType var);
	bool popFront(dataType &var);
	bool Back(dataType &var) const;
	bool Front(dataType &var) const;
	bool printQueue()const;
	bool printRevers()const;
	bool queue(queueList &from);
	bool pushPrior(dataType var, int RanDPrior);
	
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
bool queueList<dataType>::pushFront(dataType var)
{
	node * temp = new node(var, head);
	if (head == nullptr)
	{
		head = tail = temp;
		size++;
	}
	else
	{
		temp->left = nullptr;
		temp->right = head;
		head->left = temp;
		head = temp;
		size++;
	}

	return true;
}
template<typename dataType>
bool queueList<dataType>::pushPrior(dataType var, int RanDPrior)
{

	node * boardL = tail;
	node * boardR;
	for (size_t i = 0; i < 3; i++)
	{
		boardL = boardL->left;

	}
	boredR = boardL->right;
	
	node * temp = new node(var, tmp);
	
	if (head == nullptr)
	{
		head = tail = temp;
		size++;
	}
	else
	{
		temp->right = tmp;
		temp->left = tmp->right;
		tmp = temp;
		tmp->right = temp;
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
	//cout << endl << "end queue" << endl;
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
	//cout << endl << "end queue" << endl;
	return true;
}
template<typename dataType>
bool queueList<dataType>::queue(queueList &from)
{
	dataType prior = 100500;
	dataType varPop = 0;
	unsigned int RandTem = 0;
	unsigned int RanDPrior = 0;
	dataType RandNumBack = 0;
	dataType RandNumFront = 0;
	printQueue();
	cout << endl;
	while (true)
	{
		RandTem = rand() % 4;
		RandNumBack = rand() % 10;
		RandNumFront = rand() % 10;
		RanDPrior = rand() % 15;
		if (RandTem==0)
		{
			cout << "Fell out: " << RandTem << " В очередь не добавляет."<<  endl;
			cout << endl;
			popFront(varPop);
			cout << "Queue: ";
			printQueue();
			cout << endl;
			cout << "Magazine: ";
			from.pushBack(varPop);
			from.printQueue();
			cout << endl;
		}
		else if (RandTem == 1)
		{
			cout << "Fell out: " << RandTem << " Добавляем в конец очереди: " << RandNumBack << "." << endl;
			cout << endl;
			pushBack(RandNumBack);
			popFront(varPop);
			cout << "Queue: ";
			printQueue();
			cout << endl;
			cout << "Magazine: ";
			from.pushBack(varPop);
			from.printQueue();
			cout << endl;
		}
		else if (RandTem == 2)
		{
			cout << "Fell out: " << RandTem << " Добавляем в начало очереди : "<< RandNumFront<< " и добавляем в конец очереди: " << RandNumBack << "." << endl;
			cout << endl;
			popFront(varPop);
			pushBack(RandNumBack);
			pushFront(RandNumFront);
			cout << "Queue: ";
			printQueue();
			cout << endl;
			cout << "Magazine: ";
			from.pushBack(varPop);
			from.printQueue();
			cout << endl;
		}
		else if (RandTem == 3)
		{
			cout << "Fell out: " << RandTem << " Добавляем в очереди с приоритетом : "<< endl;
			cout << endl;
			popFront(varPop);
			pushPrior(prior, RanDPrior);
			cout << "Queue: ";
			printQueue();
			cout << endl;
			cout << "Magazine: ";
			from.pushBack(varPop);
			from.printQueue();
			cout << endl;
		}

		system("pause");
		system("cls");
	}
	return true;
}




void main(void)
{
	setlocale(LC_ALL, "RUS");
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