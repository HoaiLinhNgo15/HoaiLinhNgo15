#include <stdio.h>
void xuatGiaTri (int n);
void inChan (int n);
void inBoiSo (int n);
int kiemtraSNT (int n);
void inSNT (int n);
int tinhTong ( int n);
int tinhTongSoLe ( int n);
int tinhTongSNT ( int n);
int demSoLe ( int n);
float tinhTBCong (int n);
int demSoNT ( int n);
float tinhTBSNT( int n);

int main()
{
	int n;
	do
	{
		printf ("Nhap vao mot so nguyen duong: \n");
		scanf ("%d", &n);
	}while( n <= 0||n>100 );
	
	//in cac so tu 1 den n
	printf ("Cac so tu 1 den %d: \n", n);
	xuatGiaTri(n);
	
	// in cac so chan tu 1 den n
	printf ("\n\nCac so chan tu 1 den %d: ", n);
	inChan(n);
	
	// In cac so chia het cho 5 trong doan tu 1 den n
	printf ("\n\nCac so trong doan tu 1 den %d chia het cho 5 la: ", n);
	inBoiSo(n);
	
	// In cac so nguyen to nho hon n
	printf ("\n\nCac so nguyen to nho hon %d la: ", n);
	inSNT(n);
	
	// Tinh tong cac gia tri tu 1 den n
	printf ("\n\nTong cac gia tri tu 1 den %d la: %d", n, tinhTong(n));
	
	// Tinh tong cac gia tri le tu 1 den n
	printf ("\n\nTong cac gia tri le tu 1 den %d la: %d", n, tinhTongSoLe(n));
	
	// Tinh tong cac so nguyen to nho hon n
	printf ("\n\nTong cac so nguyen to nho hon %d la: %d", n, tinhTongSNT(n));
	
	// Tinh Trung Binh Cong cac so tu 1 den n
	printf ("\n\nTrung binh cong cua cac so le tu 1 den %d la: %.2f", n, tinhTBCong(n));
	
	// Tinh TB cong cac so SNT nho hon n
	printf ("\n\nTrung binh cong cac so nguyen to nho hon %d la: %.2f", n, tinhTBSNT(n));
		
	return 0;
}

float tinhTBSNT( int n)
{
	float s;
	s=tinhTongSNT(n)/(float)demSoNT(n);
	return s;
}

int demSoNT ( int n)
{
	int s=0;
	for (int i=1; i < n; i++)
	{
		if(kiemtraSNT(i)==1)
			s++;
	}
	return s;
}

float tinhTBCong (int n)
{
	float s;
	s=tinhTongSoLe(n)/(float)demSoLe(n);
	return s;
}

int demSoLe ( int n)
{
	int s=0;
	for (int i=1; i <= n; i++)
	{
		if(i % 2 !=0)
			s++;
	}
	return s;
}

int tinhTongSNT ( int n)
{
	int s=0;
	for (int i=1; i < n; i++)
	{
		if( kiemtraSNT(i)==1)
			s+=i;
	}
	return s;
}

int tinhTongSoLe ( int n)
{
	int s=0;
	for (int i=1; i <= n; i++)
	{
		if(i % 2 !=0)
			s+=i;
	}
	return s;
}

int tinhTong ( int n)
{
	int s=0;
	for (int i=1; i <= n; i++)
	{
		s+=i;
	}
	return s;
}

void inSNT (int n)
{
	for ( int i=1 ; i < n; i++)
	{
		if( kiemtraSNT(i)==1)
			printf("%d\t", i);
	}
}

int kiemtraSNT (int n)
{
	int dem=0;
	for ( int i=1; i<=n ; i++)
	{
		if(n % i == 0)
		{
			dem++;
		}
	}
	if(dem == 2)
		return 1;
	return 0;
}

void inBoiSo (int n)
{
	int i=1;
	while( i <= n)
	{
		if(i % 5 == 0)	
			printf ("%d\t", i);
		i++;
	}
}

void inChan (int n)
{
	for( int i=1; i <= n; i++)
	{
		if( i % 2 == 0)
			printf ("%d\t", i);
	}
}

void xuatGiaTri (int n)
{
	for ( int i=1; i <= n ; i++)
	{
		printf ("%d\t", i);
	}
}
