#include <iostream>
using namespace std;
int main()
{
        cout << "In tam giac vuong nguoc\n";
        int n,i,j;
        cout << "Nhap n: ";
        cin >> n;
        cout << "Tam giac vuong nguoc co n= " << n << ":\n";
        for(i=n;i>0;i--)
        {
         	for(j=1;j<=i;j++)
         		cout <<"*";
         	cout << endl;
        }
        return 0;
}