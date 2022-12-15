#include<stdio.h>
int main()
{
    int n,i,r,s=0;
    scanf("%d",&n);
    i=n;
    while(n>0)
    {
        r=n%10;
        s=(s*10)+r;
        n=n/10;
    }
    if(i==s)
    printf("True");
    else
    printf("False");
}