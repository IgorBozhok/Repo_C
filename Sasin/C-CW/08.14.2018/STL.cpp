#include <iostream>
#include<vector>
#include<memory>
#include<string>
#include<algorithm>

using namespace std;

void main()
{
	//создание вектора
	vector<int> myVector(5, 100);
	vector<float> myVectorFloat(8);
	vector<char> myVectorChar;

	//создание умного указателя на вектор
	auto myVectorIntSp = make_unique<vector<int>>();
	auto myVectorFloatSp = make_unique<vector<float>>(5);
	auto myVectorCharSp = make_unique<vector<char>>(3, '@');

	//мтоды size и max_size
	cout << "myVectorFloat size: " << myVectorFloat.size() << endl;
	cout << "myVectorChar max_size: " << myVectorChar.max_size() << endl;

	// метод empty
	if (myVectorIntSp->empty())
	{
		cout << "myVectorIntSp is empty" << endl;
		cout << "myVectorIntSp size: " << myVectorIntSp->size() << endl;
	}
	else
	{
		cout << "myVectorIntSp isn`t empty" << endl;
		cout << "myVectorIntSp size: " << myVectorIntSp->size() << endl;
	}

	myVectorIntSp.reset();
	myVectorFloatSp.reset();
	myVectorCharSp.reset();

	//метод push_back() и operator[]
	vector<string> myVectorString;
	myVectorString.push_back("aaa");
	myVectorString.push_back("zzz");
	myVectorString.push_back("bbb");
	myVectorString.push_back("yyy");
	myVectorString.push_back("ccc");
	myVectorString.push_back("xxx");

	for (auto i = 0; i < myVectorString.size(); i++)
	{
		cout << myVectorString[i] << endl;
	}
	cout << endl;

	//метод pop_back() удаляет последний элемент
	sort(myVectorString.begin(), myVectorString.end());
	myVectorString.pop_back();
	for (auto i = 0; i < myVectorString.size(); i++)
	{
		cout << myVectorString[i] << endl;
	}
	system("pause");
	return;
}