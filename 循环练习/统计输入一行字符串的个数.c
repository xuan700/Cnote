#include<stdio.h>
int main(){
	int i=0;
	printf("input a  string:  ");
	while(getchar()!='\n'){
		i++;
	}
	printf("%d\n",i);
	
	return 0;
}