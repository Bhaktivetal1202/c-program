#include<stdio.h>
int main()
{
	int i,n;
	printf("enter limit=");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("%d\t",i*i);
	}
}
