#include<stdio.h>
void cir(float r)
{
    float ar,pri;
    ar=3.14*r*r;
    pri=2*3.14*r;
    printf("%.2f
%.2f",ar,pri);
}
int main()
{
    float r;
    scanf("%f",&r);
    cir(r);
}