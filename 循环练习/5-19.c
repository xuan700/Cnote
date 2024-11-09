#include<stdio.h>
int main(){
	double m,n,i,sum=0;
	scanf("%lf",&m);

	for(i=1;i<=m;i++){
		n=1/i;
		sum+=n;
	}
	printf("%f",sum);
	
	return 0;
}