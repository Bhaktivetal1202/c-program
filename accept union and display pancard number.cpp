#include<stdio.h>
union person
{
	char adharnumber[12];
	char pannumber[12];
};
int main()
{
	union person p1;
	printf("enter person pan number");
	scanf("%s",p1.pannumber);
	printf("pan number=%s",p1.pannumber);
}
