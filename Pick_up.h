#pragma once
#include "Passenger_car.h"

class Pick_up : public Passenger_car
{
public:
	void print() override;
	Pick_up();
};