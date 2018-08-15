#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

class train
{
private:
	string number;
	unsigned time;
	string toStation;
public:
	train() = delete;
	train(const train& from) = default;
	train(train&& from) = default;
	train& operator=(const train & right) = default;
	train& operator=(train && right) = default;
	~train()=default;
	train(string number, unsigned hour, unsigned min, string toStaion) :number(number), toStation(toStation)
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
	void setTrain(string number, unsigned hour, unsigned min, string toStation)
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
	this->number = number;
	this->toStation = toStation;
	}
	string getNumber(void) const
	{
		return number;
	}
	string getStation(void) const
	{
		return toStation;
	}
	unsigned getTime(void) const
	{
		return time;
	}
};

class timeTable
{
private:
	vector<train> _timeTable;
	
	class findTrain
	{
	private:
		string number;
	public:
		findTrain(string number):number(number)
		{}
		bool operator() (const train &obj)
		{
			return(obj.getNumber() == number);
		}
	};
	class findStation
	{
	private:
		string station;
	public:
		findStation(string station) :station(station)
		{}
		bool operator() (const train &obj)
		{
			return(obj.getStation() == station);
		}
	};
	class findTime
	{
	private:
		unsigned time;
	public:
		findTime(unsigned time) :time(time)
		{}
		bool operator() (const train &obj)
		{
			return(obj.getTime() == time);
		}

	};
public:
	timeTable()
	{
		train temp("123a", 12, 12, "St1");
		_timeTable.push_back(temp);
		temp.setTrain("200", 10, 0, "St2");
		_timeTable.push_back(temp);
		temp.setTrain("100", 21, 45, "St3");
		_timeTable.push_back(temp);
		temp.setTrain("123a", 12, 12, "St1");
		_timeTable.push_back(temp);
		temp.setTrain("123", 15, 30, "St4");
		_timeTable.push_back(temp);

	}
	timeTable(const timeTable & from) = default;
	timeTable(timeTable && from) = default;
	timeTable &operator=(const timeTable& right) = default;
	timeTable &operator=(timeTable&& right) = default;
	~timeTable() = default;

	void printTimeTable()const
	{
		for_each(_timeTable.begin(), _timeTable.end(), [](const train &obj) {obj.printInfoTrain(); });
	}
	void printTrainByNumber(string number)const
	{
		auto first = _timeTable.begin();
		auto last = _timeTable.end();

		findTrain byNumber(number);
		auto result = find_if(_timeTable.begin(), _timeTable.end(), byNumber);
		
		while (result == last)
		{
			if (result == _timeTable.end())
			{
				cout << endl << "Not find" << endl;
			}
			else
			{
				cout << endl << "Find: " << endl;
				result->printInfoTrain();
			}
			
		}
		if (result == _timeTable.end())
		{
			cout << endl << "Not find" << endl;
			return;
		}
	}
	void printTrainByStation(string station)const
	{
		findStation byStation(station);
		auto result = find_if(_timeTable.begin(), _timeTable.end(), byStation);
		if (result == _timeTable.end())
		{
			cout << endl << "Not find" << endl;
			return;
		}
		else
		{
			cout << endl << "Find: " << endl;
			result->printInfoTrain();
			return;
		}
	}

	void printTrainByTime(unsigned time)
	{
		;
	}
};

void main()
{
	timeTable _timeTable;
	_timeTable.printTimeTable();
	cout << endl;
	_timeTable.printTrainByNumber("200");
	cout << endl;
	_timeTable.printTrainByStation("St1");

	system("pause");
	return;
}