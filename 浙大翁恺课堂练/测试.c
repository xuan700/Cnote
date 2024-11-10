#include<stdio.h>
int main(){
	int a,b,c,d,i,j,k;
	a=10;b=c=d=5;i=j=k=0;
	for(;a>b;++b)
	i++;
	while(a>++c)
	j++;
	do
	k++;
	while(a>d++);
	printf("i=%d,j=%d,k=%d",i,j,k);
	
	return 0;
}