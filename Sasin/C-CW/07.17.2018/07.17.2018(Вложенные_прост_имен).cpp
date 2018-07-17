#include <iostream>

using namespace std;

namespace circle
{
	namespace v_1_0
	{
		inline namespace pi
		{
			const double _pi = 3.14;
		}
		double calcCircleS(double R)
		{
			return _pi *R * R;
		}
		double calcCircleP(double R)
		{
			return 2 * _pi * R;
		}
	}

	inline namespace v_2_0
	{
		inline namespace pi
		{
			const double _pi = 3.1415926535;
		}
		double calcCircleS(double R)
		{
			return _pi *R * R;
		}
		double calcCircleP(double R)
		{
			return 2 * _pi * R;
		}
	}
}

void main()
{
	cout << "v_2_0" << endl;
	cout << "Circle P = ";
	cout << circle::calcCircleP(2.2) << endl;
	cout << "Circle S = ";
	cout << circle::calcCircleS(2.2) << endl;

	cout << "v_1_0" << endl;
	cout << "Circle P = ";
	cout << circle::v_1_0::calcCircleP(2.2) << endl;
	cout << "Circle S = ";
	cout << circle::v_1_0::calcCircleS(2.2) << endl;

	system("pause");
	return;
}