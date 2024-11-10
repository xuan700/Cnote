#include<stdio.h>
int main(){
	int one,two,five,x;
	int exist=1;
	scanf("%d",&x);
	//x=2;
	for(one=1;one<=x*10;one++){
		for(two=1;two<=x*10/2;two++){
			for(five=1;five<=x*10/5;five++){
				if(x*10==one+two*2+five*5){
					printf("需要%d个一角，%d个两角，%d个五角\n",one,two,five);
					exist=0;
					//break;
				}
			}
			//if(exist==0)break;
		}
		//if(exist==0)break;
	}
	
	
	
	
	
	
	return 0;
}