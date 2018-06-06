#include <iostream>

using namespace std;

class legGun
{
private:
	static int count;
	const int number = count + 1;
	double a;
	double b;
public:
	legGun()
	{
		count++;
		a = 12.0;
		b = 3.0;

	}
	int getCount() const
	{
		return count + 1;
	}
	double summ() const
	{
		return a + b;
	}
	
};
int legGun::count = 0;
void main(void)
{
	legGun obj1, obj2;
	cout << obj1.getCount() << endl;
	cout << obj2.getCount() << endl;
	cout << obj2.summ();

	system("pause");
	return;
}
