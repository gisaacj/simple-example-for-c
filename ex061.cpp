#include<stdio.h>
int main(){
	int a,b,c,m,t;
	printf("请输入两个整数:\n");
	scanf("%d%d",&a,&b);
	if(a<b){
		t=a;
		a=b;
		b=t;
	}
	m=a*b;
	c=a%b;
	while(c!=0){
		a=b;
		b=c;
		c=a%b;
	}
	printf("公约数:\n%d\n",b);
	printf("公倍数:\n%d\n",m/b);
} 
