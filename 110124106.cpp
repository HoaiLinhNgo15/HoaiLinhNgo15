#include <stdio.h>
#define SIZE 50

void nhapMang (float a[], int n);
void xuatMang (float a[], int n);
float tinhTong (float a[], int n);
float tinhTB (float a[], int n);
void timMax (float a[], int n);
void timMin (float a[], int n);
int demNgayHon (float a[], int n, float x);
int demNgayKem (float a[], int n, float x);
void sapTang (float a[], int n);
void xuatMang1 (float a[], int n);

int main()
{
	float A[SIZE], x;
	int n;
	
	// nhap so ngay trong thang can quan li
	do
	{
		printf("\nNhap so ngay cua thang nay: ");
		scanf("%d", &n);
	}while(n>31||n<28); 
	
	printf("\nNhap so tien chi tieu tung ngay cua thang nay: ");
	nhapMang(A, n);
	
	printf("\nSo tien chi tieu tung ngay trong thang: ");
	xuatMang(A, n);
	
	printf("\nTong so tien chi tieu thang nay: %.2f", tinhTong(A,n));
	
	printf("\nSo tien chi tieu TRUNG BINH moi ngay: %.2f", tinhTB(A,n));
	
	printf("\nNgay co chi tieu cao nhat: ");
	timMax(A,n);
	
	printf("\nNgay co chi tieu thap nhat: ");
	timMin(A,n);
	
	printf("\nNhap mot muc chi tieu: ");
	scanf("%f", &x);
	
	printf("\nSo ngay co chi tieu VUOT TREN muc %.2f: %d", x, demNgayHon(A,n,x));
	
	printf("\nSo ngay co chi tieu THAP HON HOAC BANG muc %.2f: %d", x, demNgayKem(A,n,x));
	
	printf("\nSap xep so tien chi tieu tang dan: ");
	sapTang(A,n);
	xuatMang1(A,n);
	
	return 0;
}
void nhapMang (float a[], int n)
{
	for (int i=0 ; i<n ; i++)
	{
		do
		{
			printf("\nNhap so tien chi tieu ngay %d: ", i+1);
			scanf("%f", &a[i]);
		}while(a[i]<0);
	}
}
void xuatMang (float a[], int n)
{
	for (int i=0 ; i<n ; i++)
	{
		printf("\nSo tien chi tieu ngay %d: %8.2f", i+1, a[i]);
	}
}
float tinhTong (float a[], int n)
{
	float s=0;
	for (int i=0 ; i<n ; i++)
	{
		s+=a[i];
	}
	return s;
}
float tinhTB (float a[], int n)
{
	float s=tinhTong(a,n)/n;
	return s;
}
void timMax (float a[], int n)
{
	float max=a[0];
	for (int i=0 ; i<n ; i++)
	{
		if(a[i]>max)
			max=a[i];
	}
	for(int i=0 ; i<n ; i++)
	{
		if(a[i]==max)
			printf("\nNgay %d", i+1);
	}
}
void timMin (float a[], int n)
{
	float min=a[0];
	for (int i=0 ; i<n ; i++)
	{
		if(a[i]<min)
			min=a[i];
	}
	for(int i=0 ; i<n ; i++)
	{
		if(a[i]==min)
			printf("\nNgay %d", i+1);
	}
}
int demNgayHon (float a[], int n, float x)
{
	int dem=0;
	for (int i=0 ; i<n ; i++)
	{
		if(a[i]>x)
			dem++;
	}
	return dem;
}
int demNgayKem (float a[], int n, float x)
{
	int dem=0;
	for (int i=0 ; i<n ; i++)
	{
		if(a[i]<=x)
			dem++;
	}
	return dem;
}
void sapTang (float a[], int n)
{
	float t;
	for (int i=0 ; i<n-1 ; i++)
	{
		for (int j=i+1 ; j<n ; j++)
		{
			if(a[i]>a[j])
			{
				t=a[j];
				a[j]=a[i];
				a[i]=t;
			}
		}
	}
}
void xuatMang1 (float a[], int n)
{
	for (int i=0 ; i<n ; i++)
	{
		printf("%8.2f", a[i]);
	}
}
