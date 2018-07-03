#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cassert>
#include <string>
#include <ctime>
#include <windows.h>
#include <stdio.h>
#include <time.h>



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
		node(dataType newData, node* curTail)
		{
			data = newData;
			right = nullptr;
			left = curTail;

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
	bool pushVIP(dataType var, int randVip);

	dataType peek(int elem);
	

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
bool queueList<dataType>::pushVIP(dataType var, int randVip)
{
	node * temp = new node(var, tail);
	node * boardL = tail;
	node * boardR;
	for (size_t i = 0; i < randVip; i++)
	{
		boardL = boardL->left;
	}
	boardR = boardL->right;
	

	if (head == nullptr)
	{
		head = tail = temp;
		size++;
	}
	else
	{
		
		temp->right = boardL->right;
		temp->left = boardL;
		boardL->right = temp;
		boardR->left = temp;
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
dataType queueList<dataType>::peek(int elem)
{
	node * temp = head;
	dataType _data;
	for (int i = 0; i < this->size; i++)
	{
		if (i == elem)
		{
			_data = temp->data;
		}
		temp = temp->right;
	}
	//cout << endl << "end queue" << endl;
	return _data;
}



template<typename dataType, typename userType>
class printer
{
private:
	queueList<userType> userQueue;
	queueList<dataType> magazineDataQueue;
	queueList<userType> magazineUserQueue;
	int sizeQueue = 3;
	int sizeMagazine = 0;
	string masStr[3] = { "Director","VIP","Worker" };
	dataType vaRDirector;
	dataType varPop;

public:
	printer() = delete;
	printer(userType* masStr, unsigned sizeMas);
	bool NoQueueList();
	bool addDir();
	bool addVIP();
	bool addWoker();
	bool addVipDir();
	bool addDirWor();
	bool addVipWor();
	bool addVipDirWor();
	bool delFrontQueue();
	bool printQueue();
	bool printMagazine();
	bool _printer()
	{
		int randNQueue = 0;
		for (int i = 0; i < 100; i++)
		{
			if (sizeQueue == 0)
			{
				cout << "Конец работы принтера." << endl;
				return false;
			}
			randNQueue = rand() % 15 + 1;
			if (randNQueue >= 8)
			{
				cout << "Очередь на печать: " << endl;
				printQueue();
				NoQueueList();
				cout << endl << endl;
				cout << "Журнал печати: " << endl;
				printMagazine();
				cout << endl;
				cout << "Очередь после печати: " << endl;
				printQueue();
				cout << endl << endl;
			}
			else if (randNQueue == 1)
			{
				cout << "Очередь на печать: " << endl;
				addDir();
				printQueue();
				cout << endl << endl;
				cout << "Журнал печати: " << endl;
				printMagazine();
				delFrontQueue();
				cout << endl;
				cout << "Очередь после печати: " << endl;
				printQueue();
				cout << endl << endl;
			}
			else if (randNQueue == 2)
			{
				cout << "Очередь на печать: " << endl;
				addVIP();
				printQueue();
				cout << endl << endl;
				cout << "Журнал печати: " << endl;
				printMagazine();
				delFrontQueue();
				cout << endl;
				cout << "Очередь после печати: " << endl;
				printQueue();
				cout << endl << endl;
			}
			else if (randNQueue == 3)
			{
				cout << "Очередь на печать: " << endl;
				addWoker();
				printQueue();
				cout << endl << endl;
				cout << "Журнал печати: " << endl;
				printMagazine();
				delFrontQueue();
				cout << endl;
				cout << "Очередь после печати: " << endl;
				printQueue();
				cout << endl << endl;
			}
			else if (randNQueue == 4)
			{
				cout << "Очередь на печать: " << endl;
				addVipDir();
				printQueue();
				cout << endl << endl;
				cout << "Журнал печати: " << endl;
				printMagazine();
				delFrontQueue();
				cout << endl;
				cout << "Очередь после печати: " << endl;
				printQueue();
				cout << endl << endl;
			}
			else if (randNQueue == 5)
			{
				cout << "Очередь на печать: " << endl;
				addDirWor();
				printQueue();
				cout << endl << endl;
				cout << "Журнал печати: " << endl;
				printMagazine();
				delFrontQueue();
				cout << endl;
				cout << "Очередь после печати: " << endl;
				printQueue();
				cout << endl << endl;
			}
			else if (randNQueue == 6)
			{
				cout << "Очередь на печать: " << endl;
				addVipWor();
				printQueue();
				cout << endl << endl;
				cout << "Журнал печати: " << endl;
				printMagazine();
				delFrontQueue();
				cout << endl;
				cout << "Очередь после печати: " << endl;
				printQueue();
				cout << endl << endl;
			}
			else if (randNQueue == 7)
			{
				cout << "Очередь на печать: " << endl;
				addVipDirWor();
				printQueue();
				cout << endl << endl;
				cout << "Журнал печати: " << endl;
				printMagazine();
				delFrontQueue();
				cout << endl;
				cout << "Очередь после печати: " << endl;
				printQueue();
				cout << endl << endl;
			}
			
			
			system("pause");
			system("cls");
		}
		return true;
	}
	

};

template<typename dataType, typename userType>
printer<dataType, userType>::printer(userType* masStr, unsigned sizeMas)
{
	for (unsigned i = 0; i < sizeMas; i++)
	{
		userQueue.pushBack(masStr[i]);
	}
	
}
template<typename dataType, typename userType>
bool printer<dataType, userType>::NoQueueList()
{
	userQueue.popFront(varPop);
	this->sizeQueue--;
	time_t rawtime;
	struct tm * timeinfo;
	char buffer[80];
	time(&rawtime);
	timeinfo = localtime(&rawtime);
	strftime(buffer, 80, "%I:%M:%S.", timeinfo);
	magazineDataQueue.pushFront(buffer);
	magazineUserQueue.pushFront(varPop);
	sizeMagazine++;
	return true;
}
template<typename dataType, typename userType>
bool printer<dataType, userType>::addDir()
{
	userQueue.pushFront(masStr[0]);
	this->sizeQueue++;
	time_t rawtime;
	struct tm * timeinfo;
	char buffer[80];
	time(&rawtime);
	timeinfo = localtime(&rawtime);
	strftime(buffer, 80, "%I:%M:%S.", timeinfo);
	magazineDataQueue.pushFront(buffer);
	magazineUserQueue.pushFront(masStr[0]);
	sizeMagazine++;
	return true;
}
template<typename dataType, typename userType>
bool printer<dataType, userType>::addVIP()
{
	unsigned int randVip = 0;
	randVip = rand() % 15+1;
	if (randVip>=this->sizeQueue)
	{
		userQueue.pushFront(masStr[1]);
		this->sizeQueue++;
		time_t rawtime;
		struct tm * timeinfo;
		char buffer[80];
		time(&rawtime);
		timeinfo = localtime(&rawtime);
		strftime(buffer, 80, "%I:%M:%S.", timeinfo);
		magazineDataQueue.pushFront(buffer);
		magazineUserQueue.pushFront(masStr[1]);
		sizeMagazine++;
			
	}
	else
	{
		userQueue.pushVIP(masStr[1], randVip);
		this->sizeQueue++;
		time_t rawtime;
		struct tm * timeinfo;
		char buffer[80];
		time(&rawtime);
		timeinfo = localtime(&rawtime);
		strftime(buffer, 80, "%I:%M:%S.", timeinfo);
		magazineDataQueue.pushFront(buffer);
		magazineUserQueue.pushFront(masStr[1]);
		sizeMagazine++;
	}
	return true;
}
template<typename dataType, typename userType>
bool printer<dataType, userType>::addWoker()
{
	userQueue.pushBack(masStr[2]);
	this->sizeQueue++;
	time_t rawtime;
	struct tm * timeinfo;
	char buffer[80];
	time(&rawtime);
	timeinfo = localtime(&rawtime);
	strftime(buffer, 80, "%I:%M:%S.", timeinfo);
	magazineDataQueue.pushFront(buffer);
	magazineUserQueue.pushFront(masStr[2]);
	sizeMagazine++;
	return true;
}
template<typename dataType, typename userType>
bool printer<dataType, userType>::addVipDir()
{
	unsigned int randVip = 0;
	randVip = rand() % 15 + 1;
	if (randVip >= this->sizeQueue)
	{
		userQueue.pushFront(masStr[1]);
		this->sizeQueue++;
	}
	else
	{
		userQueue.pushVIP(masStr[1], randVip);
		this->sizeQueue++;
	}
	userQueue.pushFront(masStr[0]);
	this->sizeQueue++;

	time_t rawtime;
	struct tm * timeinfo;
	char buffer[80];
	time(&rawtime);
	timeinfo = localtime(&rawtime);
	strftime(buffer, 80, "%I:%M:%S.", timeinfo);
	magazineDataQueue.pushFront(buffer);
	magazineUserQueue.pushFront(masStr[0]);
	sizeMagazine++;
	return true;
}
template<typename dataType, typename userType>
bool printer<dataType, userType>::addDirWor()
{
	userQueue.pushFront(masStr[0]);
	this->sizeQueue++;
	userQueue.pushBack(masStr[2]);
	this->sizeQueue++;
	time_t rawtime;
	struct tm * timeinfo;
	char buffer[80];
	time(&rawtime);
	timeinfo = localtime(&rawtime);
	strftime(buffer, 80, "%I:%M:%S.", timeinfo);
	magazineDataQueue.pushFront(buffer);
	magazineUserQueue.pushFront(masStr[0]);
	sizeMagazine++;
	return true;
}
template<typename dataType, typename userType>
bool printer<dataType, userType>::addVipWor()
{
	unsigned int randVip = 0;
	randVip = rand() % 15 + 1;
	if (randVip >= this->sizeQueue)
	{
		userQueue.pushFront(masStr[1]);
		this->sizeQueue++;
	}
	else
	{
		userQueue.pushVIP(masStr[1], randVip);
		this->sizeQueue++;
	}
	userQueue.pushBack(masStr[2]);
	this->sizeQueue++;
	time_t rawtime;
	struct tm * timeinfo;
	char buffer[80];
	time(&rawtime);
	timeinfo = localtime(&rawtime);
	strftime(buffer, 80, "%I:%M:%S.", timeinfo);
	magazineDataQueue.pushFront(buffer);
	magazineUserQueue.pushFront(masStr[1]);
	sizeMagazine++;
	return true;

}
template<typename dataType, typename userType>
bool printer<dataType, userType>::addVipDirWor()
{
	unsigned int randVip = 0;
	randVip = rand() % 15 + 1;
	if (randVip >= this->sizeQueue)
	{
		userQueue.pushFront(masStr[1]);
		this->sizeQueue++;
	}
	else
	{
		userQueue.pushVIP(masStr[1], randVip);
		this->sizeQueue++;
	}
	userQueue.pushFront(masStr[0]);
	this->sizeQueue++;
	userQueue.pushBack(masStr[2]);
	this->sizeQueue++;
	time_t rawtime;
	struct tm * timeinfo;
	char buffer[80];
	time(&rawtime);
	timeinfo = localtime(&rawtime);
	strftime(buffer, 80, "%I:%M:%S.", timeinfo);
	magazineDataQueue.pushFront(buffer);
	magazineUserQueue.pushFront(masStr[0]);
	sizeMagazine++;
	return true;
}
template<typename dataType, typename userType>
bool printer<dataType, userType>::delFrontQueue()
{
	userQueue.popFront(varPop);
	this->sizeQueue--;
	return true;
}
template<typename dataType, typename userType>
bool printer<dataType, userType>::printMagazine()
{
	for (int i = 0; i < this->sizeMagazine; i++)
	{
		cout << magazineDataQueue.peek(i) << " " << magazineUserQueue.peek(i) << endl;
	}
	
	return true;
}
template<typename dataType, typename userType>
bool printer<dataType, userType>::printQueue()
{
	userQueue.printQueue();
	return true;
}



void main(void)
{
	setlocale(LC_ALL, "RUS");
	srand(time(NULL));
	int sizeMas = 3;

	string *masStr;
	masStr = new string[sizeMas] { "Director","VIP","Worker"};
	
	printer<string,string> print(masStr, sizeMas);

	print._printer();

	system("pause");
	return;
}