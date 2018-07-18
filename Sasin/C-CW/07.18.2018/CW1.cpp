#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void main(void)
{
	/*
	ofstream fout;
	fout.open("itstep.txt");
	fout.close();
	fout.open("itstep.txt", ios::app);
	fout.close();
	fout.open("itstep.txt", ios::out | ios::trunc);
	fout.close();

	ifstream fin;
	fin.open("itstep.txt");
	if (fin.is_open())
	{

	}
	fin.close();

	fstream file;
	file.open("itstep.txt");
	file.close();

	ofstream fout("itstep.txt");
	ifstream fin("itstep.txt");
	fstream file("itstep.txt",ios ::out);
	fout.close();
	fin.close();
	file.close();
	*/

	int age = 0, grade = 0;
	string name;
	ofstream fileOut("itstep.txt");
	if (fileOut.is_open())
	{
		cout << "Endter stud name: ";
		cin >> name;
		cout << "Enter stud age: ";
		cin >> age;
		cout << "Enter sud grade: ";
		cin >> grade;
		fileOut << name << endl;
		fileOut << age << endl;
		fileOut << grade;
		fileOut.close();
		system("cls");

		ifstream fileIn("itstep.txt");
		if (fileIn.is_open())
		{
			getline(fileIn, name);
			cout << "Stud name: " << name << endl;
			fileIn >> age;
			cout << "Stud age: " << age << endl;
			fileIn >> grade;
			cout << "Stud grade: " << grade << endl;
			fileIn.close();
		}
		else
		{
			cout << "File error";
		}

	}
	else
	{
		cout << "File error";
	}



	system("pause");
	return;
}