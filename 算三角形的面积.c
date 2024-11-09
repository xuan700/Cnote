#include<stdio.h>
#include<math.h>
double area(double a,double b,double c){
	double s,sarea=0;
	if(a+b>c&&a+c>b&&b+c>a){
		s=(a+b+c)/2;
		sarea=sqrt(s*(s-a)*(s-b)*(s-c));
	}
	
	return sarea;
	
}
int main(){
	double a,b,c,s,sarea;
	scanf("%lf %lf %lf",&a,&b,&c);
//a=3,b=4;c=5;
	sarea=area(a,b,c);
	if(sarea==0)
	printf("不能构成三角形");
	else 
	printf("%lf",sarea);
	return 0;
}