#include<stdio.h>
int main(){
	int a,b,c,t;
	printf("请依次输入三个整数\n");
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	if(a>b){
		t=a;
		a=b;
		b=t;
	}
	if(b>c){
		t=b;
		b=c;
		c=t;
	}
	if(a>c){
		t=a;
		a=c;
		c=t;
	}
	printf("%d,%d,%d",a,b,c);
	return 0;
}
