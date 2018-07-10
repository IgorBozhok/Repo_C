#include <iostream>
#include <string>

using namespace std;

class base
{
protected:
	int x;
public:
	base() :x(0)
	{}
	virtual void setX(int x) // final
	{
		cout << "Old x = " << this->x << endl;
		this->x = x;
		cout << "New x = " << this->x << endl;
	}
};

class child:public base
{
public:
	child():base()
	{}
	virtual void setX(int x) //override
	{
		cout << "Old x = " << this->x << endl;
		this->x = x;
		cout << "New x = " << this->x << endl;
		this->x++;
		cout << "New x++ = " << this->x << endl;
	}
};

void setNewX(base &obj)
{
	int x;
	cout << "Enter new X" << endl;
	cin >> x;
	//obj.seX(x);
}

void main(void)
{

	base objBase;
	child objChild;

	cout << "BAse" << endl;
	setNewX(objBase);

	cout << "Child" << endl;
	setNewX(objChild);



	system("pause");
	return;
}
