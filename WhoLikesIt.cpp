#include <string>
#include <iostream>
#include <vector>

using namespace std;

string likes(const vector<string>& names)
{
	if (names.size() == 0)
	{
		return "no one likes this";
	}
	else if (names.size() <= 1)
	{
		string returnString = names[0] + " likes this";
		return returnString;
	}
	else if (names.size() <= 2)
	{
		string returnString = names[0] + " and " + names[1] + " like this";
		return returnString;
	}
	else if (names.size() <= 3)
	{
		string returnString = names[0] + ", " + names[1] + " and " + names[2] + "like this";
		return returnString;
	}
	else
	{
		string returnString = names[0] + ", " + names[1] + " and " + to_string(names.size() - 2)  + " others like this";
		return returnString;
	}

}