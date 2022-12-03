#include<stdio.h>
#include<math.h>
int main()
{
	int d,n,q,r,s=0;
	scanf("%d",&n);
	d=log10(n)+1;
	q=n;
	while(q!=10)
	{
		r=q%10;
		q=q/10;
		s=s+pow(r,d);
	}
	if(s==q)
	{
		printf("Arm");
	}
	else
	{
		printf("Not Arm");
	}
}
