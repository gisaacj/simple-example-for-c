#include<stdio.h>
int main(){
	int a,b,c,m,t;
	printf("��������������:\n");
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
	printf("��Լ��:\n%d\n",b);
	printf("������:\n%d\n",m/b);
} 
