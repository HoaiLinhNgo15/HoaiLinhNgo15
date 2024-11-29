#include <stdio.h>
int tinhTongChuSo (int n);
int tinhTongLe (int n);
int kiemtraSNT (int n);
int tinhTongChuSoNT (int n);
int demChuSo (int n);
int demBoi5 (int n);
int demBoi3 (int n);

int main ()
{
	int n;
	
	// Nhap n
	do
	{
		printf ("Nhap mot so nguyen duong lon hon 100 va be hon 10.000: \n");
		scanf ("%d", &n);
	}while (n<100||n>10000);

	//Tinh tong cac chu so cua n
	printf ("\nTong cac chu so trong %d: %d", n, tinhTongChuSo(n));
	
	// Tinh tong cac chu so le trong n
	printf ("\nTong cac chu so le trong %d la: %d", n, tinhTongLe(n));
	
	// Tinh tong cac chu so nguyen to trong n
	printf ("\nTong cac chu so nguyen to trong %d la: %d", n, tinhTongChuSoNT(n));
	
	// Dem chu so 0 trong n
	if(demChuSo(n)==0)
		printf ("\nTrong %d khong co chu so 0!!!", n);
	else if (demChuSo(n)!=0)
		printf ("\nCo %d chu so 0 trong %d!!!", demChuSo(n), n);
	
	// Dem chu so chia het cho 3 trong n
	printf ("\nCo %d chu so chia het cho 3 trong %d!!!", demBoi3(n), n);
	
	// Dem chu so chia het cho 3 trong n
	printf ("\nCo %d chu so chia het cho 5 trong %d!!!", demBoi5(n), n);
	
	return 0;
}

int demBoi5 (int n)
{
	int dem=0;
	while (n>0)
	{
		if (n%10!=0)
		{
			if ((n%10)%5==0)
				dem++;
		}
		
		n/=10;
	}
	return dem;
}

int demBoi3 (int n)
{
	int dem=0;
	while (n>0)
	{
		if (n%10!=0)
		{
			if ((n%10)%3==0)
				dem++;
		}
		n/=10;
	}
	return dem;
}

int demChuSo (int n)
{
	int dem=0;
	while (n>0)
	{
		if ((n%10)==0)
			dem++;
		n/=10;
	}
	return dem;
}

int tinhTongChuSoNT (int n)
{
	int s=0;
	while( n>0)
	{
		if( kiemtraSNT(n%10)==1)
			s+=n%10;
		n/=10;
	}
	return s;
}

int kiemtraSNT (int n)
{
	int dem=0;
	for( int i=1; i <= n; i++)
	{
		if (n%i==0)
			dem++;
	}
	if(dem==2)
		return 1;
	return 0;
}

int tinhTongLe (int n)
{
	int s=0;
	while (n>0)
	{
		if((n%10)%2!=0)
			s+=n%10;
		n=n/10;
	}
	return s;
}

int tinhTongChuSo (int n)
{
	int s=0;
	while (n>0)
	{
		s=s+n%10;
		n=n/10;
	}
	return s;
}
