#include<stdio.h>
#include<math.h>
int main(){
	int i,x;
	double n=1,sum;
	for(i=1;fabs(n)>1e-6;i++){
		if(i%2==0)
		x=-1;
		else
		x=1;
		n=x*(double)1/(2*i-1);
		sum+=n;
	}
	
	printf("%lf",sum);
	
	
	return 0;
}