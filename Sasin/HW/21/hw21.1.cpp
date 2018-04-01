#include <iostream>
#include <conio.h>
#include <stdio.h>

using namespace std;

int day(int date, int m)
{
	int Jan = 31, Feb = 28, Mar = 31, Apr = 30, M = 31, Jun = 30, Jul = 31, Aug = 31, Sep = 30, Oct = 31, Nov = 30, Dec = 31;
	int d;
	switch (m)
	{
	case 1:
	{
	Jan: cout << "¬ведите день ("<< Jan << "день в январе) : ";
		cin >> d;
		if (d <= 0 || d > Jan)
		{
			goto Jan;
		}
		return d;
		break;
	}
	case 2:
	{
	Feb: cout << "¬ведите день (" << Feb << "дней в ‘еврале) : ";
		cin >> d;
		if (d <= 0 || d > Feb)
		{
			goto Feb;
		}
		return d;
		break;
	}
	case 3:
	{
	Mar: cout << "¬ведите день (" << Mar << "день в ћарте) : ";
		cin >> d;
		if (d <= 0 || d > Mar)
		{
			goto Mar;
		}
		return d;
		break;
	}
	case 4:
	{
	Apr: cout << "¬ведите день (" << Apr << "дней в јпреле) : ";
		cin >> d;
		if (d <= 0 || d > Apr)
		{
			goto Apr;
		}
		return d;
		break;
	}
	case 5:
	{
	M: cout << "¬ведите день (" << Apr << "день в ћае) : ";
		cin >> d;
		if (d <= 0 || d > M)
		{
			goto M;
		}
		return d;
		break;
	}
	case 6:
	{
	Jun: cout << "¬ведите день (" << Jun << "дней в »юне) : ";
		cin >> d;
		if (d <= 0 || d > Jun)
		{
			goto Jun;
		}
		return d;
		break;
	}
	case 7:
	{
	Jul: cout << "¬ведите день (" << Jun << "день в »юле) : ";
		cin >> d;
		if (d <= 0 || d > Jul)
		{
			goto Jul;
		}
		return d;
		break;
	}
	case 8:
	{
	Aug: cout << "¬ведите день (" << Aug << "день в јвгусте) : ";
		cin >> d;
		if (d <= 0 || d > Aug)
		{
			goto Aug;
		}
		return d;
		break;
	}
	case 9:
	{
	Sep: cout << "¬ведите день (" << Sep << "дней в —ент€бре) : ";
		cin >> d;
		if (d <= 0 || d > Sep)
		{
			goto Sep;
		}
		return d;
		break;
	}
	case 10:
	{
	Oct: cout << "¬ведите день (" << Oct << "день в ќкт€бре) : ";
		cin >> d;
		if (d <= 0 || d > Oct)
		{
			goto Oct;
		}
		return d;
		break;
	}
	case 11:
	{
	Nov: cout << "¬ведите день (" << Nov << "дней в ќкт€бре) : ";
		cin >> d;
		if (d <= 0 || d > Nov)
		{
			goto Nov;
		}
		return d;
		break;
	}
	case 12:
	{
	Dec: cout << "¬ведите день (" << Dec << "день в ƒекабре) : ";
		cin >> d;
		if (d <= 0 || d > Dec)
		{
			goto Dec;
		}
		return d;
		break;
	}
	}
}
int raznost(int d1, int m1, int y1, int d2, int m2, int y2)
{
	int Jan = 31, Feb = 28, Mar = 31, Apr = 30, M = 31, Jun = 30, Jul = 31, Aug = 31, Sep = 30, Oct = 31, Nov = 30, Dec = 31;
	int mouth[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	int  year=0, year1 = 0, year2 = 0;
	int res=0;
	int i;

	for (i = 0; i < 12; i++)
	{
		year = year + mouth[i];
	}
	
	for (i = 1; i < m1+1; i++)
	{
		if (i == m1)
		{
			year1 = year1 + d1;
			break;
		}
		year1 = year1 + mouth[i];
	}

	for (i = 1; i < m2 + 1; i++)
	{
		if (i == m2)
		{
			year2 = year2 + d2;
			break;
		}
		year2 = year2 + mouth[i];
	}
	if (y1 > y2)
	{
		res = (y1 - y2) * 365 - year2 + year1;
		return res;
	}

	else if (y2 > y1)
	{
		res = (y2 - y1)*365 - year1 + year2;
		return res;
	}

	else if (year1 > year2)
	{
		res = year1 - year2;
		return res;
	}
	else if (year1 < year2)
	{
		res = year2 - year1;
		return res;
	}
}

void main()
{
	setlocale(LC_ALL, "RUS");

	int d1, d2, m1, m2, y1, y2, res;
	
	cout << "¬ведите 1 дату . " << endl;
	
	year1: cout << "¬ведите 1 год (от 1900 до 2050) : ";
	cin >> y1;
	if (y1 < 1900 || y1 >= 2050)
	{
		goto year1;
	}
	month1: cout << "ћес€ц (от 1 до 12) : " ;
	cin >> m1;
	if (m1 <= 0 || m1 > 12)
	{
		goto month1;
	}
	d1 = day(1, m1);

	cout << "¬ведите 2 дату . " << endl;
	year2: cout << "¬ведите 2 год (от 1900 до 2050) : ";
	cin >> y2;
	if (y2 < 1900 || y2 >= 2050)
	{
		goto year2;
	}
	month2: cout<< "ћес€ц (от 1 до 12) : ";
	cin >> m2;
	if (m2 <= 0 || m2 > 12)
	{
		goto month2;
	}
	d2 = day(2, m2);
	cout << "1 дата :" << d1 << ".0" << m1 << "." << y1 << endl;
	cout << "2 дата :" << d2 << ".0" << m2 << "." << y2 << endl;
	cout << endl;
	res = raznost(d1, m1, y1, d2, m2, y2);
	cout << "–азность в дн€х между этими датами : " << res;
	_getch();
	return;
}