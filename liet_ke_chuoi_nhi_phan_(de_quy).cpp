#include <iostream>
using namespace std;

int a[100],n;
void Print()
{
	int i;
	cout << endl;
	for(i=1;i<=n;i++)
		cout << a[i];
}
void DeQuy(int i)
{
	if (i==(n+1))
	{
		Print();
		return;
	}
	a[i] = 0; DeQuy(i+1);
	a[i] = 1; DeQuy(i+1);
}
int main()
{
	cin >> n;
	DeQuy(1);
}