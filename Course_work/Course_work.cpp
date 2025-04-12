//This programm is a database of 6 different types of transport, each of them has its own load_capacity
//User enters number of differnt types of items, weight and cost of each (suppose there are infinity amount of items of each type)
//Programm return a maximum ammount of money that each type of car can earn transporting this items
//It uses a well-known dynamic programming algorithm called a backpack problem
#include <iostream>
#include <vector>
#include <cmath>
#include <stdexcept>
#include "Transport.h"
#include "Electric_bicycle.h"
#include "Two_wheeled.h"
#include "Motocycle.h"
#include "Passenger_car.h"
#include "Sedan.h"
#include "Pick_up.h"
#include "Trunk_car.h"
#include "Van.h"
#include "Trunk.h"

using namespace std;

void sorting_algorithm(vector<Transport*>& transports, int n, vector<Transport*>& new_transports) // simple bubble sort, that sorts items for erarned money parametr
{
	vector<bool> usd(n, 0);
	for (int i = 0; i < n; i++)
	{
		long long minn = 1e18 + 1;
		int indx = 0;
		for (int j = 0; j < n; j++)
		{
			if (usd[j] == 0 && transports[j]->get_backpack() < minn)
			{
				minn = transports[j]->get_backpack();
				indx = j;
			}
		}
		usd[indx] = 1;
		new_transports[i] = transports[indx];
	}
}

int main()
{
	cout << "Enter an amount of different types of items: ";
	int kol;
	cin >> kol;
	vector<long long> weight(kol);
	vector<long long> cost(kol);
	cout << "Enter a weight and cost of each item (in a form \"weight_of_i-th_item cost_of_i-th_item \" - all integer numbers:" << "\n";
	for (int i = 0; i < kol; i++)
	{
		cin >> weight[i] >> cost[i];
	}
	vector<Transport*> transports = { new Electric_bicycle(), new Motocycle(),  new Sedan(), new Pick_up(), new Van(), new Trunk() };
	try
	{
		for (auto t : transports)
		{
			t->Backpack_algorithm(weight, cost, kol); //usage of backpack algorithm to every transport. described in Transport.cpp
		}
	}
	catch (invalid_argument const& ex)//exeption invalid_argument in Transport.cpp
	{
		cout << ex.what();
		return 0;
	}
	int n = transports.size();
	vector<Transport*> new_transports(n);//for sorted Transport
	sorting_algorithm(transports, n, new_transports);
	cout << "\n" << "List of avaliable transports in a form \"money_that_can_be_earned  name_of_transport  category_of_driving_licence  comments\":" << "\n";
	for (auto t : new_transports)
	{
		t -> print();
	}
	for (auto t : transports)
	{
		delete(t);
	}

}