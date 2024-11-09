#include<stdio.h>
int main(){
	int n,i,x,m;

	scanf("%d",&n);
	for(i=1;i<=n;i++){
		for(m=1;m<=n+i-1;m++){
		
		if(m<=n-i){
		
		printf(" ");}
		else{
		
		printf("*");}
	
		}
		printf("\n");
	}
	
	
	
	
	return 0;
}