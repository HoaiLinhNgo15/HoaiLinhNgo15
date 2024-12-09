#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct MON_HOC
{
	char mamon[15];
	float diem;
};
struct NGAY_THANG 
{
	int ng, thg, nam;
};
typedef struct SINH_VIEN 
{
	char mssv[10], hoten[30], gioitinh[5], diachi[50];
	MON_HOC mon[10];
	NGAY_THANG ngthang;
	int somon;
}SV;

void nhapTTSV (SV *a);
void nhapNgsinh (NGAY_THANG *a);
void nhapMA (MON_HOC *a);
void xuatMA (MON_HOC a);
void nhapMON (MON_HOC a[], int n);
void xuatNgsinh (NGAY_THANG a);
void xuatMON (MON_HOC a[], int n);
void xuatTTSV (SV a);
void nhapSV( SV a[], int n);
void xuatSV (SV a[], int n);
int tontaiSV(SV a[], int n, char mssv[]);
void timSV (SV a[], int n, char t[]); 
int tachThang (NGAY_THANG a);
void timThang (SV a[], int n);
void timGT (SV a[], int n, char t[]);
void timDC (SV a[], int n, char t[]);

int main()
{
	SV a, *sv;
	int n;
	char t[10], c[30], d[5], e[50];
	sv=(SV*)malloc(sizeof(SV)*n);
	
	printf("\nNhap TTSV: ");
	nhapTTSV(&a);
	
	//xuat thong tin
	xuatTTSV(a);	
	
	//Nhap/xuat n SV
	printf("\nNhap vao so sinh vien: ");
	scanf("%d", &n);
	nhapSV(sv, n);
	xuatSV(sv, n);
	//tim sinh vien theo mssv
	printf("\nNhap MSSV can tim: ");
	fflush(stdin);
	gets(t);
	if(tontaiSV(sv,n,t)!=0)
		printf("\nMSSV %s CO ton tai.", t);
	if(tontaiSV(sv,n,t)==0)
		printf("\nMSSV %s KHONG ton tai.", t);
		
	printf("\nNhap Ho Ten can tim: ");
	fflush(stdin);
	gets(c);
	printf("\nCac SINH VIEN co ten %s duoc tim thay trong danh sach: ", c);
	timSV(sv, n, c);	
	
	printf("\nDSSV sinh thang 8: ");
	timThang(sv, n);	
	
	printf("\nNhap vao gioi tinh can xuat DS: ");
	fflush(stdin);
	gets(d);
	printf("\nDSSV theo gioi tinh %s: ", d);
	timGT(sv, n, d);	
	
	printf("\nNhap vao dia chi can xuat DS: ");
	fflush(stdin);
	gets(e);
	printf("\nDSSV theo dia chi %s: ", e);
	timDC(sv, n, e);
	
	return 0;
}

void timDC (SV a[], int n, char t[])
{
	for (int i=0 ; i<n ; i++)
	{
		char *res = strstr(a[i].diachi , t);
		if (res != NULL)
		{
			xuatTTSV(a[i]);
			printf("\n");
		}
	}
}
void timGT (SV a[], int n, char t[])
{
	for (int i=0 ; i<n ; i++)
	{
		char *res = strstr(a[i].gioitinh , t);
		if (res != NULL)
		{
			xuatTTSV(a[i]);
			printf("\n");
		}
	}
}
void timThang (SV a[], int n)
{
	for (int i=0 ; i<n ; i++)
	{
		if(tachThang(a[i].ngthang)==8)
		{
			xuatTTSV(a[i]);
			printf("\n");
		}
		
	}
}
int tachThang (NGAY_THANG a)
{
	return a.thg;
}
void timSV (SV a[], int n, char t[])
{
	for (int i=0 ; i<n ; i++)
	{
		if(strcmp(a[i].hoten, t)==0)
		{
			xuatTTSV(a[i]);
			printf("\n");
		}
		
	}
}
int tontaiSV(SV a[], int n, char mssv[])
{
	int dem=0;
	for(int i=0; i<n ; i++)
	{
		if(strcmp(a[i].mssv, mssv)==0)
			dem++;
	}
	if(dem != 0)
		return 1;
	return 0;
}
void xuatSV (SV a[], int n)
{
	for (int i=0 ; i<n ; i++)
	{
		printf("\nThong Tin cua SV thu %d: ", i+1);
		xuatTTSV(a[i]);
		printf("\n");
	}
}
void nhapSV( SV a[], int n)
{
	for (int i=0 ; i<n ; i++)
	{
		printf("\nNhap TT cua SV thu %d: ", i+1);
		nhapTTSV(&a[i]);
	}
}
void xuatTTSV (SV a)
{
	printf("\nMSSV: %s\nHo Ten: %s", a.mssv, a.hoten);
	printf("\nNgay sinh: ");
	xuatNgsinh(a.ngthang);
	printf("\nGioi Tinh: %s", a.gioitinh);
	printf("\nDia Chi: %s", a.diachi);
	printf("\nDiem so cac mon da hoc: ");
	xuatMON(a.mon,a.somon);
}
void xuatMA (MON_HOC a)
{
	printf("Ma MH: %s\tDiem: %.2f", a.mamon, a.diem);
}
void xuatMON (MON_HOC a[], int n)
{
	for (int i=0 ; i<n ; i++)
	{
		printf("\nMon thu %d: ", i+1);
		xuatMA(a[i]);
	}
}
void xuatNgsinh (NGAY_THANG a)
{
	printf("%d/%d/%d", a.ng, a.thg, a.nam);
}
void nhapMA (MON_HOC *a)
{
	printf("\nNhap Ma Mon: ");
	fflush(stdin);
	gets(a->mamon);
	
	printf("\nNhap diem: ");
	scanf("%f", &a->diem);
}
void nhapMON (MON_HOC a[], int n)
{
	for (int i=0 ; i<n ; i++)
	{
		printf("\nNhap thong tin mon thu %d: ", i+1);
		nhapMA(&a[i]);
	}
}
void nhapNgsinh (NGAY_THANG *a)
{
	printf("\nNhap ngay sinh: ");
	scanf("%d", &a->ng);
	printf("\nNhap thang sinh: ");
	scanf("%d", &a->thg);
	printf("\nNhap nam sinh: ");
	scanf("%d", &a->nam);
}
void nhapTTSV (SV *a)
{
	printf("\nNhap vao MSSV: ");
	fflush(stdin);
	gets(a->mssv);
	
	printf("\nNhap vao ho va ten: ");
	fflush(stdin);
	gets(a->hoten);
	
	printf("\nNhap vao ngay, thang, nam sinh: ");
	nhapNgsinh(&a->ngthang);
	
	printf("\nNhap vao gioi tinh: ");
	fflush(stdin);
	gets(a->gioitinh);
	
	printf("\nNhap vao dia chi: ");
	fflush(stdin);
	gets(a->diachi);
	
	do
	{
		printf("\nNhap vao so mon hoc: ");
		scanf("%d", &a->somon);
	}while (a->somon>10||a->somon<=0);
	printf("\nNhap Ma Mon va Diem cua tung mon: ");
	nhapMON(a->mon, a->somon);
}
