#include<stdio.h>
void cr(int x,int y,int z)
{
    int a;
    a=(z-y)/x;
    printf("%d",a);
}
int main()
{
    int x,y,z,a;
    scanf("%d%d%d",&x,&y,&z);
    cr(x,y,z);
}