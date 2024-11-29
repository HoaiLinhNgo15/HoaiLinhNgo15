#include <stdio.h>
#define SIZE 100

void nhapMang (float a[], int n);
void xuatMang (float a[], int n);
float tinhTong (float a[], int n);
float tinhTBC (float a[], int n);
int demSODUONG (float a[], int n);
void sapTANG (float a[], int n);
void inSOLE (float a[], int n);
void xuatVT0 (float a[], int n);
float timMAX (float a[], int n);
void vitriMAX (float a[], int n);
void xuatVTMAX (float a[], int n);
int ktAM (float a[], int n);

int main()
{
	float A[SIZE];
	int n;
	// Nhap du lieu vao
	do 
	{
		printf("\nNhap so phan tu cho mang: ");
		scanf("%d", &n);
	}while(n<=0||n>100);
	
	/*GOI HAM
	cau a */
	printf("\nNhap gia tri cho tung phan tu mang: ");
	nhapMang(A,n);
	// cau b
	printf("\nMang gom cac phan tu co gia tri: ");
	xuatMang(A,n);
	// cau c
	printf("\nTong cac phan tu trong mang: %.2f", tinhTong(A,n));
	// cau d
	printf("\nTrung binh cong cac phan tu tai VI TRI LE: %.2f", tinhTBC(A,n));
	// cau e
	printf("\nSo phan tu DUONG co trong mang: %d", demSODUONG(A,n));
	// cau f
	sapTANG(A,n);
	printf("\nCac phan tu mang sau khi sap xep TANG DAN: ");
	xuatMang(A,n);
	// cau g
	printf("\nCac gia tri tai VI TRI LE: ");
	inSOLE(A,n);
	// cau h
	printf("\nVi tri cua cac phan tu co gia tri bang 0: ");
	xuatVT0(A,n);
	//cau i
	printf("\nGia tri MAX: %.2f", timMAX(A,n));
	// cau j
	printf("\nVi tri gia tri MAX dau tien: ");
	vitriMAX(A,n);
	// cau k
	printf("\nVi tri co gia tri MAX: ");
	xuatVTMAX(A,n);
	//cau l
	if(ktAM(A,n)==0)
		printf("\nMang khong toan so AM!!!!");
	else if(ktAM(A,n)!=0)
		printf("\nMang toan so AM!!!!");
	
	return 0;
}

int ktAM (float a[], int n)
{
	int dem=0;
	for (int i=0 ; i<n ; i++)
	{
		if(a[i]<0)
			dem++;
	}
	if(dem==n)
		return 1;
	return 0;
}
void xuatVTMAX (float a[], int n)
{
	for (int i=0 ; i<n ; i++)
	{
		if(a[i]==timMAX(a,n))
			printf("%8d", i);
	}
}
void vitriMAX (float a[], int n)
{
	for (int i=0 ; i<n ; i++)
	{
		if(a[i]==timMAX(a,n))
		{
			printf("%8d", i);
			break;
		}
	}
}
float timMAX (float a[], int n)
{
	float max=a[0];
	for (int i=0 ; i<n-1 ; i++)
	{
		for (int j=i+1 ; j<n ; j++)
		{
			if(a[j]>a[i])
				max=a[j];
		}
	}
	return max;
}
void xuatVT0 (float a[], int n)
{
	for (int i=0 ; i<n ; i++)
	{
		if(a[i]==0)
			printf("%8d", i);
	}
}
void inSOLE (float a[], int n)
{
	for (int i=0 ; i<n ; i++)
	{
		if (i%2!=0)
			printf("%8.2f", a[i]);
	}
}
void sapTANG (float a[], int n)
{
	int t=a[0];
	for (int i=0 ; i<n-1 ; i++)
	{
		for (int j=i+1 ; j<n ; j++)
		{
			if (a[i]>a[j])
			{
				t=a[i];
				a[i]=a[j];
				a[j]=t;
			} 
		}
	}
}
int demSODUONG (float a[], int n)
{
	int dem=0;
	for (int i=0 ; i<n ; i++)
	{
		if (a[i]>0)
			dem++;
	}
	return dem;
}
float tinhTBC (float a[], int n)
{
	float s=0 , S;
	int dem=0;
	for (int i=0 ; i<n ; i++)
	{
		if (i%2!=0)
		{
			s+=a[i];
			dem++;
		}
	}
	S=s/dem;
	return S;
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
void xuatMang (float a[], int n)
{
	for (int i=0 ; i<n ; i++)
	{
		printf("%8.2f", a[i]);
	}
}
void nhapMang (float a[], int n)
{
	for (int i=0 ; i<n ; i++)
	{
		printf("\nNhap phan tu cho vi tri thu %d: ", i);
		scanf("%f", &a[i]);
	}
}
