
// code to test your RetailItem class goes here
#include <iostream>
#include <string>
#include "Retail.h"
#include <vector>
#include <fstream>
#include <cstdlib>
#include <iomanip>


using namespace std;

void loadItems(vector<Retail>  &retailItems);


int main()
{
	vector<Retail> retailItems;
	loadItems(retailItems);
	
	cout << "Description \t" << "Price \t\t" << "On Hand \t" << "Value" << endl;
	cout << "--------------------------------------------------------------" << endl;
	for (int x = 0; x < retailItems.size(); x++)
	{
		cout << setw(10) << left << retailItems[x].getDescription() << "\t" << setw(7) << right << retailItems[x].getPrice() << "\t\t" << retailItems[x].getUnitsOnHand() << "\t\t" << setprecision(2) << fixed << retailItems[x].getStockValue() << endl;
	}

	return 0;
}

void loadItems(vector<Retail> &retailItems)
{
	ifstream inputFile;
	int index = 0;
	string inputDescription;
	string inputDouble;
	string inputUnitsOnHand;
	Retail tempRetail;

	inputFile.open("data.csv");

	while (getline(inputFile, inputDescription, ','))
	{
		getline(inputFile, inputDouble, ',');
		getline(inputFile, inputUnitsOnHand, '\n');
		tempRetail.setDescription(inputDescription);
		tempRetail.setPrice(stod(inputDouble));
		tempRetail.setUnitsOnHand(stoi(inputUnitsOnHand));
		retailItems.push_back(tempRetail);

		index++;
	}


}