#include<stdio.h>
int main(){
	int a,b,t,i,n;
	double sum=0;
	scanf("%d",&n);
	a=2;
	b=1;
	for(i=1;i<=n;i++){
		sum+=(double)a/b;
		t=a;
		a=a+b;
		b=t;
	}
	printf("%f",sum);
	
	
	
	return 0;
}