#include <stdio.h>
int main()
{
	//khai bao bien
	int n, s=0;
	
	//nhap du lieu 
	do 
	{
		printf("Nhap vao so nguyen duong: \n");
		scanf("%d", &n);
	}while(n<=0);
	
	//qua trinh tinh toan 
	while(n>0)
	{
		s=s+n%10;
		n=n/10;
	}
	
	//xuat du lieu
	printf("Tong cac so co trong so vua nhap la: %d", s);
	return 0;
}
