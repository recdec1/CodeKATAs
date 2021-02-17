#include <math.h>

using namespace std;

// solution works on all but one answer out of long long range // pow returns double, so cast it to long long to remove the inaccuracies of a double.
class ASum
{
public:
	static long long findNb(long long m);
};

long long ASum::findNb(long long m)
{
	long long answer = 0;
	long long cubes = 1;
	while (answer < m)
	{
		answer += (long long)pow(cubes, 3);
		if (answer == m)
			return cubes;
		cubes++;
	} 
	return -1;
}


