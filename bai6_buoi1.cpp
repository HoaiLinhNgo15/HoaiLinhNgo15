#include <stdio.h>
int main ()
{
	int a=5, b=6;
	float x, c, d;
	x=a/b;
	printf("\nKet qua phep chia so nguyen la: %f", x);
	x= (float)a/b;
	printf("\nKet qua cua phep chia so thuc la: %f", x);
	a=2; b=7;
	c=b/a;
	printf("\nGia tri cua c la: %f", c);
	d=(float)b/a;
	printf("\nGia tri cua d la: %f", d);
	return 0;
}
