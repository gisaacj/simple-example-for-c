#include<stdio.h>
int main(){
	int i,j;
	for(i=100;i<200;i++)
		for(j=2;j<i/2;j++){
			if(i%j==0)
				break;
			if(j==i/2-1)
			printf("%d ",i);
		}
}
