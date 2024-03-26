#include <iostream>
#include <Windows.h>
#include <string>;
using namespace std;
const int st = 5;
struct students
{
	string Name;
	int Number;
	char Grant[5];
	float Average;

};

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	students IKM723[st];
	students temp;
	for (int i = 0; i < st; i++)
	{
		cout << "Enter student name\n";
		cin >> IKM723[i].Name;
		IKM723[i].Number = i;
		cout << "Receives a scholarship?\n";
		cin >> IKM723[i].Grant;
		cout << "Enter average rating\n";
		cin >> IKM723[i].Average;
	}
	for (int i = 0; i < st; i++)
	{
		for (int j = 0; j < st-1; j++)
		{
			if (IKM723[j].Average < IKM723[j + 1].Average)
			{
				temp = IKM723[j+1];
				IKM723[j+1] = IKM723[j];
				IKM723[j] = temp;
			}
		}
	}
	cout << endl << "List of students by rating" << endl;
	for (int i = 0; i < st; i++)
	{
		cout << IKM723[i].Average << " " << IKM723[i].Name << " " << IKM723[i].Grant << " " << IKM723[i].Number << endl;
	}
}
