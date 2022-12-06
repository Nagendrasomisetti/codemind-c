#include<stdio.h>
void fun(int x,int y,int z)
{
    printf("%d",(x*5+y*10)/z);
}
int main()
{
    int x,y,z;
    scanf("%d%d%d",&x,&y,&z);
    fun(x,y,z);
}