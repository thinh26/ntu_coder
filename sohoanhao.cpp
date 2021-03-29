#include<iostream>
using namespace std;
bool check(int n)
{
    int sum = 0;
    for(int i=1;i<=n/2;i++)
    {
        if(n%i==0) 
            sum+=i;
    }
    if(sum==n) return true;
    return false;
}
int main()
{
    int n;
    cout << "Nhap so can kiem tra: ";
    cin >> n;
    if(check(n))
        cout << "So " << n << " la so hoan hao";
    else
    	cout << "So " << n << " khong phai la so hoan hao";
    return 0;
}