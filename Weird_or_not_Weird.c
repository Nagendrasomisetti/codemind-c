#include<stdio.h>
int fun(int n)
{
    if(n%2!=0) 
    {
        return 1;
    }
    else
    {
     if(n/2==0 && 2<n<5)
     {
         return 2;
     }
    else if(n/2==0 && 6<n<20)
    {
        return 3;
    }
    else
    {
         return 4;
    }
    }
}
int main()
{
    int n,x;
    scanf("%d",&n);
    x=fun(n);
    if(x==1) printf("weird");
    else 
    if(x==2) printf("not weird");
    else if(x==3) printf("weird");
    else printf("not weird");
}