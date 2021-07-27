#include <stdio.h>
int main()
{
    int i=0,j,a,b,cao,ngay;
    scanf("%d %d %d",&a,&b,&cao);
    if(a>=cao)
        ngay=1;
    else
    {
        j=a-b;
        ngay=cao/j-a;
        i=ngay*j;
        while(i<cao)
        {
            ngay++;
            i+=a;
            if(i>=cao)
                break;
            i-=b;
        }
    }
    printf("%d",ngay);
}