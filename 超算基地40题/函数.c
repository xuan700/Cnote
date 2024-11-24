#include<stdio.h>
double fd(double x)
{
	double y;
	if(x<0)
		y=x*x-2*x+1;
	else
		y=x*x*x+x+3;
	return y;
}
void main()
{
	double x,y;
	scanf("%lf",&x);
	y=fd(x);
	printf("y=%.2lf\n",y);
}