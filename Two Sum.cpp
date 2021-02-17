#include <utility>
#include <vector>

using namespace std;

pair<size_t, size_t> two_sum(const vector<int>& numbers, int target)
{
	pair<size_t, size_t> returnPair;
	for (int i = 0; i < numbers.size(); i++)
	{
		for (int x = i + 1; x < numbers.size(); x++)
		{
			if (numbers[i] + numbers[x] == target)
			{
				returnPair = { i, x };
				return returnPair;
			}
		}
	}
}