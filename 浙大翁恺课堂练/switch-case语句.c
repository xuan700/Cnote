#include<stdio.h>
int main(){
	int type;
	scanf("%d",&type);
	switch(type){                       //只能表达整数型
		case 1:
			printf("hello!");
			break;
		case 2:
			printf("good morning!");
			break;
		case 3:
			printf("good evening!");
			break;
		case 4:
			printf("good bye");
			break;
		default:
			printf("what?");
		
		
	}
	
	return 0;
}