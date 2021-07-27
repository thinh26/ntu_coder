#include <iostream>
#include  <cmath>
using namespace std;
int main()
{
	int a,b;
	int c,d;
	int e,f;
	int g,h;
	cin>>a>>b>>c>>d>>e>>f>>g>>h;
	
	int x1 = c -a , y1 = d-b;
	int x2 = g-e , y2 = h-f;
	int x3 = g-a, y3 = h-b;
	int x4 = e-c, y4 = f-d;
	
	int d1 = sqrt(pow(x1,2)+ pow(y1,2));
	int d2 = sqrt(pow(x2,2)+ pow(y2,2));
	int d3 = sqrt(pow(x3,2)+ pow(y3,2));
	int d4 = sqrt(pow(x4,2)+ pow(y4,2));
	
	if (d1==d2 && d3 == d4)
		cout << "YES";
	else
		cout << "NO";
	return 0;
}
    