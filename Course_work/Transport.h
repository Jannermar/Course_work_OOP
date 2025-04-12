#pragma once
#include <iostream>
#include <vector>
#include <cmath>
#include <stdexcept>

using namespace std;
class Transport
{
private:

protected:
	string category_of_driving_licence;
	string name;
	long long load_capacity;
	long long backpack;
public:
	virtual ~Transport();
	virtual void print();
	void Backpack_algorithm(vector<long long>& weight, vector<long long>& cost, int n);
	Transport();
	long long get_backpack();
};

