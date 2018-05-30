#include <iostream>
#include <string>

using namespace std;

const int masCount = 5;
/*
class  selCount 
{
private:
	static int count;
	int number;
public:
	selCount()
	{
		count++;
		number = count;
	}
	int getCount(void)
	{
		return count;
	}
	int getNumber(void)
	{
		return number;
	}

};
int selCount::count = 0;

void main(void)
{
	selCount mass[masCount];
	for (int i = 0; i < masCount; i++)
	{
		cout << "Object #" << i << endl;
		cout << mass[i].getNumber() << endl;
		cout << mass[i].getCount() << endl;
	}
	selCount obj;
	cout << obj.getNumber() << endl;
	cout << obj.getCount() << endl;

	system("pause");
	return;
*/
class  GeneratorID
{
private:
	static char ID[3];
public:
	static void infoID(void)
	{
		cout << "Generator unique ID" << endl;
	}
	static void getID(char* userID)
	{
		if (ID[1] == 'Z')
		{
			ID[1] = 'A';
			if (ID[0] == 'Z')
			{
				ID[0] = 'A';
				cout << "overflow" << endl;
			}
			else
			{
				ID[0]++;
			}
		}
		else
		{
			ID[1]++;
		}
		strcpy_s(userID, 3, ID);
	}
};
char GeneratorID::ID[3] = { 'Z', 'X', '\0' };

void main(void)
{
	GeneratorID::infoID();
	char ID[3];
	while (true)
	{
		GeneratorID::getID(ID);
		cout << ID << endl;
		system("pause");
	}
	system("pause");
	return;
}

