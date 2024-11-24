#include<stdio.h>
int s(int x){
	int i,m;
		m=1;
	for(i=2;i<x;i++){
		if(x%i==0){
			m=0;
			break;
		}
	}
	return m;
}

int main(){
	int i,x,m1;
	scanf("%d",&x);
    m1=s(x);
	if(m1==0)
	printf("不是素数");
	else
	printf("是素数");
	
	return 0;
}