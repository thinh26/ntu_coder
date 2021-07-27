 //Chuong trinh sap xep thi sinh giam dan theo diem
 #include <stdio.h>
 #include <stdlib.h>
 typedef struct 
 {
 	char hoten[25];
 	float td;
 } ThiSinh;
 //Khai bao prototype
 void nhapTS(ThiSinh &ts);
 void xuatTS(ThiSinh ts);
 void nhapDSTS(ThiSinh ts[], int &n);
 void xuatDSTS(ThiSinh ts[], int n);
 void sapxep(ThiSinh ts[], int n);
 //Ham main
 int main()
 {
 	ThiSinh ts, dsts[20];
 	int n;
 	nhapDSTS(dsts,n);
 	printf("\nDanh sach thi sinh truoc khi xep:\n");
 	xuatDSTS(dsts,n);
 	sapxep(dsts,n);
 	printf("\nDanh sach thi sinh sau khi xep:\n");
 	xuatDSTS(dsts,n);
 	return 0;
 }
 //Dinh nghia cac ham
 void nhapTS(ThiSinh &ts)
 {
 	float diem;
 	fflush(stdin);
 	printf("\nNhap ho va ten: "); fgets(ts.hoten,sizeof(ts.hoten),stdin);
 	printf("Nhap diem: "); scanf("%f", &diem);
 	ts.td = diem;
 }
 void xuatTS(ThiSinh ts)
 {
 	printf("%s | %5.1f", ts.hoten, ts.td);
 }
 void nhapDSTS(ThiSinh ts[], int &n)
 {
 	printf("So thi sinh: ");
 	scanf("%d",&n);
 	for(int i=0;i<n;i++)
 	{
 		printf("\nNhap thong tin thi sinh thu %d:",i+1);
 		nhapTS(ts[i]);
 	}
 }
 void xuatDSTS(ThiSinh ts[], int n)
 {
 	char s[] = "Ho va ten";
 	printf("\n%s | Diem \n",s);
 	for (int i =0 ;i<n;i++)
 	{
 		xuatTS(ts[i]);
 		printf("\n");
 	}
 }
 void sapxep(ThiSinh ts[], int n)
 {
 	int i,j;
 	ThiSinh tg;
 	for(i=0;i<(n-1);i++)
 		for(j=(i+1);j<n;j++)
 			if(ts[i].td < ts[j].td)
 			{
 				tg = ts[i];
 				ts[i] = ts[j];
 				ts[j] = tg;
 			}
 }