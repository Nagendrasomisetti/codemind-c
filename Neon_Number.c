#include<stdio.h>
int main()
{
    int n,m,s=0,x,i;
    scanf("%d",&n);
    m=n*n;
    for(i=1;m>0;i++)
    {
        i=m%10;
        m=m/10;
        s+=i;
    }
    if(n==s)
    printf("Neon Number");
    else printf("Not Neon Number");
}