#include<stdio.h>
int main(){
	int i,f[30];
	f[0]=1,f[1]=1;
	for(i=2;i<30;i++)
		f[i]=f[i-1]+f[i-2];
	for(i=0;i<30;i++){
		printf("%10ld",f[i]);
		if((i+1)%5==0)
			printf("\n");
	}
	return 0;
}
