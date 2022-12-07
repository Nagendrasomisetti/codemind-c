#include<stdio.h>
void sum(int n)
{
    printf("%d",n*(n+1)/2);
}
int main()
{
    int n;
    scanf("%d",&n);
    sum(n);
}