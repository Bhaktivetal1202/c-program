#include<stdio.h>
int main()
{
	int a[100],n,i,s=0,*ptr;
	printf("enter limit");
	scanf("%d",&n);
	printf("enter numbers");
	for(i=0;i<n;i++)
	{
	scanf("%d",&a[i]);
	}	
	ptr=a;
	for(i=0;i<n;i++)
	{
	s=s+*ptr;
	ptr++;
	}	
 printf("\n sum off all numbers=%d",s);

}
