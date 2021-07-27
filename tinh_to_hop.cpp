#include <iostream>
using namespace std;

void nhap(int &n, int &k)
{
	cin >> n >> k;
}
int giai_thua_n(int n)
{
	int i;
	int giai_thua_n = 1;
	for(i=1;i<=n;i++)
		giai_thua_n = giai_thua_n*i;
	return giai_thua_n;
}
int giai_thua_k(int k)
{
	int j;
	int giai_thua_k = 1;
	for(j=1;j<=k;j++)
		giai_thua_k = giai_thua_k*j;
	return giai_thua_k;
}
int giai_thua_n_k(int n, int k)
{
	int nk;
	nk = n - k;
	int giai_thua_nk = 1;
	int y;
	for(y=1;y<=nk;y++)
		giai_thua_nk = giai_thua_nk*y;
	return giai_thua_nk;
}
int tinh_to_hop(int n, int k)
{
	int a;
		a = giai_thua_k(k);
	int b;
		b = giai_thua_n(n);
	int c;
		c = giai_thua_n_k(k,n);
	int to_hop;
	to_hop = b / (a*c);
	return to_hop;
}
void xuat(int n, int k)
{
	cout << tinh_to_hop(n,k);
}
int main()
{
	int k,n;
	nhap(k,n);
	xuat(k,n);
	return 0;
}