#include <stdio.h>
#include <conio.h>
#include <iostream>
using namespace std;


void main(void)
{
	setlocale(LC_ALL, "rus");
	int count;
	char mas[1000];
	cout << "                              “екстовый редактор" << endl;
	cout << "¬ведите текст " << endl;
	gets_s(mas, 1000);
	cout << "ћеню редактировани€ и обработки текста : " << endl;
	cout <<" 1) ѕриобразование всего текста верхнему регистру, к нижнему регистру : " << endl;
	cout << "¬аш выбор : " << endl;
	cin >> count;
	switch (count)
	{
	case 1:
		{
			int i;
			for (i = 0; i < 1000 && mas[i] != '\0'; i++)
			{
				if (mas[i] >= 'A' && mas[i] <= 'Z')
				{
					mas[i] = mas[i] + 32;
				}
			}

			for (i = 0; i < 100 && mas[i] != '\0'; i++)
			{
				cout << mas[i];
			}
			break;
		}
	}








// 1 задача
/*void main(void)
{
	char mass[100];
	gets_s(mass, 100);
	int sizeStr = 0;
	int i = 0;
	while (mass[i] != '\0')
	{
		sizeStr++;
		i++;
	}
	cout<< endl << "Size" << sizeStr;
	_getch();
	return;
}*/

//2 задача
/*void main(void)
{
	char mass[100];
	char mass1[100];
	gets_s(mass, 100);
	int i;
	for (i = 0; i<100 && mass[i] != '\0'; i++)
	{
		mass1[i] = mass[i];
	}
	mass1[i] = '\0';

	for (i = 0; i < 100 && mass1[i] != '\0'; i++)
	{
		cout << mass1[i];
	}
	_getch();
	return;
}*/

// 3 задача

/*void main(void)
{
	char mass[100];
	gets_s(mass, 100);
	int sizeStr = 0;
	int a = 0;
	while (mass[a] != '\0')
	{
		sizeStr++;
		a++;
	}

	char mass1[100];
	gets_s(mass1, 100);

	int j;
	int b = sizeStr;

	for (j = 0; mass[j] != '\0'; j++)
	{
		mass[b] = mass1[j];
		b++;
	}
	mass[b] = '\0';
	
	int i;
	for (i = 0; i < 100 && mass[i] != '\0'; i++)
	{
		cout << mass[i];
	}
	_getch();
	return;
}*/

// 4 задача

/*void main(void)
{
	char mass[100];
	gets_s(mass, 100);
	int q;
	int i;
	for (i = 0; i < 100 && mass[i] != '\0'; i++)
	{
		if (mass[i] == 's')
		{
			break;
		}
	}

	cout << i;
	_getch();
	return;
}*/

// 6 задача

/*void main(void)
{
	char mass[100];
	gets_s(mass, 100);
	int sizeStr = 0;
	int i = 0;
	while (mass[i] != '\0')
	{
		sizeStr++;
		i++;
	}
	
	char mass1[100];
	gets_s(mass1, 100);
	int sizeStr1 = 0;
	i = 0;
	while (mass1[i] != '\0')
	{
		sizeStr1++;
		i++;
	}

	int q;

	if (sizeStr == sizeStr1)
	{
		q = 0;
		cout << endl << q;
	}
	else if (sizeStr > sizeStr1)
	{
		q = 1;
		cout << endl << q;
	} 
	else if (sizeStr < sizeStr1)
	{
		q = -1;
		cout << endl << q;
	}
	_getch();
	return;
}*/

//9 задача

/* void main(void)
{
	char mass[100];
	gets_s(mass, 100);
	int i;
	for (i = 0; i < 100 && mass[i] != '\0'; i++)
	{
		if (mass[i] >='a' && mass[i] <='z')
		{
			mass[i] = mass[i] - 32;
		}
	}

	for (i = 0; i < 100 && mass[i] != '\0'; i++)
	{
		cout << mass[i];
	}

	_getch();
	return;
} */

//10 задача 

/*void main(void)
{
	char mass[100];
	gets_s(mass, 100);
	int i;
	for (i = 0; i < 100 && mass[i] != '\0'; i++)
	{
		if (mass[i] >= 'A' && mass[i] <= 'Z')
		{
			mass[i] = mass[i] + 32;
		}
	}

	for (i = 0; i < 100 && mass[i] != '\0'; i++)
	{
		cout << mass[i];
	}

	_getch();
	return;
}*/
 
// 11 задача

/*void main(void)
{
	char mass[100];
	gets_s(mass, 100);
	int i;
	for (i = 0; i < 100 && mass[i] != '\0'; i++)
	{
		if (mass[i] >= 'A' && mass[i] <= 'Z')
		{
			mass[i] = mass[i] + 32;
		}
		else if (mass[i] >= 'a' && mass[i] <= 'z')
		{
			mass[i] = mass[i] - 32;
		}
	}

	for (i = 0; i < 100 && mass[i] != '\0'; i++)
	{
		cout << mass[i];
	}

	_getch();
	return;
}*/
_getch();
return;
}
