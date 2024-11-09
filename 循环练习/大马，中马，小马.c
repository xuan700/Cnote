#include<stdio.h>
int main(){
	int x,y,z,sum;
	for(x=0;x<34;x++){
		for(y=0;y<=(100-3*x)/2+1;y++){
			z=100-x-y;
			if(3*x+2*y+z/2==100&&z%2==0)
			printf("%d %d %d\n",x,y,z);
		}
	}
	
	
	
	return 0;
}