#include<iostream>
using namespace std;

int a[25];

int main()
{
	int m, n;
	int i, j;
	cin >> m >> n;
	for(i = 0; i < m; i++)
		cin >> a[i];
	for(i = 0; i < n; i++)
	{
		for(j = 0; j < m; j++)
		{
			if(i >= n - a[j])
				cout << "#";
			else
				cout << ".";
		}
		cout << "\n";
	}
}