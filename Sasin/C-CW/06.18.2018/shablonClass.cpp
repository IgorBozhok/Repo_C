#include <iostream>

using namespace std;

template < typename tempType>
class massiv
{
private :
	tempType*mas = nullptr;
	unsigned int sizeMax = 0;
	unsigned int sizeNow = 0;
public:
	massiv() = delete;
	massiv(tempType * mas, int sizeNow, int sizemax = 16)
	{
		this->mas new tempType[sizeMax];
		this->sizeMax = sizeMax;
		this->sizeNow = sizeNow;
		for (int i = 0; i < this->sizeNow; i++)
		{
			this->mas[i] = mas[i];
		}
	}
	void printMas()
	{
		for (int i = 0; i < sizeNow; i++)
		{
			cout << mas[i] << " ";
		}
	}
	void addElement(temp elemenet);
};

template <typename tempType>
void massiv<tempType>::addElement(temp elemenet)
{
	if (sizeNow < sizeMax)
	{
		mas[sizeNow] = elemenet;
	}
	sizeNow++;
}

void main()
{
	char masC[] = { 'a','b','c','d','e' };
	massiv<char> objChar(masC, 5);
	int masI[] = { -1, 2, -3, 4, -5, 6, -7, 8, -9, 10 };
	massiv<int> objINt(masI, 10);

	cout << "***char block***" << endl;
	objChar.printMas();
	objChar.addElement('z');
	objChar.addElement('z');
	objChar.addElement('z');
	cout << endl;
	objChar.printMas();
	cout << endl;

	cout << "***int block" << endl;
	objINt.printMas();
	objINt.addElement(0);
	objINt.addElement(0);
	objINt.addElement(100);
	cout << endl;
	objINt.printMas();
	cout << endl;
	system("pause");
	return;
}
