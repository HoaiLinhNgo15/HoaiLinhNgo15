#include <stdio.h>
int main()
{
	int a;
	float b;
	char c;
	printf("\nNhap so nguyen: ");
	scanf("%d", &a);
	printf("\nNhap so thuc: ");
	scanf("%f", &b);
	printf("\nNhap vao mot ki tu: ");
	fflush(stdin);
	scanf("%c", &c);
	printf("Ket qua sau khi nhap: %d\t%f\t%c", a, b, c);
	return 0;
}
