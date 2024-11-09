#include<stdio.h>
int main(){
	int a,b,t,i,n;
	double sum=0.0;
	printf("请输入n:");
	scanf("%d",&n);
	a=2,b=1;
	for(i=1;i<=n;i++){
		sum=sum+(double)a/b;
		t=a;a=a+b;b=t;
	}
	printf("sum=%f\n",sum);
	
	
	return 0;
}