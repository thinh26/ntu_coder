#include<iostream>
using namespace std;

int main ()
{
    int a,b,c,d;
    cin >> a >> b >> c >> d;
    int danhDau[8][8];
    for(int i = 0;i<8;i++)
    {
        for(int j = 0;j<8;j++)
        {
            if(i==a-1 || j==b-1  || i+j == c+d-2 || i-j == c-d) danhDau[i][j] = 1;
            else danhDau[i][j] = 0;
        }
    }
    int dem = 0;
    for(int i = 0;i<8;i++)
    {
       for(int j =0;j<8;j++)
       {
           if(danhDau[i][j]==1) dem++;
       }
    }
    cout << dem;
}
