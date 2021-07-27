#include <iostream>
#include <algorithm>
using namespace std;

long long a[1000001];

int main(){
	long long n,x=1,kq=0;
	cin>>n;
	for (int i=1;i<=n;i++) 
	   cin>>a[i];
	sort(a+1,a+1+n);
	for (int i=1;i<=n;i++){
		if (a[i]==a[i+1]) x++; 
		else 
		{
			kq=kq+x*(x-1)/2;
			x=1;
		}
	}
	cout<<kq;
	return 0;
}
