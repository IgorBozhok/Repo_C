#include <iostream>

using namespace std;

class Date
{
private:
	int day;
	int month;
	int year;
public:
	Date():day(0), month(0), year(0){}
	Date(int day, int month, int year):day(day), month(month), year(year) {}
	~Date(){}
	void print() const
	{
		cout << "Date: " << day << "." << month << "." << year;
	}

	Date operator+(const Date& from) const
	{

		int resDay = this->day + from.day;
		int resMonth = this->month + from.month;
		int resYesr = this->year + from.year;
		if (resDay > 31)
		{
			resDay = resDay - 31;
			resMonth++;
		}

		
		if (resMonth > 12)
		{
			resMonth = resMonth - 12;
			resYesr++;
		}
		Date result(resDay, resMonth, resYesr);
		return result;
	}
	Date operator-(const Date& from) const
	{

		int resDay = this->day - from.day;
		int resMonth = this->month - from.month;
		int resYesr = this->year - from.year;
		if (resDay < 0)
		{
			resDay = resDay + 31;
			resMonth--;
		}


		if (resMonth < 0)
		{
			resMonth = resMonth + 12;
			resYesr--;
		}
		if (resYesr < 0)
		{
			resYesr = resYesr*-1;
		}
		Date result(resDay, resMonth, resYesr);
		return result;
	}
	Date& operator++()
	{
		this->day++;
		if (this->day > 31)
		{
			this->day = this->day - 31;
			this->month++;
			{
				if (this->month > 12)
				{
					this->month = this->month - 12;
					this->year++;
				}
			}
		}
	return *this;
	}
	Date& operator--()
	{
		this->day--;
		if (this->day <= 0)
		{
			this->day = this->day + 31;
			this->month--;
			{
				if (this->month <= 0)
				{
					this->month = this->month + 12;
					this->year--;
				}
			}
		}
		return *this;
	}
	Date operator++(int)
	{
		Date oldDate(*this);
		this->day++;
		if (this->day > 31)
		{
			this->day = this->day - 31;
			this->month++;
			{
				if (this->month > 12)
				{
					this->month = this->month - 12;
					this->year++;
				}
			}
		}
		return oldDate;
	}
	Date operator--(int)
	{
		Date oldDate(*this);
		this->day--;
		if (this->day <= 0)
		{
			this->day = this->day + 31;
			this->month--;
			{
				if (this->month <= 0)
				{
					this->month = this->month + 12;
					this->year--;
				}
			}
		}
		return oldDate;
	}
	bool operator> (const Date& from) const
	{
		if (this->year == from.year && this->month == from.month && this->day > from.day)
		{
			return true;
	
		}
		else if (this->year == from.year && this->month > from.month)
		{
				return true;
		}
		else if (this->year > from.year)
		{
			return true;
		}
		
		else
		{
			return false;
		}
	}
};
 

void main(void)
{
	Date res, objYear1(2, 1, 1984), objYear2(1, 1, 1984);
	objYear1.print();
	cout << endl;
	objYear2.print();
	cout << endl;
	//res = objYear1 + objYear2;
	//res.print();
	//cout << endl;
	//res = objYear1 - objYear2;
	//res.print();
	//cout << endl;
	//res = objYear1--;
	//objYear1.print();
	//cout << endl;
	//res.print();
	//cout << endl;
	if (objYear1 > objYear2)
	{
		objYear1.print();
		cout << ">";
		objYear2.print();
	}
	else 
	{
		objYear1.print();
		cout << "<";
		objYear2.print();
	}
	
	
	system("pause");
	return;
}
