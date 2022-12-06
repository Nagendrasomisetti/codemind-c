#include<stdio.h>
void trap(float b1,float b2,float h)
{
    printf("%.4f",h*(b1+b2)/2);
}
int main()
{
    float b1,b2,h;
    scanf("%f%f%f",&b1,&b2,&h);
    trap(b1,b2,h);
}