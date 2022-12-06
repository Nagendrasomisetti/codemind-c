#include<stdio.h>
void tri(float b,float h)
{
    printf("%.f",b*h/2);
}
int main()
{
    float b,h;
    scanf("%f%f",&b,&h);
    tri(b,h);
}