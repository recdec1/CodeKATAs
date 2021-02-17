#include <cctype>
#include <string>
#include <vector>

using namespace std;

vector<string> wave(string y)
{
	vector<string> output;// fills the vector the word length amount of words
	if (y == "")
		return output;
	int i = 0;
	while (i < (int) y.size())
	{
		string temp = y;
		if (temp[i] == ' ')
		{
			i++;
			continue;
		}
		temp[i] = toupper(temp[i]);
		output.push_back(temp);
		i++;
	}
	return output;	
}