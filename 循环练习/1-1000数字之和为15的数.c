#include<stdio.h>
int main(){
	int i,j,x,s,sum=0;
	for(i=1;i<=1000;i++){
	s=i;
	sum=0;
		do{
		
			x=s%10;
			s/=10;
			sum+=x;
		}while(s>0);
		
	
	
	if(sum==15)
		printf("%5d",i);
		
	}
	
	
}