#include <stdio.h>
int main(){
	float e=0,n=1;
	int i;
	while(1/n>1e-10){
		e+=1/n;
		i++;
		n=i*n;
	}
	printf("%f",e);
}
