#include<stdio.h>
void fun(int h)
{
    float f=2.54*h;
    printf("%.2f",f);
}
int main()
{
    int h;
    scanf("%d",&h);
    fun(h);
}