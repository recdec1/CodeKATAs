#include <string>

using namespace std;

string format_duration(int seconds)
{
	int year = seconds / 3153600;
	seconds = seconds % 3153600;
	int day = seconds / 86400;
	seconds = seconds % 86400;
	int hours = seconds / 3600;
	seconds = seconds & 3600;
	int minutes = seconds / 60;
	seconds = seconds % 60;

	string output;
	if (seconds <= 0)
	{
		return "now";
	}
	if (year >= 1)
		if (year == 1)
		{
			output += year + " year,";
		}
		else
			output += year + " years";
	if (day >= 1)
		if (day == 1)
		{
			output += day
		}
}