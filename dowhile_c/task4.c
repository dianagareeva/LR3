#include <math.h>

int findFirstElement(double eps)
{
	int i = 0;
	double a;

	do 
	{
		a = pow(-1, i) * (1 - ((2 * (double)i - 1) / (2 * (i + 1))));
		if (fabs(a) <= eps)
		{
			break;
		}
		++i;
	} while (fabs(a) > eps);
	return ++i;
}