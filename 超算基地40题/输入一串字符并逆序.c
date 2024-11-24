#include<stdio.h>
#include<string.h>
int main(){
	char arr[20],i;
	gets(arr);
	for(i=strlen(arr)-1;i>=0;i--){
		printf("%c",arr[i]);
	}
	
	
	return 0;
}