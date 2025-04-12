#pragma once
#include <iostream>
#include <vector>
#include <cmath>
#include <stdexcept>
#include "Two_wheeled.h"

using namespace std;

class Electric_bicycle : public Two_wheeled
{
public:
	void print() override;
	Electric_bicycle();
};
