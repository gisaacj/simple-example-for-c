#include<stdio.h>
int ss(int i){
	int j;
	if(i<2)
		return 0;
	if(i==2)
		return 1;
	if(i>2)
	for(j=2;j<i;j++){
		if(i%j==0)
			break;
		else if(i!=j+1)
			continue;
		else
			return 1;
	}
}
int main(){
	int i,j;
	for(i=2;i<101;i+=2){
		for(j=2;j<i/2;j++)
		if(ss(j)&&ss(i-j))
		printf("%d=%d+%d ",i,j,i-j);
		printf("\n");
	}
	
}
