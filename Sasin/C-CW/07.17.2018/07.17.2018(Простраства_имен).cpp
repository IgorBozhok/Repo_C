#include <iostream>

using namespace std;

namespace itStep
{
	struct point
	{
		int *coord;
		int size;
		point(int size)
		{
			this->size = size;
			coord = new int[size];
		}
		~point()
		{
			delete[]coord;
		}
	};
	class vector
	{
	private:
		point *start;
		point *finish;
		int size;
	public:
		vector(int size)
		{
			this->size = size;
			start = new point(size);
			finish = new point(size);
			cout << "ENter coord" << endl;
			for (int i = 0; i < size; i++)
			{
				cin >> start->coord[i];
			}
			for (int i = 0; i < size; i++)
			{
				cin >> finish->coord[i];
			}
		}
		void print(void) const
		{
			cout << "Start coord" << endl;
			for (int i = 0; i < size; i++)
			{
				cout << start->coord[i] << " ";
			}
			cout << endl;
			cout << "Finish coord" << endl;
			for (int i = 0; i < size; i++)
			{
				cout << finish->coord[i] << " ";
			}
			cout << endl;
			return;
		}
		~vector()
		{
			delete start;
			delete finish;
		}
	};
}

using itStep::vector;


void main(void)
{
	vector obj(3);
	obj.print();

	system("pause");
	return;
}