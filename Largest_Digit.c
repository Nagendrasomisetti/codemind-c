#include<stdio.h>
int main()
{
    int n,m=0;
    scanf("%d",&n);
    while(n!=0)
    {
        int i=n%10;
        if(m<i)
        {
        m=i;
        }
        n=n/10;
        }
        printf("%d",m);
}