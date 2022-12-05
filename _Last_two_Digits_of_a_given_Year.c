#include<stdio.h>
void yr(int n)
{
    printf("%02d",n%100);
}
int main()
{
    int n;
    scanf("%d",&n);
    yr(n);
}