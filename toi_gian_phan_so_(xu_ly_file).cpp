#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

struct phanso
{
	int tuso;
	int mauso;
};
void ToiGian(phanso &a)
{
	int x = a.tuso;
	int y = a.mauso;
	while (x != y)
	{
		if (x > y)
			x = x - y;
		else
			y = y - x;
	}
	a.tuso = a.tuso / x;
	a.mauso = a.mauso / x;
}
int main()
{
	ifstream inp("input.txt");
	ofstream out("output.txt");
	int n;
	int i;
	phanso a[10];
	inp >> n;
	for (i = 0; i < n; i++)
	{
		inp >> a[i].tuso >> a[i].mauso;
	}
	for (i = 0; i < n; i++)
	{
		ToiGian(a[i]);
	}
	for (i = 0; i < n; i++)
	{
		out << a[i].tuso << "/" << a[i].mauso << "\n";
	}

	inp.close();
	out.close();
}
