#include <iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int tongSoBia = n;
	int soVoChai = n;
	int soBiaDoiDuoc,soVoChaiDu;
	while (soVoChai>=10)
	{
	   soBiaDoiDuoc = (soVoChai/10)*3;
	   soVoChaiDu = soVoChai%10;
	   tongSoBia += soBiaDoiDuoc;
	   soVoChai = soBiaDoiDuoc + soVoChaiDu;
	}
	cout << tongSoBia;
	return 0;
}