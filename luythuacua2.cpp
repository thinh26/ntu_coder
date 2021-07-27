#include<stdio.h>
void nhapMang(int a[],int &n)
{
	int i;
	printf("Nhap n: ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Nhap phan tu a[%d]: ",i);
		scanf("%d",&a[i]);
	}
}
bool LuyThuaCua2(int a[], int n)
{
    int i;
    for (i=0;i<n;i++)
    {
    	if ((a[i] != 0) && ((a[i] & (a[i] - 1)) == 0))
    		printf("1\n");
    		else
    			printf("0\n");
    }
}
int main()
{
	int a[100],n;
	nhapMang(a,n);
	LuyThuaCua2(a,n);
}   