#include<stdio.h>
int main(){
	int i=10,s=1;
	while(i!=0){
		s*=i;
		i--;
	}
	printf("%d",s);
	return 0;
}
