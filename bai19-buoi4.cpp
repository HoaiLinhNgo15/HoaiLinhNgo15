#include <stdio.h>
#define SIZE 100
int tongMang(int a[], int n);
void xuatMang(int a[], int n);
void nhapMang (int a[], int n );
int tongSoDuong (int a[], int n);
int tongVTLe (int a[], int n);
int demSoAm (int a[], int n);
int demLe (int a[], int n);
int kiemSNT (int n);
int demSNT (int a[], int n);
void timSNT (int a[], int n);
void inSoDuongLe (int a[], int n);
int kiemSoAm (int a[], int n);
int timSo (int a[], int n, int t);

int main ()
{
	int A[SIZE], n, t;
	do 
	{
		printf ("\nNhap so phan tu mang: ");
		scanf ("%d", &n);
	}while ( n <= 0);
	
	// Nhap n phan tu
	nhapMang (A, n);
	printf("\nCac phan tu trong mang la: ");
	xuatMang(A,n);
	printf("\nTong mang: %d", tongMang(A,n));
	printf("\nTong phan tu DUONG trong Mang: %d", tongSoDuong(A, n));
	printf("\nTong cac phan tu tai VI TRI LE la: %d", tongVTLe(A,n));
	printf("\nSo phan tu AM co trong mang la: %d", demSoAm(A,n));
	printf("\nSo phan tu la SO LE: %d", demLe(A, n));
	printf("\nSo cac phan tu la SNT trong mang: %d", demSNT(A, n));
	timSNT(A, n);
	printf("\nCac phan tu la SO DUONG LE: ");
	inSoDuongLe(A, n);
	if (kiemSoAm (A, n)==0)
		printf("\nMang khong ton tai so AM!!!");
	else if(kiemSoAm(A, n)!=0)
		printf("\nMang co ton tai so Am!!!");	
	printf("\nNhap vao mot gia tri nguyen can tim trong mang: ");
	scanf("%d", &t);
	if (timSo(A,n,t)==0)
		printf("\nKhong tim thay gia tri nguyen %d trong mang!", t);
	else if (timSo(A,n,t)!=0)
		printf("\nTrong mang co ton tai gia tri nguyen %d!", t);
	
	return 0;
}

int timSo (int a[], int n, int t)
{
	for (int i=0 ; i<n; i++)
	{
		if (a[i]==t)
			return 1;
	}
	return 0;
}
int kiemSoAm (int a[], int n)
{
	for (int i=0; i<n ; i++)
	{
		if (a[i]<0)
		{
			return 1;
			break;
		}
	}
	return 0;
}
void inSoDuongLe (int a[], int n)
{
	for (int i=0 ; i<n ; i++)
	{
		if(a[i]>0 && a[i]%2!=0)
			printf("%8d", a[i]);
	}
}
void timSNT (int a[], int n)
{
	for (int i=0 ; i<n ; i++)
	{
		if(kiemSNT(a[i])==1)
		{
			printf("\nPhan tu la SNT DAU TIEN trong mang: %d", a[i]);
			break;
		}
	}
}
int demSNT (int a[], int n)
{
	int dem=0;
	for (int i=0 ; i<n ; i++)
	{
		if( kiemSNT(a[i])==1)
			dem++;
	}
	return dem;
}

int kiemSNT (int n)
{
	int dem=0;
	for ( int i=1; i<=n ; i++)
	{
		if (n%i==0)	
			dem++;
	}
	if(dem==2)
		return 1;
	return 0;
}

int demLe (int a[], int n)
{
	int dem =0;
	for (int i=0 ; i<n ; i++)
	{
		if(a[i]%2!=0)
			dem++;
	}
	return dem;
}

int demSoAm (int a[], int n)
{
	int dem=0;
	for (int i=0 ; i<n ; i++)
	{
		if( a[i]< 0)
			dem++;
	}
	return dem;
}
int tongVTLe (int a[], int n)
{
	int s=0; 
	for (int i=0 ; i<n ; i++)
	{
		if( i%2!=0)
			s+=a[i];
	}
	return s;
}

int tongSoDuong (int a[], int n)
{
	int s=0;
	for (int i=0 ; i<n ; i++)
	{
		if( a[i]>0)
			s+=a[i];
	}
	return s;
}

int tongMang(int a[], int n)
{
	int tong = 0;
	int i = 0;
	do
	{
		tong = tong + a[i];
		i++;
	}while(i<=n-1);
	
	return tong;
}
void xuatMang(int a[], int n)
{
	int i;
	for(i=0; i<=n-1; i++)
	{
		printf("%8d", a[i]);//*(a+i)
	}
}

// Ham nhap mang
void nhapMang (int a[], int n )
{
	for (int i=0; i < n; i++)
	{
		printf("\nNhap gia tri tai vi tri %d: ", i);
		scanf("%d", &a[i]);//a + i
	}
}
