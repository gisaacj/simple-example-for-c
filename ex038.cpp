#include<stdio.h>
int main(){
	int a[6],b[6],x,i;
	x=2520/6;
	for(i=1;i<6;i++)
		b[i]=x*(8-i)/(7-i);
		b[0]=a[0]=(x-b[5]/3)*8/7;
	for(i=1;i<6;i++)
		a[i]=b[i]-b[i-1]/(9-i);
	for(i=0;i<6;i++)
		printf("%d\n",a[i]);
	return 0;
}
