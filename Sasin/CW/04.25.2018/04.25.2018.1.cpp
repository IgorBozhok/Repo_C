/*
Захват памяти в стиле С: malloc b free
void* malloc(int sizemen);
-ф-ия malloc захватывает блок памяти равный sizemem байт и возврвщвет указатель на него.

void free(void * _Block);
Ф-ия free освобождает блок памяти на который указывает указатель _Block.

		void main()
		{
		srand(time(nullptr));
		int sizeM;
		int *mass = nullptr;
		printf_s("Enter size of mass: ");
		scanf_s("%i", &sizeM);
		mass = (int*)malloc(sizeM * sizeof(int));

		if (mass == nullptr)
		{
		printf_s("Memory error");
		_getch();
		return;
		}

		for (int i = 0; i < sizeM; i++)
		{
		mass[i] = rand() % 10 - rand() % 10;
		printf_s("%i\t", mass[i]);
		}
		free(mass);
		_getch();
		return;
		}

Захват памяти: calloc
void* calloc(int number, size_t size);


		void main()
		{
		srand(time(nullptr));
		int sizeS;
		char *str = nullptr;
		printf_s("Enter size of string: ");
		scanf_s("%i", &sizeS);

		str = (char*)calloc(sizeS + 1, sizeof(char));

		if (str == nullptr)
		{
		printf_s("Memory error");
		_getch();
		return;
		}

		for (int i = 0; i < sizeS; i++)
		{
		str[i] = rand() % 26 + 'a';

		}
		printf_s("Random string\n");
		printf_s("%s", str);

		free(str);
		_getch();
		return;
		}

Захват памяти: realloc

void *realloc(void* ptrmen,int size)

struct  picture
{
char * name;
int year;
};

void main()
{
int answer = 0, count = 0;
picture *bank = nullptr;

do
{
printf_s("Next?\n 1 - yes \n 0 - no\n");
scanf_s("%i", &answer);
if (!answer)
{
break;
}
count++;
bank = (picture*)realloc(bank, count * sizeof(picture));
bank[count - 1].name = (char*)calloc(80, sizeof(char));
printf_s("Enter name: ");
char* str = bank[count - 1].name;
gets_s(bank[count - 1].name, 80);
gets_s(bank[count - 1].name, 80);
printf_s("Enter year: ");
scanf_s("%i", &bank[count - 1].year);


} while (true);
for (size_t i = 0; i < count; i++)
{
printf_s("%s\n", bank[i].name);
printf_s("%i\n", bank[i].year);
}

for (size_t i = 0; i < count; i++)
{
free(bank[i].name);
}
free(bank);
_getch();
return;
}

Файл - именованная область памяти на носителе , которая содржит неоторую информацию.
Многие ОС приравниваю к файлам и другие ресурсы компьютера:
-физические устройства;
-сетевые ресурсы;
-объекты ОС и т.д.
Например , ОС UNIX все считыют файлом.

Концептуально выделяет текстовые и двоичные файлы: разница между ними в том, что информация в текстовых файлах вопринимается как текст 

Создание файла в VS

В папке resource->New Item->Visual C++-> Utility-> text File

FILE* fopen(char const* _FileName, char const* _mode);
_FileName - имя файла ии путь к нему, если файл находиться не в папке проекта.
_Mode - режим, в котором будет открыт файл.
ф-я возвращает указатель на структуру FILE в случае корректного открытия файла и NULL , если евозможно открыть файл.

r rb - открытие для чтения 
w wb - открывает для записи (создает файл в случае его отсутствия). Удаляет содержимое и перезаписывает файл.
a ab - отрывает для добавления 

errno_t fopen_s(FILE** _Stream, xhar const* _FileName, char const* _Mode);
_Stream - указатель на указатель на FILE
_FileName -Имя файла или путь к нему, если файл находиться не в папке проекта 

int flose(FILE* _Stream);

Чтение/запись в текстовый файл 
-запись данных в файл
-int fputc(int _character, FILE* _Stream);
-int fputs(char const* _buffer, FILE* _Stream);




*/

#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


using namespace std;

void main()
{
	int res;
	char *str = new char[80];
	FILE *f;
	fopen_s(&f, "Text.txt", "w");
	/*
	if (res != 0)
	{
		cout << "Error";
		_getch();
		return;
	}
	*/
	fputs("Hello, ", f);
	cout << "Enter name: ";
	gets_s(str, 80);
	fputs(str, f);
	fputc('\n', f);
	/*
	fputc('H', f);
	fputc('e', f);
	fputc('l', f);
	fputc('l', f);
	fputc('o', f);
	fputc(',', f);
	fputc(' ', f);
	fputc(' ', f);
	cout << "Enter name: ";
	do
	{
		c = _getch();
		cout << c;
		fputc(c, f);
	} while (c != '\r');

	*/
	res = fclose(f);
	if (res == EOF)
	{
		cout << "Error";
		_getch();
		return;
	}
	_getch();
	return;
}
