#include<stdio.h>
int main(){
	int x,y,i,j,m,n;
	scanf("%d %d",&x,&y);
	for(i=1;i<=x;i++){
		if(x%i==0){
			if(y%i==0){
				m=i;
			}
		}
	}
	for(j=x;j<=x*y;j++){
		if(j%x==0){
			if(j%y==0){
				n=j;
				break;
			}
		}
	}
	printf("%d,%d",m,n);
	
	return 0;
}