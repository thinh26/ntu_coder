#include<stdio.h>
#include <math.h>
void xuat(long k)
{
    int i;
    for (i=pow(10,k-1);i<pow(10,k);i++)
    {
    if(k==0) {printf("4");return;}
    if(k==1) {printf("7");return;}
    xuat(k/2);
    printf(k%2?"7":"4");
}
}
 
int main()
{
    long k;
    scanf("%ld",&k);
    xuat(k);    
}
