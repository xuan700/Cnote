#include<stdio.h>
int main(){
	int x,num=1,z;
	int a,b;
	scanf("%d",&x);
	z=x;
	do{
		z/=10;
		num=num*10;
	}while(z>0);
	//printf("%d",num);
	num=num/10;
	do{
		a=x/num;
		printf("%d ",a);
		x=x%num;
		num/=10;
		
	}while(num>0);
	return 0;
}