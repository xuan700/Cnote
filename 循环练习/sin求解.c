#include<stdio.h>
#include<math.h>
int main(){
	double x,i,sum=0,n=1;
	scanf("%lf",&x);
	i=x;
	
	while(fabs(i)>=1e-7){
			sum+=i;
			n=n+2;
		i=i*(-x*x)/(n*(n-1));
	
	
	}
	printf("%lf",sum);
	
	
	
	return 0;
}