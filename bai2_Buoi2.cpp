#include <stdio.h>
int main()
{
	//khai bao bien
	int n;
	
	//nhap du lieu vao
	do
	{
		printf("\n\t\tNhap vao mot so nguyen duong: ");
		scanf("%d", &n);
	}while(n>=10||n<=1);
	
	//qua trinh tinh toan va xuat du lieu
	printf("\t\tBang nhan cua %d: ", n);
	for(int i=1; i<=10; i++)
	{
		printf("\n\t\t%d x %d = %d", n, i, n*i);
	}
	int a=2;
	printf("\n\n\t\tBang cuu chuong tu 2 den 9: ");
	while(a<=9)
	{
		printf("\n\t\tBang nhan %d: ", a);
		for( int i=1; i<=10; i++)
		{
			printf("\n\t\t%d x %d = %d", a, i, a*i);
		}
		printf("\n");
		a++;
	}
	return 0;
}
