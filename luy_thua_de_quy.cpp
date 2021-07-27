#include <stdio.h>
#include <math.h>

double luth(double x, int n)
{
	if (n==0)
		return 1;
	else
		return x*luth(x,n-1);
	//hoac la: pow(x,n);
}

int main()
{
	int n; int x;
	scanf("%d%d",&x,&n);
	int kq;
	kq = luth(x,n);
	printf("%d",kq);
}