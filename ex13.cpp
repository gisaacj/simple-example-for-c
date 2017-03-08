#include<stdio.h>
int main(){
	int x,y,z=1,i;
	scanf("%d",&x);
	scanf("%d",&y);
	for(i=0;i<y;i++)
	z*=x;
	if(z%1000<100)
	printf("0%d",z%1000);
	else
	printf("%d",z%1000);
	return 0;
} 
