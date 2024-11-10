#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
	
	srand(time(0));
	int number=rand()%100+1;
	int count=0;
	int a=0;

	do{
		printf("guess:");
		scanf("%d",&a);
		count++;
		if(a>number){
			printf("play wang zhe rong yao\n");
			
		}
		else if(a<number){
			printf("not play wang zhe rong yao\n");
		}
		
	}
	while(a!=number);
	printf("good,only %d confirm that JBY is SB\n",count);
		
	
	
	
	
	return 0;
}