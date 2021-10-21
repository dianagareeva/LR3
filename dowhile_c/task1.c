#include <math.h>

double summ(int n)
{
	double sum = 0;
	int i = 0;

	if (n == 0)
	{
		return 0;
	}
	else
	{
		do
		{
			sum += pow(-1, i) * (1 - ((2 * (double)i - 1) / (2 * (i + 1))));
			++i;
		} while (i < n);
		return sum;
	}
}

