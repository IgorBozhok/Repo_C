#include <iostream>
#include <vector>
#include <string>

using namespace std;

class train
{
private:
	string number;
	unsigned time;
	string toStation;
public:
	train() = delete;
	train(train& from) = default;
	train(train&& from) = default;
	train& operator=(train & right) = default;
	train& operator=(train && right) = default;
	~train()=default;
	train(string number, unsigned hour, unsigned min, string toStaion) :number(number), toStaion(toStaion)
	{
		if (hour > 23)
		{
			hour = 23;
		}
		if (min > 59)
		{
			min = 59;
		}
		this->time = hour * 60 + min;
	}
	void printInfoTrain(void) const
	{
		cout << "Number - " << number;
		cout << "Time - " << (time / 60);
		cout << ":" << (time % 60) << endl;
		cout << "Station - " << toStation;
	}
	
};

class timeTable
{
private:
	vector<train*> _timeTable;
public:
	timeTable()
	{
		train temp("123a", 12, 12, "St1");
		_timeTable.push_back(new train("123a", 12, 12, "St1"));
	}
	



};

