#include<stdio.h>
int main()
{
  float r;
  void circle(float r);
  printf("enter radius");
  scanf("%f",&r);
  circle(r);
}
void circle(float r)
{
  float a=3.14*r*r;
  float p=2*3.14*r;
  printf("\n area of circle=%f",a);
  printf("\n perimeter of circle=%f",p);

}
