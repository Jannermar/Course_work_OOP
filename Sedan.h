#pragma once
#include "Passenger_car.h"

class Sedan : public Passenger_car
{
public:
	void print() override;
	Sedan();
};