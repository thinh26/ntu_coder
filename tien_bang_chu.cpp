#include <iostream>
#include <cstring>
using namespace std;

char s[50] = "";

char *ba_chu_so(unsigned long long n)
{
	char kyso[10][5] = {"","mot","hai","ba","bon","nam","sau","bay","tam","chin"};
	int donvi,chuc,tram;
	s[0] = 0;
	donvi = n % 10;
	n/=10;
	chuc = n % 10;
	tram = n / 10;
	if (tram > 0)
	{
		strcat(s,kyso[tram]);
		strcat(s," tram ");
	}
	if (chuc > 0)
	{
		if (chuc == 1)
			strcat(s,"muoi ");
		else
		{
			strcat(s,kyso[chuc]);
			strcat(s," muoi");
		}
	}
	if (donvi > 0)
	{
		if (chuc == 0 && tram != 0)
			strcat(s,"le ");
		if (donvi == 1)
			strcat(s,"mot");
			else if (donvi == 5 && (chuc != 0 || tram != 0))
				strcat(s, "lam");
				else if (donvi == 5 && (chuc == 0 || tram != 0))
					strcat(s,"nam");
		else
			strcat(s,kyso[donvi]);
	}
	return s;
}
void tien_bang_chu(unsigned long long &n)
{
	unsigned long long nghin,trieu,ty,donvi;
	char chuoi[200];
	cin >> n;
	if (n==0)
		cout <<"khong";
	else
	{
		donvi = n % 1000;
		n /= 1000;
		nghin = n % 1000;
		n/= 1000;
		trieu = n % 1000;
		ty = n / 1000;
		chuoi[0] = 0;
		if (ty > 0)
			cout << ba_chu_so(ty) << " ty ";
		if (trieu > 0)
			cout << ba_chu_so(trieu) << " trieu ";
		if (nghin > 0)
			cout << ba_chu_so(nghin) << " nghin ";
		if (donvi > 0)
			cout << ba_chu_so(donvi);
	}
}

int main()
{
	unsigned long long n;
	tien_bang_chu(n);
	return 0;
}