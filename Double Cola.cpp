#include <string>
#include <vector>
#include <math.h>
using namespace std;

string who_is_next(vector<string> names, long long r)
{
	int geeks = names.size();
	while (r > geeks)
	{
		r -= geeks;
		geeks *= 2;
	}
	return names[ceil(r/(geeks/names.size())) - 1];
}