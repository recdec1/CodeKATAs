#include <string>
#include <vector>
using namespace std;


// my solution
vector<string> solution(const string& s)
{
	string twoLetters("");
	vector<string> array;
	for (auto c : s)
	{
		if ((int)twoLetters.length() == 2)
		{
			array.push_back(twoLetters);
			twoLetters = ("");
		}
		twoLetters.push_back(c);
	}
	if ((int)twoLetters.length() == 1)
	{
		twoLetters.push_back('_');
		array.push_back(twoLetters);
	}
	return array;

}

// optimised solution

//std::vector<std::string> solution(const std::string& s) {
//	std::vector <std::string> res;
//	for (int i = 0; i < s.length(); i += 2) res.push_back(s.substr(i, 2));
//	if (s.length() % 2) res[res.size() - 1] += "_";
//	return res;
//}