#include<stdio.h>
int main(){
	int x;
	
	//scanf("%d",&x);
	int isPream=1;
	for(x=2;x<100;x++){
		int i;
		int isPream=1;
		for(i=2;i<x;i++){
			if(x%i==0){
				isPream=0;
				break;
			}
		}
		if(isPream==1){
			printf("%d ",x);
		}
		
	}
	
	
	return 0;
}