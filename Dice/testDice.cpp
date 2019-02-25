#include<iostream>
#include "die.h"

using namespace std; 

// client code to use the Die class goes here

void displayPercent(int array1[], int array2[]);

int main()
{
	Die die6(6);
	Die die12(12);
	int value;
	int value2;
	int counter1[13] = { 0,0,0,0,0,0,0,0,0,0,0,0,0 };
	int counter2[7] = {0,0,0,0,0,0,0};

	for (int x = 0; x < 1000000; x++)
	{
		die6.roll();
		value = die6.getValue();
		counter2[value]++;
	}

	for (int x = 0; x < 1000000; x++)
	{
		die12.roll();
		value2 = die12.getValue();
		counter1[value2]++;
	}

	displayPercent(counter2, counter1);

	return 0;
}


void displayPercent(int array1[], int array2[])
{
	int stop;
	double percent;


	cout << "Here are the D-6 percentages: " << endl;
	for (int y = 1; y < 7; y++)
	{
		percent = array1[y] / 1000000.00;
		cout << "Side " << y << ": \t" << percent * 100 << "%" << endl;
	}

	cout << "Here are the D-12 percentages: " << endl;
	for (int z = 1; z < 13; z++)
	{
		percent = array2[z] / 1000000.00;
		cout << "Side" << z << ": \t\t" << percent * 100 << "%" << endl;
	}

	cin >> stop;
}