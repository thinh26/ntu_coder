#include<iostream>
using namespace std;
int main()
{

    int num, temp, count = 0;
    cout << "Nhap so: ";
    cin >> num;
    temp = num;
    while (temp != 0)
    {
        if (temp % 10 == 5)
            count++;
        temp = temp / 10;
    }
    cout << "So " << num << " co " << count << " chu so 5";
}