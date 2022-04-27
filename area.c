#include<stdio.h>
int main()
{
	int rad;
	float PI=3.14,area,cir;
	printf("enter the radius of the of circle: ");
	scanf("%d",&rad);
	area=PI * rad * rad;
	printf("the area of circle is:%0.2f\n",area);
	cir=2*PI*rad;
	printf("the circumference of a circle is :%0.2f\n",cir);
	return 0;
}
