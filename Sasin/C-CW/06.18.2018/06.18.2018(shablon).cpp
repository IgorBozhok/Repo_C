#include <iostream>

using namespace std;

template <typename tempType>
void printMas(tempType mas[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << mas[i] << endl;
	}
	cout << endl;
}

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

template <typename tempOut, typename tempIn>
void convert(tempOut & out, tempIn & in)
{
	out = in;
}

template <typename tempMas, typename tempVal>
void upMas(tempMas mas[], int size, tempVal val = 1)
{
	for (int i = 0; i < size; i++)
	{
		mas[i] += val;
	}
}


void main(void)
{
	int masI[] = { 1,2,3,4,5 };
	float masF[] = { 0.1,0.2 };
	char masC[] = { 'a', 'b','c'};
	cout << "int: " << endl;
	printMas(masI, 5);
	cout << "float: " << endl;
	printMas(masF, 2);
	cout << "char: " << endl;
	printMas(masC, 3);

	cout << endl;
	cout << "Max int: " << maxElement(masI, 5) << endl;
	cout << "Max float: " << maxElement(masF, 2) << endl;
	cout << "Max char: " << maxElement(masC, 3) << endl;
	cout << endl;

	double d = 68.72;
	int i;
	char c;
	convert(i, d);
	convert(c, d);
	cout << d << endl << i << endl << c << endl;

	

	cout << endl;
	cout << "Max int: " << maxElement(masI, 5) << endl;
	cout << "Max float: " << maxElement(masF, 2) << endl;
	cout << "Max char: " << maxElement(masC, 3) << endl;
	cout << endl;
	
	cout << "int: " << endl;
	upMas(masI, 5, 2);
	printMas(masI, 5);
	cout << "float: " << endl;
	upMas<float, int>(masF, 2);
	printMas(masF, 2);

	cout << "char: " << endl;
	upMas(masC, 3, 3.1);
	printMas(masC, 3);

	system("pause");
	return;
}






