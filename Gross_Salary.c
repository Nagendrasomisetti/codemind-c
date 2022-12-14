#include<stdio.h>
void gs(float bs)
{
    float g,da,hra;
    if(bs<=10000)
    {
        da=0.8*bs;
        hra=0.2*bs;
    }
    else if(bs<=20000)
    {
        da=0.9*bs;
        hra=0.25*bs;
    }
    else
    {
        da=0.95*bs;
        hra=0.3*bs;
    }
    g=bs+da+hra;
    printf("%.2f",g);
}
int main()
{
    float bs;
    scanf("%f",&bs);
    gs(bs);
}