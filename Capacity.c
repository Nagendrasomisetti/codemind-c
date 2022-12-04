#include<stdio.h>
void cap(int s,int t,int b)
{
    int c=(2*s*t*b*512)/1024;
    printf("%dkb",c);
}
int main()
{
    int s,t,b,c;
    scanf("%d%d%d",&s,&t,&b);
    cap(s,t,b);
}