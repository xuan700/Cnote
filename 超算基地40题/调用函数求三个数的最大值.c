#include<stdio.h>
int max(int a,int b,int c){
	int max;
	max=a;
	if(a<b){
		if(b<c)
		max=c;
		else
		max=b;
	}
	if(a>b){
		if(a>c)
		max=a;
		else
		max=c;
	}
	return max;
}
int main(){
	int a,b,c,max1;
	scanf("%d%d%d",&a,&b,&c);
	max1=max(a,b,c);
	printf("max=%d",max1);
	
	return 0;
}