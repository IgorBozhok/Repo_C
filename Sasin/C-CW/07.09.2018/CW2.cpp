#include <iostream>
#include <cassert>
#include <string>

using namespace std;

template<typename userType1, typename userType2>
class base
{
protected:
	userType1 data1;
	userType2 data2;
public:
	base() = delete;
	base(userType1 data1, userType2 data2) :data1(data1), data2(data2)
	{
	}
	void print()
	{
		cout << data1 << " "<< data2 << endl;
	}
};
template<typename userType3, typename userType4>
class child: public base<userType3, userType4>
{
protected:
	userType3 data3;
	userType4 data4;
public:
	child() = delete;
	child(userType3 data1, userType4 data2, userType3 data3, userType4 data4):base<userType3, userType4>(data1, data2)
	{
		this->data3 = data3;
		this->data4 = data4;
	}
	void print()
	{
		base::print();
		cout << data3 << " " << data4 << endl;
	}
};

template<typename userType5, typename userType6>
class child1 : public child<userType5, userType6>
{
protected:
	userType5 data5;
	userType6 data6;
public:
	child1(userType5 data1, userType6 data2, userType5 data3, userType6 data4, userType5 data5, userType6 data6) :child<userType5, userType6>(data1,data2,data3, data4)
	{
		this->data5 = data5;
		this->data6 = data6;
	}
	void print()
	{
		child::print();
		cout << data5 << " " << data6 << endl;
	}
};

void main()
{
	child1<char, int> obj('a', 2, 'f', 3, 'z', 7);
	obj.print();

	system("pause");
	return;
}


