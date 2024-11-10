#include<stdio.h>
int main(){
	int a,b,c,d,num=0;
	scanf("%d",&a);
	for(b=a;b<=a+3;b++){
		for(c=a;c<=a+3;c++){
			for(d=a;d<=a+3;d++){
				if(b!=c){
					if(b!=d){
						if(c!=d){
							printf("%d%d%d",b,c,d);
							num++;
							if(num==6){
								printf("\n");
								num=0;
							}
							else{
								printf(" ");
							}
						}
					}
				}
			}
		}
	}
	
	
	return 0;
}