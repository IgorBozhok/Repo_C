#include <iostream>
#include <string>

using namespace std;

int division(int a, int b)
{
	if (b == 0)
	{
		throw 1;
	}
	return a / b;
}
double division(double a, double b)
{
	if (b == 0)
	{
		throw 1.0;
	}
	return a / b;
}

void main()
{
	/*try
	{
		cout << division(4, 4) << endl;
		cout << division(14.0, 4.0) << endl;
		cout << division(24, 4) << endl;
		cout << division(34.0, 0.0) << endl;
	}
	catch (const int &numExep)
	{
		if (numExep == 1)
		{
			cout << "Div by 0" << endl;
		}
	}
	catch (const double &numExep)
	{
		if (numExep == 1)
		{
			cout << "Div by 0" << endl;
		}
	}*/
	int *mas = nullptr;
	int size = -1;
	try
	{
		mas = new int[size];
	}
	catch (...)
	{
		cout << "memory error" << endl;
	}
	
	system("pause");
	return;
}