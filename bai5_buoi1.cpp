#include <stdio.h>
int main()
{
	int i=0, j, k=7, m=5, n;
	j=m+=2;
	printf("\nj= %d", j);
	j =k++ >7;
	printf("\nj= %d", j);
	j=i==0+k; 
	printf("\nj= %d", j);
	n=!i > k%2;
	printf("\nn %d", n);
	return 0;
}
