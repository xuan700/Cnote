#include<stdio.h>
int main(){
	int i,j,sum,m,x,n;
	for(i=100;i<1000;i++){
		m=i;
		sum=0;
		do{
			x=m%10;
			m=m/10;
			n=1;
			for(j=1;j<=x;j++){
				n=n*j;
			}
			sum=sum+n;
		}while(m>0);
		if(i==sum)
		printf("%5d",i);
	}
	
	
	
	
	return 0;
}