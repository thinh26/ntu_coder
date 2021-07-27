#include <iostream>
#include <cmath>
using namespace std;
void nhap_so_con_va_so_chan (int &n, int &m)
{
	cout << "Nhap tong so con: ";
	cin >> n;
	cout << "Nhap tong so chan: ";
	cin >> m;
}
int tinh_so_ga_va_cho (int n, int m)
{
	int g,c;
	int kiem_tra_dap_an;
	g = ((4*n)-m)/2;
	c = n - g;
	kiem_tra_dap_an = (g*2) + (c*4);
	if (g >=0 && c >= 0 && kiem_tra_dap_an == m)
		cout << "Co " << g << " con ga va " << c << " con cho";
	else
		cout << "Khong co dap an !";
	return 0;
}
int main()
{
	int n,m;
	nhap_so_con_va_so_chan(n,m);
	tinh_so_ga_va_cho(n,m);
	return 0;
}
    