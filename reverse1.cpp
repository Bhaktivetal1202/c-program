#include<stdio.h>
int main()
{
	int i,n;
	printf("enter the number");
	scanf("%d",&n);
	printf("Reverse number=");
	while(n>0)
	{
		printf("%d",n%10);
		n=n/10;
	}
}
