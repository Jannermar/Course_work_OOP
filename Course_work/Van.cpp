#include "Van.h"

void Van :: print()
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

Van::Van() : Trunk_car()
{
	name = "Van";
	load_capacity = 5000;
}