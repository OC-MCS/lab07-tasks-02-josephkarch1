#include <iostream>
#include <string>
#include "Retail.h"
#include <cstdlib>

using namespace std;

Retail::Retail()
{
	price = 0.0;
	unitsOnHand = 0;
	description = "none";
}

float Retail::getStockValue()
{
	total = static_cast<double>(unitsOnHand) * price;

	return total;
}

void Retail::setPrice( double value1)
{
	price = value1;
}

void Retail::setDescription(string value2)
{
	description = value2;
}

void Retail::setUnitsOnHand(int value3)
{
	unitsOnHand = value3;
}

string Retail::getDescription()
{
	return description;
}

double Retail::getPrice()
{
	return price;
}

int Retail::getUnitsOnHand()
{
	return unitsOnHand;
}