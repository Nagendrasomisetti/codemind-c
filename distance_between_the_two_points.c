#include<stdio.h>
#include<math.h>
void dis(int x1,int y1,int x2,int y2)
{
    float x=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
    printf("%.4f",x);
}
int main()
{
    int x1,y1,x2,y2;
    scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
    dis(x1,y1,x2,y2);
}