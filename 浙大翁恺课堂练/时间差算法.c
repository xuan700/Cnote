#include<stdio.h>
int main(){
	int hour1,minute1;
	int hour2,minute2;
	
	scanf("%d %d/n",&hour1,&minute1);
	scanf("%d %d/n",&hour2,&minute2);
	
	int t1=hour1*60+minute1;
	int t2=hour2*60+minute2;
	
	int t=t2-t1;
	
	printf("shi jian cha=%d hour %d minute",t/60,t%60);
	return 0;
}