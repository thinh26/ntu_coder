#include<stdio.h>
#define MAX 50
int cap;
/***** Hàm duyệt đường chéo phụ *****/
void diagonale(int a[MAX][MAX],int *i,int *j,int k,int *n)
{
        /***** Lấy vị trí điểm kế tiếp ******/
    int i_tmp=*i+k;
    int j_tmp=*j-k;
        /***************************/
        /*** nếu vị trí vẫn nằm trong ma trận thì chạy dọc thêm đường chéo
              và gán kết quả*****(vòng lặp)*/
    while ((    i_tmp>=0) && (j_tmp>=0)
            && (i_tmp<cap) && (j_tmp<cap))
    {  
        *n+=1;
        a[i_tmp][j_tmp]=*n;
        i_tmp+=k;
        j_tmp-=k;
    }
        /**** Lấy lại vị trí cuối của quá trình duyệt*******/
    *i=i_tmp-k;
    *j=j_tmp+k;
}
 
int main(void)
{
    int a[MAX][MAX];
    scanf("%d",&cap);
    int n=2;
    int k=1;  /*  k chi nhan 2 gia tri 1 hay -1 */
    int key=1*(k+1);
    int limit=cap*cap;
   
    int i=0;
    int j=1;
   
    a[0][0]=1;
   
    if(k>0)
        a[i][j]=n;
    else{
        a[j][i]=n;
        i^=j^=i^=j;
    }
   
    while (n<=limit) {
        diagonale(a,&i,&j,k,&n);
        k*=-1;
        if (key!=0) {
            if ((i+1)<cap) {
                i++;
                key=0;
            }
            else {
                j++;
                key=1;
            }
        }
        else {
            if ((j+1)<cap) {
                j++;
                key=1;
            }
            else {
                i++;
                key=0;
            }
 
        }
        n++;
        a[i][j]=n;
    }
    /*******In kết quả *************/
    for (i=0; i<cap; i++) {
        for (j=0; j<cap; j++) {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    /*****************************/
    return 0;
}