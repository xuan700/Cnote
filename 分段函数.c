#include<stdio.h>
int main(){
	int x,y;
	scanf("%d",&x);
	if(x>-5&&x<0)
	y=x-1;
	else if(x==0)
	y=x;
	else if(x>0&&x<8)
	y=x+1;
	else y=10;
	printf("y=%d\n",y);
	return 0;
}
