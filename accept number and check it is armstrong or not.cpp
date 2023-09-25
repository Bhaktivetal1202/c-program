#include<stdio.h>
int main()
{
	int n,s=0,d,h;
	printf("enter number");
	scanf("%d",&n);
	h=n;
	while(n>0)
	{
		d=n%10;
		s=s+(d*d*d);
		n=n/10;
	}
	if(s==h)
	printf("number is armstrong");
	else
	printf("number is not armstrong");
	
}
