#include<stdio.h>
#include<math.h>
int len(int n)
{
    int c=0;
    while(n!=0)
    {
        int i=n%10;
        n=n/10;
        c++;
    }
    return c;
}
int main()
{
    int n;
    scanf("%d",&n);
    int c=len(n);
    int s=0,m=n;
    while(m!=0)
    {
        int i=m%10;
        m=m/10;
        s+=pow(i,c);
        c--;
    }
    if(s==n)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}