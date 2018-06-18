#include <iostream>

using namespace std;

template <typename tempType>
tempType maxElement(tempType mas[], int size)
{
	tempType max = mas[0];
	for (int i = 0; i < size; i++)
	{
		if (max < mas[i])
		{
			max = mas[i];
		}
	}

	return max;
}
template <typename tempType>
tempType minElement(tempType mas[], int size)
{
	tempType min = mas[0];
	for (int i = 0; i < size; i++)
	{
		if (min > mas[i])
		{
			min = mas[i];
		}
	}
	return max;
}
template <typename tempType>
tempType ArithmeticMean(tempType mas[], int size)
{
	tempType temp = 0;
	for (int i = 0; i < size; i++)
	{
		temp = temp + mas[i];
	}
	temp = temp / size;
	return temp;
}
template <typename tempA, typename tempB>
double root(tempA a, tempB b)
{
	double temp = 0;
	double tempa =  a;
	double tempb = b;
	temp = -tempb / tempa;
	return temp;
}
template <typename tempA, typename tempB, typename tempC>
double* root1(tempA a, tempB b, tempC c, int &size)
{
	double tempa = a;
	double tempb = b;
	double tempc = c;
	double tempmass[2];
	double D = tempb*tempb - 4 * tempa*tempc;
	cout << D << endl;
	if (sqrt(D) > 0)
	{
		D = sqrt(D);
		tempmass[0] = (-tempb + D) / (2 * tempa);
		tempmass[1] = (-tempb - D) / (2 * tempa);
		size = 2;
		return tempmass;
	}
	else if (sqrt(D) == 0)
	{
		D = sqrt(D);
		tempmass[0] = -tempb / (2 * tempa);
		size = 1;
		return tempmass;
	}
	/*else (sqrt(D)<0)
	{
		
		return tempmass;
	}
	*/
}

void main(void)
{
	
	int masI[] = { 1, 2, 3, 4, 5 };
	float masF[] = { 0.1, 0.2, 1.6, 5.2, 5.2 };
	int a = 11;
	int b = 6;
	float c = 5.6;
	float d = 6.8;
	cout << "Max element int: " << maxElement(masI, 5) << endl << endl;
	cout << "Max element float: " << maxElement(masF, 5) << endl << endl;
	cout << "Arithmetic mean masInt: " << ArithmeticMean(masI, 5) << endl << endl;
	cout << "Arithmetic mean masFloat: " << ArithmeticMean(masF, 5) << endl << endl;

	cout << "root: " << root(a, b)<< endl << endl;
	
	int size = 2;
	double* mas = nullptr;

	mas = root1(1, 2, 1, size);
	for (int i = 0; i < size; i++)
	{
		cout << "x" << i + 1 << " = " << mas[i] << endl;
	}


	system("pause");
	return;
}
