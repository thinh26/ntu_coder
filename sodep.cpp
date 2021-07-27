#include <iostream>
using namespace std;
int main()
{
	int n;
	int divide = 0;
	cin >> n;
	int temp = n;
	while (temp!=0)
	{
		divide = divide + (temp % 10);
		temp = temp / 10 ;
	}
	if (divide % 10 == 9)
		cout << "YES";
	else
		cout << "NO";
	return 0;
}