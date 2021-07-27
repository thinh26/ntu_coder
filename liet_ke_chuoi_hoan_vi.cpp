#include <iostream>
using namespace std;

int a[100],n,b[100];
void Print()
{
	int i;
	for(i=1;i<=n;i++)
		cout << a[i];
    cout << endl;
}
void DeQuy(int i)
{
	if (i==(n+1))
	{
		Print();
		return;
	}
	int j;
	for(j=1;j<=n;j++)
		if(b[j] == 0)
		{
			b[j]=1;
			a[i]=j; DeQuy(i+1);
			b[j]=0;
		}
}
void so_to_hop(int n)
{
    int x;
    int tong = 1;
    for(x=1;x<=n;x++)
        tong = tong * x;
    cout << tong << "\n";
}
int main()
{
	cin >> n;
    so_to_hop(n);
	DeQuy(1);
	return 0;
}