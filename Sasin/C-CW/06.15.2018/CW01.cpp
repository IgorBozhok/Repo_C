#include <iostream>

using namespace std;

class circle;
class square
{
private:
	int length;
	int p;
	int s;
public:
	square() :square(10) {}
	square(int length) :length(length)
	{
		p = 4 * length;
		s = length*length;
	}
	void print()
	{
		cout << "p: " << p;
		cout << endl;
		cout << "s: " << s;
	}
	friend void S(square &sq, circle &cir);
	friend void P(square &sq, circle &cir);
};



class circle
{
private:
	int r;
	int p;
	int s;
public:
	circle() :circle(10) {}
	circle(int r) : r(r)
	{
		p = 2 * 3.14 * r;
		s = 3.14*(r*r);
	}
	void print()
	{
		cout << "p: " << p;
		cout << endl;
		cout << "s: " << s;
	}
	friend void S(square &sq, circle &cir);
	friend void P(square &sq, circle &cir);
};

void S(square &sq, circle &cir)
{
	if (sq.s > cir.s)
	{
		cout << "S square > S circle " << endl;
		cout << "S square = " << sq.s << endl;
	}
	else if (sq.s < cir.s)
	{
		cout << "S square < S circle " << endl;
		cout << "S circle = " << cir.s << endl;
	}
	else
	{
		cout << "S square = S circle " << endl;
	}
}
void P(square &sq, circle &cir)
{
	if (sq.p > cir.p)
	{
		cout << "P square > P circle " << endl;
		cout << "P square = " << sq.p << endl;
	}
	else if (sq.s < cir.s)
	{
		cout << "P square < S circle " << endl;
		cout << "P circle = " << cir.p << endl;
	}
	else
	{
		cout << "P square = P circle " << endl;
	}
}


void main(void)
{
	square sq;
	circle cir;

	sq.print();
	cout << endl;
	cir.print();
	cout << endl;

	S(sq, cir);
	P(sq, cir);

	system("pause");
	return;

}


