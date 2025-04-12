#include "Sedan.h"

void Sedan::print()
{
	if (backpack > 0)
	{
		cout << backpack << " " << name << " " << category_of_driving_licence << "\n";
	}
	else
	{
		cout << "the products are too heavy for " << name << "\n";
	}
};

Sedan::Sedan() : Passenger_car()
{
	name = "Sedan";
	load_capacity = 400;
}