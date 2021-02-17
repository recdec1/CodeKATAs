#include <vector>
#include <map>
using namespace std;

int FindOdd(const vector<int>& numbers)
{
	map<int, int> mapInt;

	for (auto iter = numbers.begin(); iter != numbers.end(); iter++)
	{
		auto finder = mapInt.find(*iter);
		if (finder != mapInt.end())
		{
			mapInt[*iter] += 1;
		}
		else
		{
			mapInt.insert({ *iter, 1 });
		}
	}
	for (auto oddSearch = mapInt.begin(); oddSearch != mapInt.end(); oddSearch++)
	{
		if (oddSearch->second % 2 != 0)
			return oddSearch->first;
	}
}

// optimal solutions

#include <vector>

int fOdd(const std::vector<int>& numbers) {
	for (auto elem : numbers) {				
		if (std::count(numbers.begin(), numbers.end(), elem) % 2 != 0) {
			return elem;
		}/* iterate though the vector of numbers, if the count of your selected element, throughout the whole of the numbers
		 array is NOT divisible by 2, return the element*/
	}
	return 0;
}

#include <functional>
#include <numeric>
#include <vector>

int OddFind(const std::vector<int>& numbers) {
	return std::accumulate(numbers.cbegin(), numbers.cend(), 0, std::bit_xor<>());
}