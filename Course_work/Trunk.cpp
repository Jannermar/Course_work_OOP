#include "Trunk.h"

void Trunk::print()
{
	if (backpack > 0)
	{
		cout << backpack << " " << name << " " << category_of_driving_licence << "  *it is not allowed in a center of a city" << "\n";
	}
	else
	{
		cout << "the products are too heavy for " << name << "\n";
	}
};

Trunk::Trunk() : Trunk_car()
{
	name = "Trunk";
	load_capacity = 24000;
}