#include<stdio.h>
int main(){
	int i,j,m,n;
	scanf("%d",&n);
	for(i=1;i<=(n+1)/2;i++){
		for(j=1;j<=(n+1)/2-i;j++)
		printf(" ");
		for(m=1;m<=2*i-1;m++)
		printf("*");
		printf("\n");
	}
	for(i=(n+3)/2;i<=n;i++){
		for(j=1;j<=i-(int)((float)(n+1)/2+0.5);j++)
		printf(" ");
		for(m=1;m<=2*n-2*i+1;m++)
		printf("*");
		printf("\n");
	}
	
	return 0;
}