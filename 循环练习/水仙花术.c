#include<stdio.h>
int main(){
	int x,i,sum=0,z;
	for(i=153;i<1000;i++){
		sum=0;
			z=i;
		do{
	
		x=z%10;
		z=z/10;
		x=x*x*x;
		sum+=x;
	}while(z>0);
	if(i==sum){
	
	printf("%5d",i);}
	}
	
	
	
	
	
	
	return 0;
}