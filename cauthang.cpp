#include <iostream>
using namespace std;

void staircase (int n)
{
    cout << "Cau thang cua ban:\n";
    for (int i = 0 ; i < n ; i++)
    {
        for (int j = i; j < (n-1) ; j++)
            cout << ".";
        for (int k = 0 ; k < (i+1) ; k++)
            cout << "x";
        cout << "\n";
    }
}

int main()
{
    int n;
    cout << "Moi nhap so bac cau thang: ";
    cin >> n;
    staircase(n);
    return 0;
}
    