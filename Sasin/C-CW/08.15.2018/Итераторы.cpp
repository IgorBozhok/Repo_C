#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <list>

using namespace std;

class myMessage
{
private:
	string message;
public:
	myMessage() :message("MyClass")
	{}
	myMessage(string message) :message(message)
	{}
	~myMessage()
	{}
	myMessage(const myMessage &from) = default;
	myMessage(myMessage && from) = default;
	myMessage& operator=(const myMessage& right) = default;
	myMessage& operator=(myMessage&& right) = default;
	void printMessage(void) const
	{
		cout << message;
	}
	void setMessge(string message)
	{
		this->message = message;
	}
	string getMessge(void) const
	{
		return message;
	}
};

void printText(myMessage &mes)
{
	mes.printMessage();
}

bool strCmp(myMessage &first, myMessage & second)
{
	return(first.getMessge() > second.getMessge());
}
void main()
{
	/*
	myMessage mesMas[] = { "Hello",","," ", "world","!" };
	vector<myMessage> myText(mesMas, mesMas + 5);

	vector<myMessage>::iterator beginText = myText.begin();
	vector<myMessage>::iterator endText = myText.end();
	for_each(beginText, endText, printText);
	cout << endl;
	reverse(beginText, endText);
	beginText->setMessge("*");
	for_each(beginText, endText, printText);

	cout << endl;
	*/

	myMessage mesMas[] = { "Hello",","," ", "world","!" };
	list<myMessage> myTextList(mesMas, mesMas + 5);

	for (auto iter = myTextList.begin(); iter != myTextList.end(); iter++)
	{
		iter->printMessage();
	}
	cout << endl;
	myTextList.sort(strCmp);
	for_each(myTextList.begin(), myTextList.end(), printText);
	cout << endl;
	system("pause");
	return;
}