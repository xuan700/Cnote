#include<stdio.h>
int main(){
	int i,x,n=0,s=1;
	for(i=2;i<=100;i++){
		s=1;
		for(x=2;x<i;x++){
			
			if(i%x==0){
			s=0;
			
			break;
			}
			
		}
		if(s==1){
		
		printf("%4d",i);
		n++;
		
		if(n%5==0)
		printf("\n");
		}
	}
	
	
	
	
	return 0;
}