#include <iostream>
using namespace std;

void phan_tich_so(int n)
{
	int i;
	for (i=2;n>1;)
	{
		if (n==i)
		{
			cout << i;
			break;
		}
		if (n % i == 0)
		{
			cout << i << "*";
			n = n / i;
		}
		else
			i++;
	}
}
int main()
{
	int n;
	cin >> n;
	phan_tich_so(n);
}