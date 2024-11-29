#include <stdio.h>
#include <math.h>
#define PI 3.1415
int main()
{
	float a=23, b=50, h=30, c=12.56, r, dientich, s1, s2;
	r=c/(2*PI);
	s1=r*r*PI;
	s2=(a+b)*(h/2);
	dientich=s2-s1;
	printf("\nDien tich phan con lai cua san truong la: %.2f m^2", dientich);
	return 0;
}
