#include <iostream>
#include<vector>
#include<memory>
#include<string>
#include<algorithm>

using namespace std;

void main()
{
	//�������� �������
	vector<int> myVector(5, 100);
	vector<float> myVectorFloat(8);
	vector<char> myVectorChar;

	//�������� ������ ��������� �� ������
	auto myVectorIntSp = make_unique<vector<int>>();
	auto myVectorFloatSp = make_unique<vector<float>>(5);
	auto myVectorCharSp = make_unique<vector<char>>(3, '@');

	//����� size � max_size
	cout << "myVectorFloat size: " << myVectorFloat.size() << endl;
	cout << "myVectorChar max_size: " << myVectorChar.max_size() << endl;

	// ����� empty
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

	//����� push_back() � operator[]
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

	//����� pop_back() ������� ��������� �������
	sort(myVectorString.begin(), myVectorString.end());
	myVectorString.pop_back();
	for (auto i = 0; i < myVectorString.size(); i++)
	{
		cout << myVectorString[i] << endl;
	}
	system("pause");
	return;
}