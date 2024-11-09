#include<stdio.h>
int main(){
	int n,i,j,s=0,sum=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		s=0;
		for(j=1;j<=i;j++){
			s+=j;
		}
		sum+=s;
	}
	printf("%d",sum);
	
	return 0;
}