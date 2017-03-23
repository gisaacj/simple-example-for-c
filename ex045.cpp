#include<stdio.h>
int main(){
	int i,n,s,a,b;
	scanf("%d",&n);
	for(i=0;i<n+1;i++){
		s=i*i;
		a=s;
		b=i;
		do{
			if(a%10==b%10){
				a/=10;
				b/=10;
			}
			else
				break;
			if(b==0)
				printf("%d ",i);
		}while(b!=0);
	}
	return 0;
}
