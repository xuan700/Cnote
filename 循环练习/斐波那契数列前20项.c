#include<stdio.h>
int main(){
	int x=1,y=1,z=1,sum=0;
	while(z<=20){
		x=y;
		y=sum;
		sum=x+y;
		printf("%9d",sum);
		z++;
	}
	
	
	
	return 0;
}