#include <iostream>//;
using namespace std;

int main() 
{
    int a;
    cout << "Moi ban nhap so thu nhat: ";
    cin >> a;
    int b;
    cout << "Moi ban nhap so thu hai: ";
    cin >> b;
    if (a>b) {
    cout << a << " lon hon " << b;
    }
    if (a<b) {
    cout << a << " nho hon " << b;
}
    if (a==b) {
    cout << a << " va " << b << " bang nhau";
}
    return 0;
}