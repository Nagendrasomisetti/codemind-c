#include<stdio.h>
int alpha (char ch)
{
    if(ch>='A'&&ch<='Z')
    return 1;
    else if(ch>='a'&&ch<='z')
    return 2;
    else
    return 3;
}
int main()
{
    char ch;
    int x;
    scanf("%c",&ch);
    x=alpha(ch);
    if(x==1) printf("uppercase alphabet");
    else if(x==2) printf("lowercase alphabet");
    else printf("not an alphabet");
}