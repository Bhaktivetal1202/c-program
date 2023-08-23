#include<stdio.h>
int main()
{
	int n,s=0,d;
	printf("enter number:");
	scanf("%d",&n);
	while(n>0)
	{
		d=n%10;
		s=s+d;
		n=n/10;
	}
	printf("sum of digit=%d",s);
}
