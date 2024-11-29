#include <stdio.h>
#include <math.h>
int main()
{
	double a = 123.567, b = -12;
	printf("\nfabs(%lf)= %lf", b, fabs(b));
	printf("\nceil(%lf) = %lf", a, ceil(a));
	printf("\nfloor(%lf) = %lf", a, floor(a));
	printf("\nsqrt(%lf) = %lf", a, sqrt(a));
	printf("\npow(2,3) = %lf", pow(2,3) );
	return 0;
}
