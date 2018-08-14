#include <iostream>
#include <memory>
#include <string>

using namespace std;

class ItStep
{
public: 
	weak_ptr<ItStep> ptr;
private:
	string name;
	static int count;
public:
	ItStep(string name) : name(name)
	{
		cout << "Constructor ItStep" << endl;
		count++;
	}
	ItStep(ItStep & from)
	{
		this->name = from.name;
		count++;
	}
	ItStep(ItStep && from)
	{
		this->name = from.name;
		count++;
	}
	ItStep& operator=(ItStep &right)
	{
		this->name = right.name;
		return *this;
	}
	ItStep& operator=(ItStep && right)
	{
		this->name = right.name;
		return *this;
	}
	~ItStep()
	{
		cout << "Destructor ItStep" << endl;
		count--;
	}
	void PrintInfo(void) const
	{
		cout << name << " - " << count << endl;
	}
};

int ItStep::count = 0;

void main()
{
	
	auto IS1 = make_shared<ItStep>("ItStep 1");
	auto IS2 = IS1;
	IS2->PrintInfo();
	IS1->PrintInfo();
	cout << IS2.use_count() << endl;
	IS1.reset();
	cout << IS2.use_count() << endl;
	IS2.reset();
	cout << IS2.use_count() << endl;
	

	IS1 = make_shared<ItStep>("IStep 1");
	IS2 = make_shared<ItStep>("ItStep 2");
	IS1->ptr = IS2;
	IS2->ptr = IS1;
	IS1.reset();
	IS2.reset();



	

	system("pause");
	return;
}