#include <iostream>
#include <string>
#include <ctime>

using namespace std;

class Test
{
	
private:
	string* question = nullptr;
	int size;
public:
	Test()
	{
		size = 3;
		question = new string[size];
		question[0] = "На* каком расстоянии из перечисленных от транспортного средства устанавливается знак аварийной остановки вне населенных пунктов?*1) От 10 до 15 метров.*2) От 15 до 40 метров.*3) Не менее 15 метров.*4) Не менее 40 метров.+";
		question[1] = "Ка*кой из вариантов ответа соответствует термину «перекресток»?*1) Пересечение дороги с велосипедной дорожко.*2) Пересечение дороги с пешеходной дорожко.*3) Пересечение дороги с дорожкой для всадников.*4) Выезд из жилой зоны.+*5) Все перечисленные соответствуют.";
		question[2] = "В *каком из перечисленных буксируемых транспортных средств запрещено перевозить пассажиров?*1) В легковом автомобиле.*2) В кабине грузового автомобиля с технически допустимой общей массой менее 3,5 тонны.+*3)3. На мотоцикле с боковым прицепом.*4) Запрещено во всех перечисленных случаях.";
	}
	Test(string* test, int size)
	{
		this->size = size;
		this->question = new string[size];
		for (int i = 0; i < size; i++)
		{
			this->question[i] = test[i];
		}
	}
	Test(const string & test)
	{
		this->size = size;
		this->question = new string[size];
		for (int i = 0; i < size; i++)
		{
			this->question[i] = test[i];
		}
	}
	~Test()
	{
		delete[]question;
	}


	void print()
	{
		int temp = rand() % 3;
		int sizeStr = this->question[temp].size();
		int n=0;
		for (int i = n; i < sizeStr; i++)
		{
			if (this->question[temp][i] == '*')
			{

				cout << question[temp].substr(n,i) << endl;
				n = i;
			}
		}
		
	}


};




void main()
{
	srand(time(NULL));
	setlocale(LC_ALL, "Rus");
	Test res;
	res.print();

	
	system("pause");
	return;

}