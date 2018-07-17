#include <iostream>

using namespace std;

namespace very_very_long_namespace_name
{
	void print(void)
	{
		cout << "very_very_long_namespace_name" << endl;
		return;
	}
}

namespace VVLNN = very_very_long_namespace_name;

void main()
{
	very_very_long_namespace_name::print();

	VVLNN::print();

	system("pause");
	return;
}