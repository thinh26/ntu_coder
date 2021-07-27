#include <iostream>
#include <cmath>
using namespace std;
int main(){
    long long int n;
    do
    {
    	cin >> n;
    }
    while (n<1 && n> pow(10,12));
    if(n < 2)
    {
        cout << "NO";
        return 0;
    }
    int count = 0;
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0)
        {
            count++;
        }
    }
    if(count == 0)
    {
        cout <<"YES";
    }
    else
    {
        cout << "NO";
    }
}