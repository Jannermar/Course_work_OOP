#include "Transport.h"

void Transport::print() {};

Transport::~Transport() {};

Transport::Transport() {};

long long Transport::get_backpack()
{
	return backpack;
}

void Transport::Backpack_algorithm(vector<long long>& weight, vector<long long>& cost, int n)
{

	vector<vector<long long>> dp(n, vector<long long>(load_capacity, 0));
	for (int i = 0; i < n; i++)
	{
		if (weight[i] <= 0)
			throw invalid_argument("Weight should be more than 0. ");
		if (cost[i] <= 0)
			throw invalid_argument("Cost should be more than 0. ");
		for (int j = 0; j < load_capacity; j++)
		{
			if (j > 0)
			{
				dp[i][j] = dp[i][j - 1];
			}
			if (i > 0)
			{
				dp[i][j] = max(dp[i][j], dp[i - 1][j]);
			}
			if (j == weight[i] - 1)
			{
				dp[i][j] = max(dp[i][j], cost[i]);
			}
			if (j >= weight[i])
			{
				dp[i][j] = max(dp[i][j], dp[i][j - weight[i]] + cost[i]);
			}
		}
	}
	backpack = dp[n - 1][load_capacity - 1];
}
