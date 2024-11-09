#include<stdio.h>
int main(){
	int i,j,n;
	double sum=1,x=1,m=1;
	scanf("%d",&n);
	for(i=2;i<=n+1;i++){
		for(j=1;j<=i-1;j++){
			m*=j;
		}
		x=1/m;
		sum+=x;
	}
	printf("%lf",sum);
	
	return 0;
}