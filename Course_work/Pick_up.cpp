#include "Pick_up.h";

void Pick_up::print()
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

Pick_up::Pick_up() : Passenger_car()
{
	name = "Pick_up";
	load_capacity = 1010;
}