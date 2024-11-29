#include <stdio.h>
int main()
{
	float dt, sl, dg, cp;
	printf("\nNhap so luong hang hoa cua cong ty: ");
	scanf("%f", &sl);
	printf("\nNhap don gia: ");
	scanf("%f", &dg);
	printf("\nNhap chi phi van chuyen: ");
	scanf("%f", &cp);
	dt= sl*dg-cp;
	printf("\nDoanh thu trong ngay cua cong ty la: %f", dt);
	
	return 0;
}
