#include<stdio.h>
int main(){
	int i;
	int x=2;
	int isPream=1;
	int number=0;
	
	while(number<50){
		int isPream=1;
		int i;
		for(i=2;i<x;i++){
			if(x%i==0){
				isPream=0;
				break;
			}
		}
		if(isPream==1){
			printf("%d ",x);
			number++;
		}	
		x++;	
	}	
	
	
	return 0;
}