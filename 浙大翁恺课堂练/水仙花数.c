#include<stdio.h>
int main(){
	int n,x,y=1,i;             
	scanf("%d",&n);
	for(x=1;x<n;x++){
		y*=10;
	}
	int d,t,sum=0,cen,m;
	for(i=y;i<y*10;i++){
		t=i;
			while(t>0){
			
			d=t%10;
			t=t/10;
			m=d;
			for(cen=1;cen<n;cen++){
				m*=d;
			}
			sum+=m;
		}
		if(i==sum){
			printf("%d",i);
		}	
	}
	
	
	return 0;
}