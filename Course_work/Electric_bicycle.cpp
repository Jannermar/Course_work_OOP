#include "Electric_bicycle.h"

void Electric_bicycle :: print()
{
	if (backpack > 0)
	{
		cout << backpack << " " << name << " " << category_of_driving_licence << "  *there is a possibility to rent without driving licence" << "\n";
	}
	else
	{
		cout << "the products are too heavy for " << name << "\n";
	}
};

Electric_bicycle :: Electric_bicycle() : Two_wheeled()
{
	name = "Bicycle";
	load_capacity = 25;
}