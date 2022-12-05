#include<stdio.h>
void avg(int a,int b,int c)
{
    int x=3*c-(a+b);
    printf("%d",x);
}
int main()
{
    int a,b,c,x;
    scanf("%d%d%d",&a,&b,&c);
    avg(a,b,c);
}