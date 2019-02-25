#pragma once
#include <string>

using namespace std;

class Retail
{
	private:
		double price;
		float total;
		int unitsOnHand;
		string description;

	public:
		Retail();
		float getStockValue();
		void setPrice(double value1);
		void setDescription(string value2);
		void setUnitsOnHand(int value3);
		string getDescription();
		int getUnitsOnHand();
		double getPrice();
		
};
