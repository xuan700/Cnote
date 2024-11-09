#include<stdio.h>
int main(){
	int i,j,m,y,n;
		for(i=1;i<10;i++){
		
			m=i;
			y=10-m;
			n=1;
			while(n<=9){
		
				if(n<y){
					printf("     ");
					
				}
				else{
				
				for(j=1;j<=i;j++){
				printf("%5d",i*j);
			}break;
		}
				n++;
			
		}
		printf("\n");
	}
	
	
	
	return 0;
}