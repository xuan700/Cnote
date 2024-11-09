#include<stdio.h>
int main(){
	int x,y,i,m;
	scanf("%d%d",&x,&y);
//x=2,y=3;
	i=x;
	do{
		
		
		if(i%y==0){
			if(i%x==0){
			
			m=i;
			printf("%d",m);
			break;
			}
		}
		
		
		i++;
	}while(i<=x*y);
	
	
	return 0;
}