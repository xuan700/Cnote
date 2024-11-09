#include<stdio.h>
int main(){
	int x,max=0;
	scanf("%d",&x);
	while(x>=0){
		if(x>max)
		max=x;
		scanf("%d",&x);
	}
	printf("max=%d",max);
	
	return 0;
}