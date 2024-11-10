#include<stdio.h>
int main(){
	int x,i,y;
	scanf("%d",&x);
	int isPream[x];
	for(i=0;i<x;i++){
		isPream[i]=0;
}
	for(i=2;i<x;i++){
		if(isPream[i]==0){
			for(y=2;i*y<=x;y++){
				
				isPream[i*y]=1;
			}
			
		}
	}
	for(i=2;i<x;i++){
		if(isPream[i]==0){
		
		printf("%d\t",i);
		}
		
	}
	
	
	
	return 0;
}