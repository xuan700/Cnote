#include<stdio.h>
int main(){
	int sum,x,i,m;
	scanf("%d",&x);
	m=x;
	i=1;
	sum=0;	
	while(i<=m){
		sum+=i;
		i++;
		
		
	}
	printf("总和=%d",sum);
	
	
	return 0;
}