 #include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

class point3D
{
private:
	int x,y,z;
	
public:
	point3D():x(0),y(0),z(0){}
	point3D(int _x)
	{
		x = _x;
	}
	point3D(int _x, int _y) :point3D(_x)
	{
		y = _y;
	}
	point3D(int _x, int _y,int _z) :point3D(_x, _y)
	{
		z = _z;
	}
	void setX(int _x)
	{
		x = _x;
	}
	int getX()
	{
		return x;
	}
	void setY(int _y)
	{
		y = _y;
	}
	int getY()
	{
		return y;
	}
	void setZ(int _z)
	{
		z = _z;
	}
	int getZ()
	{
		return z;
	}

	void initpoint3D(int x,int y, int z)
	{
		setX(x);
		setY(y);
		setZ(z);
	}
	void outPoint3D()
	{
		cout << "x = " << getX() << ", y = " << getY() << ", z = " << getZ() << endl;
	}

};

class line
{
private:
	point3D A, B;
	float len;
public:
	line(point3D _obj1, point3D _obj2)
	{
		A.setX(_obj1.getX());
		A.setY(_obj1.getY());
		A.setZ(_obj1.getZ());
		B.setX(_obj2.getX());
		B.setY(_obj2.getY());
		B.setZ(_obj2.getZ());
	}
	void _len()
	{
		len = sqrt(pow(A.getX() - B.getX(), 2) + pow(A.getY() - B.getY(), 2) + pow(A.getZ() - B.getZ(), 2));
		cout << len;
	}

};


void initpoint3D(point3D &obj);

void main(void)
{
	setlocale(LC_ALL, "RUS");
	point3D obj1, obj2;
	initpoint3D(obj1);
	obj1.outPoint3D();
	cout << endl;
	initpoint3D(obj2);
	obj2.outPoint3D();

	line obj3(obj1, obj2);
	obj3._len();
	system("pause");
	return;
}

void initpoint3D(point3D &obj)
{
	int x, y, z;
	x = y = z = 0;
	cout << "¬ведите координату x: ";
	cin >> x;
	cout << endl << "¬ведите координату y: ";
	cin >> y;
	cout << endl << "¬ведите координату z: ";
	cin >> z;
	obj.initpoint3D(x, y, z);

}