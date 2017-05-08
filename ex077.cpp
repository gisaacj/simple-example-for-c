#include<stdio.h>
main(){
	int i=2,n;
	float fac=1;
	scanf("%d",&n);
	if(n==0|n==1){
		printf("factorial is 1\n");
		return 0;
	}
	while(i<=n){
		fac=fac*i;
		i++;
	}
	printf("%dis%.2f",n,fac);
}
