#include<stdio.h>
int main()
{
	int *a[100],n,i;
	printf("enter limit");
	scanf("%d",&n);
	printf("enter numbers");
	for(i=0;i<n;i++)
	{
		scanf("%d",a+i);
	}
	printf("array numbers in reverse order=");
	for(i=n-1;i>=0;i--)
	{
		printf("%d\t",*(a+i));
	}
}
