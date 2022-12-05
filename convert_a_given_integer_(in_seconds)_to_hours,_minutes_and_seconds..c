#include<stdio.h>
void tim(int ts)
{
    int h,m,s,hr;
    hr=ts%3600;
    h=ts/3600;
    m=hr/60;
    s=hr%60;
    printf("H:M:S-%d:%d:%d",h,m,s);
}
int main()
{
    int ts;
    scanf("%d",&ts);
    tim(ts);
}