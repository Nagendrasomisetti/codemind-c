#include<stdio.h>
int fun(int e,int m,int p,int c,int cm)
{
    if(e>34 and m>34 and p>34 and c>34 and cm>34)
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
    int e,m,p,c,cm,x;
    scanf("%d%d%d%d%d",&e,&m,&p,&c,&cm);
    x=fun(e,m,p,c,cm);
    if(x==1)
    {
        printf("PASSED");
    }
    else
    {
        printf("FAILED");
    }
}