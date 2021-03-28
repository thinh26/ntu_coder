#include <iostream>
#define MAX 300
using namespace std;
int day_Fibonacci (int a[], int &n)
{
	cout << "Nhap so luong: ";
	cin >> n;
	unsigned long long i;
	for (i=0;i<n;i++)
	{
		a[0] = a[1] =1;
		a[i] = a[i-1] + a[i-2];
	}
	return 0;
}
void inMang(int a[],int n)
{
	cout << "Day fibonacci cua ban la: ";
	unsigned long long i;
	for (i=0;i<n;i++)
	{
		cout << a[i] << " ";
	}
}
int main()
{
	int a[MAX];
	int n;
	day_Fibonacci(a,n);
	inMang(a,n);
	return 0;
}