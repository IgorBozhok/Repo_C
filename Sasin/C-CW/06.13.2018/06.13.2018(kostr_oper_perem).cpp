#include <iostream>

using namespace std;

class  magic
{
private:
	double inform;
public:
	magic() = default;
	magic(double inform):inform(inform) {}
	magic(const magic& from)
	{
		this->inform = from.inform;
		cout << "Copy Constructor" << endl;
	}

	magic(const magic && from)
	{
		this->inform = from.inform;
		cout << "MOVE Constructor" << endl;
	}
	magic operator+(const magic & right) const
	{
		return magic(this->inform + right.inform);
	}
	magic operator-(const magic & right) const
	{
		magic result(this->inform + right.inform);
		return result;
	}
	magic& operator=(const magic & right)
	{
		this->inform = right.inform;
		cout << "Operatorr = " << endl;
		return *this;
	}
	magic& operator=(const magic && right)
	{
		this->inform = right.inform;
		cout << "Operator = " << endl;
		return *this;
	}
};


void main(void)
{

	magic res, objL(1.2), objR(3.3);
	cout << "First step" << endl;
	res = objL + objR;
	cout << endl << "Second step" << endl;
	res = objL - objR;
	cout << endl << "Third step" << endl;
	magic copy = res;
	cout << endl << "Foutrth step" << endl;
	res = objL;

	system("pause");
	return;
}