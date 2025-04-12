#pragma once
#include "Trunk_car.h"

class  Van : public Trunk_car
{
public:
	void print() override;
	Van();
};