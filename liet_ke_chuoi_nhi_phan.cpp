#include <stdio.h>
#include <math.h>


void gen(int a[], int n)
{
	++a[n-1];
	int i;
	for(i = (n-1);i > 0; --i)
	{
		if (a[i] > 1)
		{
			++a[i-1];
			a[i] -= 2;
		}
	}
}

void xuat(int a[], int n)
{
	int i;
	for (i=0;i<n;i++)
		printf("%d",a[i]);
	printf("\n");
}
int main()
{
	int n;
	scanf("%d",&n);
	int *a = new int[n];
	int i;
	for(i=0;i<n;i++)
		a[i] = 0;
	for(i=0;i < pow(2,n);i++)
	{
		xuat(a,n);
		gen(a,n);
	}
}