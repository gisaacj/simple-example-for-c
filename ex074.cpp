#include<stdio.h>
int main(){
	int a,b,x,y;
	printf("ÇëÊäÈëaºÍb:\n");
	scanf("%d%d",&a,&b);
	x=a*a+b*b;
	y=a+b;
	if(x>100)
		printf("a^2+b^2=%d\n",x);
	else
		printf("a+b=%d\n",y);
	return 0;
}
