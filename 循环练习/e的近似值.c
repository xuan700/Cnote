#include<stdio.h>
int main(){
	long i;
	double sum1=1,sum2=1,x=2,j;
	for(i=1;x>1e-2;i++){
		sum1=1;
		for(j=1;j<=i;j++){
			x=1/j;
			sum1*=x;
		}
		sum2+=sum1;
	}
	printf("%lf",sum2);
	
	
	return 0;
}