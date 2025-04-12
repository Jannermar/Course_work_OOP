#include "Motocycle.h"
#include <iostream>;

using namespace std;

void Motocycle::print()
{
	if (backpack > 0)
	{
		cout << backpack << " " << name << " " << category_of_driving_licence << "  *there is a possibility to offer a helmet too" << "\n";
	}
	else
	{
		cout << "the products are too heavy for " << name << "\n";
	}
};

Motocycle::Motocycle() : Two_wheeled()
{
	name = "Motocycle";
	load_capacity = 35;
}