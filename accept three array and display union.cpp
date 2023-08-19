#include<stdio.h>
int main()
{
int a[100],b[100],c[100],i,j,k=0,n1,n2,flag;
printf("enter first array limit");
scanf("%d",&n1);
printf("enter second limit array");
scanf("%d",&n2);
printf("enter first array element");
for(i=0;i<n1;i++)
scanf("%d",&a[i]);
printf("enter secomd array element");
for(j=0;j<n2;j++)
scanf("%d",&b[j]);
for(i=0;i<n1;i++)
c[k++]=a[i];
for(i=0;i<n2;i++)
{
flag=0;
for(j=0;j<n1;j++)
{
if(b[i]==a[j])
{
flag=1;
break;
}
}
if(flag==0)
{
c[k++]=b[i];
}
}
printf("union of array=");
for(i=0;i<k;i++)
printf("%d\t",c[i]);
}
