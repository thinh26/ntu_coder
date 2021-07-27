#include <iostream>
using namespace std;
int banh_ran()
{
	int n, k, res;
	cin >> n >> k;
	if (n <= k){
		cout << "10";
		return 0;
	}
	n *= 2;
	res = n / k;
	if (n % k != 0){ res++; }
	cout << res * 5;
	return 0;
}
int main()
{
	banh_ran();
}