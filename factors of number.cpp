#include<stdio.h>
int main()
{
	int i,n;
	printf("enter number");
	scanf("%d",&n);
	printf("factors=");
	for(i=1;i<n;i++)
	{
		if(n%i==0)
		printf("%d\t",i);
	}
}
