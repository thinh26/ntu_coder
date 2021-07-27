#include <iostream>
using namespace std;
int main()
{
	int a,b;
	cin >> a >> b;
	int i;
	int tempI = 0;
	for (i=1;i<a;i++)
	{
		if (a % i == 0)
			tempI = tempI + i;
	}
	int j;
	int tempJ = 0;
	for(j=1;j<b;j++)
	{
		if (b % j == 0)
			tempJ = tempJ + j;
	}
	if(tempJ == a && tempI == b)
		cout << "YES";
	else
		cout << "NO";
	return 0;
}