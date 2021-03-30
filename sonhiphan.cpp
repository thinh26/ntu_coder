#include <iostream>
using namespace std;
int decimal_to_binary(long long int n)
{
  	int i,a[30];
 	for (i=0;n>0;i++)
 	{
 		a[i] = n%2;
 		n = n/2;
 	}
 	for (i=i-1;i>=0;i--)
 	{
 		cout << a[i];
 	}
}
int main()
{
 	long long int n;
 	cout << "Nhap so can chuyen doi: ";
 	cin >> n;
 	if (n==0)
 		cout << "Nhi phan cua so 0 la: 0";
 	else
 		cout << "Nhi phan cua so " << n << " la: ";
 		decimal_to_binary(n);
 	return 0;
}
    