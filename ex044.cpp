#include<stdio.h>
int main(){
	int n,i,j,sum1,sum2;
	for(n=0;n<10000;n++){
		sum1=0;
		sum2=0;
		for(i=1;i<n;i++)
			if(n%i==0)
				sum1+=i;
		for(j=1;j<sum1;j++)
			if(sum1%j==0)
				sum2+=j;
		if(sum2==n&&n<sum1)
			printf("%5d,%5d\n",n,sum1);
	}
	return 0;
}
