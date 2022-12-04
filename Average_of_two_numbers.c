#include<stdio.h>
void avg(float a,float b)
{
    float c=(a+b)/2;
    printf("Average of %.f and %.f is: %.2f",a,b,c);
}
int main()
{
    int a,b,c;
    scanf("%d%d",&a,&b);
    avg(a,b);
}