#include<stdio.h>
int tar(int p1,int p2,int p3,int p4)
{
    if(p1>=10 and p2>=10 and p3>=10 and p4>=10)
    {
        return 1;
    }
    else
    {
        return 2;
    }
}
int main()
{
    int x,p1,p2,p3,p4;
    scanf("%d%d%d%d",&p1,&p2,&p3,&p4);
    x=tar(p1,p2,p3,p4);
    if(x==1)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
}