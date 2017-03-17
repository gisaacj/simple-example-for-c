#include<stdio.h>
int main(){
	int i;
	float h=100,s=0;
	for(i=0;i<10;i++){
		s+=h;
		h/=2;
		s+=h;
	}
	printf("%f,%f",s,h);
	return 0;
}
