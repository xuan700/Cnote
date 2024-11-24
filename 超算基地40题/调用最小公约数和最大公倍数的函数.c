#include<stdio.h>
//m为最大公约数，n为最小公倍数
int q(int a,int b){
	int m,i;m=a;
	for(i=1;i<=a;i++){
		if(a%i==0){
			if(b%i==0){
				m=i;
			}
		}
	}
	return m;
}

int w(int a,int b){
	int n,i;
	for(i=a;i<=a*b;i++){
		if(i%a==0){
			if(i%b==0){
				n=i;
				break;
			}
		}
	}
	return n;
}
int main(){
	int a,b,m,n;
	scanf("%d%d",&a,&b);
	m=q(a,b);
	n=w(a,b);
	printf("最大公约数=%d,最小公倍数=%d",m,n);
	return 0;
}





