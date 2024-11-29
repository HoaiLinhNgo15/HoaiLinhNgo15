#include <stdio.h>
int main()
{
	//Khai bao cac bien
	int n, S=0, P=1;

	//nhap du lieu vao
	do
	{
		printf("\nNhap vao mot so nguyen duong: ");
		scanf("%d", &n);
	}while(n<=0);

	//tinh toan 
	for (int i=1; i<=n; i++)
	{
		S+=i;
		P=P*i;
	}

	//xuat du lieu
	printf("\nTong cac so tu 1 den %d la: %d\nTich cac so tu 1 den %d la: %d", n, S, n, P);
	return 0;
}
