
//	Структура = это способ описания класса объектов. которое позволяет создавать экземпляры этого класса(конеретные объекты).
// структура - пользовательский тип данных.
//
//Структура используется, для описания классов объектов реального мира. При это описание не должно быть полным и исчерпывающим. 
//Оно должно быть досаточным для решения задачи. например для офтальмолога важен цвет глаз и их разрез; остальное свойства объекта человек ему не интересны.
//
//struct@имя структуры@
// {
//  @тип1@@имя поля1@
// }@тип2@@имя поля2@
//  ....
//  @тип@@имя поля №@
// };

#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <math.h>
//#define N 5 

using namespace std;
/*
struct MyStruct
{
	int i=10;
	char macC[3] = { 'a','-','z' };
	double *preD=nullptr;
	bool b=false;
	bool& redB = b;
};
/*
struct data
{
	MyStruct NS;
	data D;
};


struct data
{
	MyStruct NS;
	data *D;
};


int main()
{
	MyStruct NSobj;
	_getch();
	return 0;
}

//Полем структуры может быть любой тип , даже другая стркутура.
//Но структура не может быть своим собственныйм полем . если это поле не являеуться указатлем.
//
//

int main()
{
	MyStruct NSobj;
	cout << NSobj.i << endl;
	NSobj.i = 15;
	cout << NSobj.i << endl;


	for (int i = 0; i < 3; i++)
	{
		cout << NSobj.macC[i] << endl;
		NSobj.macC[i] = 'F';
		cout << NSobj.macC[i] << endl;
	}

	cout << NSobj.preD << endl;
	NSobj.preD = new double[5];
	cout << NSobj.preD << endl;
	cout << NSobj.b << endl;
	NSobj.b = true;
	cout << NSobj.b << endl;
	cout << NSobj.redB << endl;
	delete[]NSobj.preD;

	
	
	_getch();
	return 0;
}

int main()
{
	MyStruct NSobj = { 2,{ 'A','-','Z' },new double(2.2),true };
	_getch();
	return 0;
}
*/

// Создать структуру , описывающую прямоугольник ( длинаб ширина и символ заполнитуль). Написать программу для работы с этой структурой: изменение размера прямоугольника, печать прямоугольника.
/*
struct Struct1
{
	int a = 6;
	int b = 5;
};
int main()
{
	setlocale(LC_ALL, "rus");
	Struct1 abc;
	cout << " Ведите ширину прямоугольника : ";
	cin >> abc.a;
	cout << " Ведите длину прямоугольника : ";
	cin >> abc.b;
	for (int i = 0; i < abc.a; i++)
	{
		
		for (int j = 0; j < abc.b-1; j++)
		{
			cout << "*";
		}
		cout << "*" << endl;
	}
	_getch();
	return 0;
}*/
// Массвы и указатели 
//@имя структуры@@имя массива @[size];
// NewStruct NSmas[5];
//@имя структуры@*@имя массива@;
// NewStruct 
/*
struct node
{
	int price = 0;
	char* name = nullptr;
};

void main()
{
	node shop[N];
	int sum = 0;
	for (int i = 0; i < N; i++)
	{
		cout << "Enter name" << endl;
		shop[i].name = new char[32];
		if (i != 0)
		{
			gets_s(shop[i].name, 32);
		}
		gets_s(shop[i].name, 32);
		cout << "Enter price " << endl;
		scanf_s( "%i", &shop[i].price);
		sum += shop[i].price;
	}
	system("cls");
	cout << sum;
	for (int i = 0; i < N; i++)
	{
		delete[]shop[i].name;
	}
	_getch();
	return ;
}*/
/*
struct node
{
	int price = 0;
	char* name = nullptr;
};
void main(void)
{
	node*shop;
	int N = 0;
	int sum = 0;
	cout << "Enter N" << endl;
	cin >> N;
	shop = new node[N];
	for (int i = 0; i < N; i++)
	{
		cout << "Enter name" << endl;
		shop[i].name = new char[32];
		//gets_s(shop[i].name,32);
		cin.clear();
		cin.ignore();
		gets_s(shop[i].name, 32);
		cout << "Enter price" << endl;
		cin >> shop[i].price;
		sum += shop[i].price;
	}
	system("cls");
	cout << "Sum" << sum;

	for (int i = 0; i < N; i++)
	{
		delete[]shop[i].name;
	}
	delete[]shop;
	_getch();
	return;
	
}*/
 /*
struct Struct1
{
	int x1;
	int x2;
	int y1;
	int y2;
};
void main()
{
	setlocale(LC_ALL, "rus");
	double res = 0;
	Struct1 to4k[N];
	for (int i = 0; i < N; i++)
	{
		cout << "Enter x1" << endl;
		cin >> to4k[i].x1;
		cout << "Enter x2" << endl;
		cin >> to4k[i].x2;
		cout << "Enter y1" << endl;
		cin >> to4k[i].y1;
		cout << "Enter y2" << endl;
		cin >> to4k[i].y2;
		res = sqrt(pow((to4k[i].x1 - to4k[i].x2), 2) + pow((to4k[i].y1 - to4k[i].y2), 2));
		cout << "Растояние : " << res << endl;
	}

	return;
}*/

struct Struct1
{
	int x1;
	int x2;
	int y1;
	int y2;
};
void main()
{
	setlocale(LC_ALL, "rus");
	Struct1*to4ka;
	int N = 5;
	double res = 0.0;
	to4ka = new Struct1[N];
	for (int i = 0; i < N; i++)
	{
		cout << "Enter x1" << endl;
		cin >> to4ka[i].x1;
		cout << "Enter x2" << endl;
		cin >> to4ka[i].x2;
		cout << "Enter y1" << endl;
		cin >> to4ka[i].y1;
		cout << "Enter y2" << endl;
		cin >> to4ka[i].y2;
		res = sqrt(pow((to4ka[i].x1 - to4ka[i].x2), 2) + pow((to4ka[i].y1 - to4ka[i].y2), 2));
		cout << "Растояние : " << res << endl;
	}
	return;	
}

struct point2D
{
	int x;
	int y;

};
point2D Sub(point2D point1, point2D& point2)
{
	point2D res;
	res.x = point2.x - point1.x;
	res.y = point2.y - point1.y;

	point2.x += 2;
	point2.y += 2;
	return res;
}

 void OutPutVeC(point2D* vecor)
{
	cout << vector[1].x - vector[0].x << endl;
	cout << vector[1].y - vector[0].y << endl;
}

 int main()
 {
	 point2D point1, point2;
	 point1.x = 2;
	 point1.y = 2;
	 point2.x = 2;
	 point2.y = 2;

 }