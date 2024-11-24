#include<stdio.h>
int main(){
	int sum=0,i,m;
	scanf("%d",&m);
	for(i=1;i<=m;i++){
		sum+=i;
	}
	printf("%d",sum);
	return 0;
}
