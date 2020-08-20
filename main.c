#include <stdio.h>
int main(void)
{
	float area,r,h;
  printf("Enter Radius : ");
  scanf("%f",&r);
  printf("Enter High : ");
	scanf("%f",&h);
  area = (2*3.14*r)*h+2*(3.14*r*r);
  printf("Result Area  %f",area);
  return 0;
}