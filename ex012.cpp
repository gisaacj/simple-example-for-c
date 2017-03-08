#include<stdio.h>
int main(){
	int n,i=0;
	float p,s;
	for(n=2;n<100;n*=2){
		i++;
		s+=0.8*n;
	}
	p=s/i;
	printf("%f",p);
	return 0;
}
