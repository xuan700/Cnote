#include<stdio.h>
#include<windows.h>
int main(){
	int time=10;
	printf("10秒倒计时开始： \n");
	while(time>0){
		Sleep(1000);
		time--;
		printf("剩余%d秒\n",time);
	}
	
	
	
	return 0;
}