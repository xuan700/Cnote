#include<stdio.h>
int main(){
	int hour1,minute1;
	int hour2,minute2;
	
	scanf("%d %d",&hour1,&minute1);
	scanf("%d %d",&hour2,&minute2);
	
	int h=hour2-hour1;
	int m=minute2-minute1;
	if(m<0){
		m=m+60;
		h--;
		
	}
	
	printf("sji jian cha:%d hour %d minute\n",h,m);
	
	
	return 0;
}