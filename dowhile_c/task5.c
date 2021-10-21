#include <math.h>

int findFirstNegativeElement(double eps)
{
	int i = 0;
	double a;

	do 
	{
		a = pow(-1, i) * (1 - ((2 * (double)i - 1) / (2 * (i + 1))));
		if (fabs(a) <= eps && a < 0)
		{
			return ++i;
		}
		++i;
	} while ((fabs(a) > 0));

}