#include<stdio.h>
int main(){
	int x,i;
	int ispream=1;
	scanf("%d",&x);
	int isPream=1;
	for(i=2;i<x;i++){
		if(x%i==0){
			isPream=0;
			break;
		}
	}
	if(isPream==0){
		printf("bushisushu");
	}
	else{
		printf("shisushu");
	}
	
	
	
	return 0;
}