#include<stdio.h>
#include<math.h>
int main(){
	long i,n,n1,n2,n3,n4,count=0;
	for(i=100000;i<1000000;i++){
		n=(long)sqrt(i);
		if(i==n*n){
			n1=i/1000;
			n2=i%1000;
			n3=(long)sqrt(n1);
			n4=(long)sqrt(n2);
			if(n1==n3*n3&&n2==n4*n4){
				count++;
				printf("%ld ",i);
			}
		}
	}
	printf("%d¸ö",count);
}
