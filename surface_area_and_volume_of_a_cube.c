#include<stdio.h>
void cub(float s)
{
    printf("Surface area = %.2f and Volume = %.2f",6*s*s,s*s*s);
}
int main()
{
    float s;
    scanf("%f",&s);
    cub(s);
}